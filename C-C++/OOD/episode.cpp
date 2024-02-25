#include"episode.h"

episode::episode(){
    this->p_set_episode_number(0);
    this->p_set_season_number(0);
    this->p_set_episode_title(" ");
}
episode::episode(int number, int season, string title){

    this->p_set_episode_number(number);
    this->p_set_season_number(season);
    this->p_set_episode_title(title);
}
episode::~episode(){}

/*                                      */
void episode::set_episode_number(int episode_number){

    try{
        if(episode_number < 0){
            throw(episode_number);
        }
        else{
            this->p_set_episode_number(episode_number);
        }
    }
    catch(int episode_number){
        perror("The episode number you entered is below 0 - this isn't possible\n");
    }
}
void episode::set_season_number(int season_number){

    try{
        if(season_number < 1){
            throw(season_number);
        }
        else{
            this->p_set_season_number(season_number);
        }
    }
    catch(int season_number){
        perror("The episode number you entered is below 1 - this isn't possible\n");
    }
}
void episode::set_episode_title(string episode_title){
    try{
        if(episode_title == " "){
            throw(episode_title);
        }
        else{
            this->p_set_episode_title(episode_title);
        }
    }
    catch(string episode_title){
        perror("The episode title you entered is blank - this isn't possible\n");
    }
}
void episode::set_rating(int rating){

    try{
        if(rating < 1 || rating > 5){
            throw(rating);
        }
        else{
            p_set_rating(rating);
        }
    }
    catch(int rating){
        perror("The rating you gave is not a valid rating. All rating must be between 1 and 5\n");
    }
}

/*                                   */
int episode::get_episode_number(){
    
    int season_number = this->p_get_episode_number();

    try{
            if(season_number < 1){
                throw(season_number);
            }
            else{
                return season_number;
            }
        }
        catch(int season_number){
            perror("The episode has no number. Please enter one.\n");
        }

}
int episode::get_season_number(){
    int season_number = this->p_get_episode_number();

    try{
            if(season_number < 1){
                throw(season_number);
            }
            else{
                return season_number;
            }
        }
        catch(int season_number){
            perror("This episode has no know season number. Please enter one.\n");
        }

}
string episode::get_episode_title(){

    string episode_title = this->p_get_episode_title();

    try{
        if( episode_title == " "){
            throw(episode_title);
        }
        else{
            return episode_title;
        }
    }
    catch(string episode_title){
        perror("The episode has no title to be returned. Please set one.\n");
    }
}
int episode::get_rating(){
    int rating = this->p_get_rating();

    return rating;

}


/*       Private Methods             */
void episode::p_set_episode_number(int episode){

    this->episode_number = episode;
}
void episode::p_set_season_number(int season){
    this->season_number = season;
}
void episode::p_set_episode_title(string title){
    this->episode_title = title;
}
void episode::p_set_rating(int rating){
    this->episode_rating = (imdb_rating)rating;
}

int episode::p_get_episode_number(){
    return this->episode_number;
}
int episode::p_get_season_number(){
    return this->season_number;
}
string episode::p_get_episode_title(){
    return this->episode_title; 
}
int episode::p_get_rating(){

    int rating = 0;

    switch (this->episode_rating)
    {
        case imdb_rating::A:
            rating = 1;
            break;
        case imdb_rating::B:
            rating = 2;
            break;
        case imdb_rating::C:
            rating = 3;
            break;
        case imdb_rating::D:
            rating = 4;
            break;
        case imdb_rating::F:
            rating = 5;
            break;
        default:
            rating = 5;
            break;
    }

    return rating;
}