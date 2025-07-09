#include <iostream>
using namespace std;

int main() {
    string player_name;
    cout<< "Enter your Name" << endl;
    
    cin >> player_name;

    cout <<"Welcome to the Pokemon world " << player_name << "!,I am Professor Oak \n";
    cout << "Choose your Pokemon\n";
    cout << "1.Bulbasaur\n2.Charmander\n3.Squirtle\n";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "your mate is Bulbasaur\n";
    }
    else if (choice == 2) {
        cout << "your mate is Charmander\n";
    }
    else if (choice == 3) {
        cout << "Your mate is Squirtle\n";
    }
    else {
        cout << "It's an invalid choice\n";
    }

    cout << "Ah, an excellent choice!\nBut beware, Trainer,this is only the beginning.\nYour journey is about to unfold.\nNow let’s see if you’ve got what it takes to keep going!\nGood luck, and remember… Choose wisely!";

    return 0;
}




