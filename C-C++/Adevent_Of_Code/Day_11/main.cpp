#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

#define MAX_SIZE 10

struct galaxy_cord
{
    int x = 0;
    int y = 0;
};

//Function prototype
int walk(galaxy_cord cord_1, galaxy_cord cord_2, int* row, int* column);

char galaxy[MAX_SIZE][MAX_SIZE];

int main(int argc, char** argv){


    uint32_t sum = 0;
    string read_buffer;
    ifstream input("input2.txt");
    galaxy_cord all_galaxies[MAX_SIZE];

    int current_line = 0;
    int max_galaxy = -1;

    int row_has_galaxy[MAX_SIZE] = {0};
    int column_has_galaxy[MAX_SIZE] = {0};

    //Make sure the file opened correctly
    if(!input.is_open()){
        cout << "Failed to open file" << endl;
        return -1;
    }
    
    //Read the file, place into buffer
    while( getline(input, read_buffer) ){

        //Find # galaxy in each line
        for(int i = 0; i < read_buffer.length(); i++){

            if(read_buffer[i] == '#'){

                max_galaxy++;

                all_galaxies[max_galaxy].x = current_line;
                all_galaxies[max_galaxy].y = i;

                if(i > MAX_SIZE || current_line > MAX_SIZE){
                    cout << "Error: Buffer two small for input file" << endl;
                    input.close();
                    return -1;
                }

                //Mark the column and row has a galaxy in it
                row_has_galaxy[current_line] = 1;
                column_has_galaxy[i] = 1;
            }
        }

        current_line++;
    }

    for(int i = 0; i < MAX_SIZE; i++){
        cout << "Row: " << i  << " " << row_has_galaxy[i] << endl;
    }

    for(int i = 0; i < MAX_SIZE; i++){
        cout << "Column: " << i  << " " << column_has_galaxy[i] << endl;
    }

    for(int i = 0; i < max_galaxy; i++){
        all_galaxies[i].x++;
        all_galaxies[i].y++;
    }

    input.close();

    if(max_galaxy == -1){
        cout << "Error: No galaxies detected" << endl;
        return -1;
    }
    
    
    cout << "There are " << max_galaxy + 1<< " from the input file" << endl;

    //Find shortest path 
    for(int i = 0; i < max_galaxy; i++){
        for(int j = i +1; j < max_galaxy; j++){

            //Spaces from the X
            sum = sum + walk(all_galaxies[i], all_galaxies[j], row_has_galaxy, column_has_galaxy);
       }
    }
    
    cout << "Total Sum is " << sum << endl;

    return 0;
}

int walk(galaxy_cord cord_1, galaxy_cord cord_2, int* row, int* column){

    int temp = 0;
    int x_sum = 0;
    int y_sum = 0;

    if(cord_1.x > cord_2.x){
        temp = cord_1.x;
        cord_1.x = cord_2.x;
        cord_2.x = temp;    
    }
    
    if(cord_1.y > cord_2.y){
        temp = cord_1.y;
        cord_1.y = cord_2.x;
        cord_2.y = temp;    
    }

    for(int i = cord_1.x; i <= cord_2.x; i++){

        if(row[i] == 0){
            x_sum = x_sum + 1;
        }else{
            x_sum = x_sum + 2;
        }
    }

    for(int i = cord_1.y; i <= cord_2.y; i++){

        if(column[i] == 0){
            y_sum = y_sum + 2;
        }else{
            y_sum = y_sum + 1;
        }
    }

   // cout << '(' << cord_1.x << "," << cord_1.y << ")" << "=>" << '(' << cord_2.x << "," << cord_2.y << ")" << " distance " << y_sum + x_sum << endl;

    return x_sum + y_sum;
}