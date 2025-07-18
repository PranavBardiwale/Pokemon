#include <iostream>
#include <string>
using namespace std;

// Define an enum for Pokemon choices
enum class PokemonChoice {
    Charmander = 1,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Normal
};

enum class HealingItems {
    Potion,
    Elixir
};

enum class BattleItems {
    Potion,
    Elixir
};

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;

    //created 2 constructors
    Pokemon(){

    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void attack() { cout << name << " attack with a powerful move!\n"; }
};

class Player {
public:
    //Attributes
    string name;
    Pokemon chosenPokemon;

    //Method to choose pokemon
    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {
        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Earth, 100);
            break;
        case PokemonChoice::Squirtle: 
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
        }
        cout << "Player " << name << " chose" << chosenPokemon.name << "!\n";

    }
};

//Professor oak class definition
class ProfessorOak {
public:
    string name;

    //method to greet player
    void greetPlayer(Player& player) {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    //Method to ask the player to choose a pokemon
    void offerPokemonChoices(Player& player) {
        cout << name << ": First, tell me, what’s your name?\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

        //Presenting Pokemon choices
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So,which one will it be?Enter the number of your choice\n";
        cin >> choice;
        player.choosePokemon(choice);
    }
};

int main() {

    //Creating Obejcts of ProffessorOak,Pokemon and player class
    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;

    //Assigning values to PlaceholderPokemon attributes
    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::Electric;
    placeholderPokemon.health = 40;

    //Assigniong values to the player attribute
    player.name = "Trainer";

    //Assigning values to the professorOak
    professor.name = "Professor Oak";

    //Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Conclude the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";


    /*// Variables to store player name and chosen Pokemon
    string player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::Charmander; // Default to an invalid choice
    */
    //Using HealingItems
    /*HealingItems HealPack = HealingItems::Elixir;

    //Using BattleItems
    BattleItems BattlePack = BattleItems::Potion;

    cout << "Choose the Pack" << endl;

    switch (HealingItems) {
    case 1: cout << "Healing Potion used! Your Pokémon recovers HP!\n";
        break;
    case 2: cout << "Healing Elixir used! Your Pokémon recovers HP!\n";
    }*/
    /*
    // Introduction by the Professor
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
    cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    // Taking player name as input
    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name << "! What a fantastic name!\n";
    cout << "Professor Oak: You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

    // Presenting Pokemon choices
    cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    // Map the integer choice to the corresponding enum value
    switch (choice) {
    case 1:
        chosen_pokemon = Charmander;
        break;
    case 2:
        chosen_pokemon = Bulbasaur;
        break;
    case 3:
        chosen_pokemon = Squirtle;
        break;
    default:
        chosen_pokemon = InvalidChoice;
        break;
    }

    // Respond based on the chosen Pokemon
    switch (chosen_pokemon) {
    case Charmander:
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;
    case Bulbasaur:
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;
    case Squirtle:
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;
    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = Charmander; // Default to Charmander if invalid choice
        cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
        break;
    }

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur" : "Squirtle")
        << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
    */
    return 0;
}