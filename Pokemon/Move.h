#pragma once
#include <string>
using namespace std;


struct Move
{
    string name;
    int power;

    Move(const string& moveName, int movePower)
    {
        name = moveName;
        power = movePower;
    }
};
