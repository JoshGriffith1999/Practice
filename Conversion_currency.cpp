/*
Josh Griffith
11/20/16

Currency converter(Currency already in)
U.S dollar
British pound;
Mecican Peso
Canadian dollar
Europen eruo
Brazilain Real



//Update 3 - Brazilian real

//Update 4 - Chinese yuan



*/

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

//global variables
//float finish = 0;

//classes with functions in side

//Canadian dollar start
class Canadian_dollar
{
private:
	float finish;
public:

	float can_brit(float conversion)
	{
		finish = conversion * .6;
		return finish;
	}
	float can_mex(float conversion)
	{
		finish = conversion * 15.29;
		return finish;
	}
	float can_us(float conversion)
	{
		finish = conversion * .74;
		return finish;
	}
	float can_euro(float conversion)
	{
		finish = conversion * .7;
		float finish;
	}
};
//British pound start
class British_pound
{
private:
	float finish;
public:

	float brit_can(float conversion)
	{
		finish = conversion * 1.67;
		return finish;
	}
	float brit_mex(float conversion)
	{
		finish = conversion * 25.43;
		return finish;
	}
	float brit_us(float conversion)
	{
		finish = conversion * 1.23;
		return finish;
	}
	float brit_euro(float conversion)
	{
		finish = conversion * 1.16;
		return finish;
	}
};
//Mexican peso start
class Mexican_peso
{
private:
	float finish;
public:

	float mex_can(float conversion)
	{
		finish = conversion * .065;
		return finish;
	}
	float mex_brit(float conversion)
	{
		finish = conversion * .039;
		return finish;
	}
	float mex_us(float conversion)
	{
		finish = conversion * .048;
		return finish;
	}
	float mex_euro(float conversion)
	{
		finish = conversion * .043;
		return finish;
	}
};
//U.S dollar start
class US_dollar
{
private:
	float finish;
public:

	float us_can(float conversion)
	{
		finish = conversion * 1.35;
		return finish;
	}
	float us_brit(float conversion)
	{
		finish = conversion * .81;
		return finish;
	}
	float us_mex(float conversion)
	{
		finish = conversion * 20.64;
		return finish;
	}
	float us_euro(float conversion)
	{
		finish = conversion * .94;
		return finish;
	}

};
//Europen Euro start
class euro
{
private:
	float finish;
public:
	float euro_can(float conversion)
	{
		finish = conversion * 1.43;
		return finish;
	}
	float euro_brit(float conversion)
	{
		finish = conversion * .86;
		return finish;
	}
	float euro_mex(float conversion)
	{
		finish = conversion * 21.86;
		return finish;
	}
	float euro_us(float conversion)
	{
		finish = conversion * 1.06;
		return finish;
	}
};
//Brazillian Real
class Real 
{
private:
	float finish;
public:

};
//Chinese Yuan
class Yuan 
{
private:
	float finish;
public:
};

