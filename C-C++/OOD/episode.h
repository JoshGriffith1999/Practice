/*
    #pragma once is used to replace tje #ifndef __MY_HEADER__ <enter> #define __MY_HEADER__ <enter> #endif
    Incluode #pragma once and tje #ifndef incase of old legacy compilers

    both prevent the header file from added into a cpp file multiple times

    static: keyword when used to delcared variable, used in two different way.
        When used outside of a class, the linkage of that varibale is going to be internal to that cpp file, linker won't look externally
        When used inside a class, a class member, that member is going to be shared amongst all instances of that class
        When used with a method/function, the static method/function can only access other static members
    
    external: keyword when are telling the compiler and linker to find the symbol of the delcared variable in a different cpp file

    enum: way to give names to a set of known values. Helps when we want to give intergers more readable states/names
*/

#pragma once
#ifndef __EPISODE_H__
#define __EPISODE_H__

#include<iostream>
#include<strings.h>

using namespace std;

enum imdb_rating : char
{
    A = 1,
    B = 2,
    C = 3,
    D = 4,
    F = 5
};

class episode{

    private:
        int episode_number;
        int season_number;
        string episode_title;
        imdb_rating episode_rating;

        void p_set_episode_number(int);
        void p_set_season_number(int);
        void p_set_episode_title(string);
        void p_set_rating(int);

        int p_get_episode_number();
        int p_get_season_number();
        int p_get_rating();
        string p_get_episode_title();

    public:
        episode();
        episode(int number, int season, string title);
        ~episode();

        void set_episode_number(int);
        void set_season_number(int);
        void set_episode_title(string);
        void set_rating(int);

        int get_episode_number();
        int get_season_number();
        int get_rating();
        string get_episode_title();
};

#endif;

