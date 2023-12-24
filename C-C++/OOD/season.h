#pragma once
#ifndef __SEASON_H__
#define __SEASON_H__

#include"episode.h"

#define MAX_NUMBER_OF_EPISODES 16

class season{

    private:
        episode episode_list[MAX_NUMBER_OF_EPISODES];
        int episodes_in_season;

    public:
        season();
        ~season();

        void add_episode_manual();
        void add_episode_automatic(int, int, string);
        void remove_episode_manual();
        void remove_episode_automatic(int);

        int get_number_of_episodes();
        episode get_episode();


};
#endif // !__SEASN__H__