int main()
{
	//Create local variables
	int decision = 0;
	int decision2 = 0;
	float start = 0;

	//Create class objects

	Canadian_dollar canada_object;
	British_pound british_object;
	Mexican_peso mexican_obect;
	US_dollar us_object;
	euro euro_object;
	Real realObject;
	Yuan YuanObject;
	//Create decision chart
	cout << "1: Canadian dollar\n2: British pound\n3: Mexican Peso\n4: U.S dollar\n5: Euro" << endl;

	//ask and recieve user conversion answer
	cout << "Choose the that you currently have" << endl;
	cin >> decision;

	//Switch statement to apply the following answer
	switch (decision)
	{
		//case 1 Starting with Canadian dollar
	case 1:
	{
		cout << "What are you converting to? Chose from the list below" << endl;
		cout << "1: British pound\n2: Mexican peso\n3: U.S dollar\n4: Euro" << endl;;
		cin >> decision2;
		switch (decision2)
		{
			{
		case 1:
		{
			cout << "Enter what you have" << endl;
			cin >> start;
			cout << "You had: " << start << "; " << "Now you have: " << canada_object.can_brit(start) << endl;
		}
		break;
		case 2:
		{
			cout << "Enter what you have" << endl;
			cin >> start;
			cout << "You had: " << start << "; " << "Now you have: " << canada_object.can_mex(start) << endl;
		}
		break;
		case 3:
		{
			cout << "Enter what you have" << endl;
			cin >> start;
			cout << "You had: " << start << "; " << "Now you have: " << canada_object.can_us(start) << endl;
		}
		break;
		case 4:
		{
			cout << "Enter what you have" << endl;
			cin >> start;
			cout << "You had: " << start << "; " << "Now you have: " << canada_object.can_euro(start) << endl;
		}
		break;
			}
		}
		break;
		//case 2 Starting with British pound
	case 2:
	{
		cout << "What are you converting to? Use the list below" << endl;
		cout << "1: Canadian dollar\n2: Mexican peso\n3: U.S dollar\n4: Euro" << endl;
		cin >> decision2;

		switch (decision2)
		{
		case 1:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << british_object.brit_can(start) << endl;
		}
		break;
		case 2:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << british_object.brit_mex(start) << endl;
		}
		break;
		case 3:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << british_object.brit_us(start) << endl;
		}
		break;
		case 4:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << british_object.brit_euro(start) << endl;
		}
		break;
		default:
			break;
		}
	}
	break;
	//case 3 starting with Mexican peso
	case 3:
	{
		cout << "What are you converting to? Use the list below" << endl;
		cout << "1: Canadian dollar\n2: British pound\n3: U.S dollar\4: Euro" << endl;
		cin >> decision2;

		switch (decision2)
		{
		case 1:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << mexican_obect.mex_can(start) << endl;
		}
		break;
		case 2:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << mexican_obect.mex_brit(start) << endl;
		}
		break;
		case 3:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << mexican_obect.mex_us(start) << endl;
		}
		break;
		case 4:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << mexican_obect.mex_euro(start) << endl;
		}
		break;
		}

	}
	break;
	//case 4 starting with U.S dollar
	case 4:
	{
		cout << "What are you converting to? Use the list below" << endl;
		cout << "1: Canadian dollar\n2: British pound\n3: Mexican peso\n4: Euro" << endl;
		cin >> decision2;

		switch (decision2)
		{
		case 1:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << us_object.us_can(start) << endl;
		}
		break;
		case 2:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << us_object.us_brit(start) << endl;
		}
		break;
		case 3:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << us_object.us_mex(start) << endl;
		}
		break;
		case 4:
		{
			cout << "How much do you have?" << endl;
			cin >> start;
			cout << "You had: " << start << " " << "Now you have: " << us_object.us_euro(start) << endl;
		}
		break;
		}

	}
	break;
	//Case 5 starting with European Euro
	case 5:
	{
		cout << "1: Canandian dollar\n2: British pound\n3: Mexican peso\n4: U.S dollar" << endl;
		cout << "What are you converting to? Enter a number from the list above" << endl;
		cin >> decision2;;

		switch (decision2)
		{
		case 1:
		{
			cout << "Who much do you have?" << endl;
			cin >> start;
			cout << "You now have: " << start << "\t" << "Now you have: " << euro_object.euro_can(start) << endl;
		}
		break;
		case 2:
		{
			cout << "Who much do you have?" << endl;
			cin >> start;
			cout << "You now have: " << start << "\t" << "Now you have: " << euro_object.euro_brit(start) << endl;
		}
		break;
		case 3:
		{
			cout << "Who much do you have?" << endl;
			cin >> start;
			cout << "You now have: " << start << "\t" << "Now you have: " << euro_object.euro_mex(start) << endl;
		}
		break;
		case 4:
		{
			cout << "Who much do you have?" << endl;
			cin >> start;
			cout << "You now have: " << start << "\t" << "Now you have: " << euro_object.euro_us(start) << endl;
		}
		break;
		}
	}
	break;
	//User doesn't give a correct decision answer // this doesn't always works, depends on the compiler I guest
defualt:
	{
		cout << "Incorrect answer buddy" << endl;
	}
	break;
	}

	cout << endl;
	cout << "Thank you for using the handy dandy currency converter" << endl;


	getch();
	return 0;
	}
}