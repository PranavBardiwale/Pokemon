#include<iostream>
using namespace std;

// ProfessorOak class definition
class ProfessorOak {
public:
    string name;

    // Parameterized constructor
    ProfessorOak(string p_name);

    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);

    // New method for the main quest conversation
    void explainMainQuest(Player& player);
};