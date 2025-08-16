#include <string>
using namespace std;

enum class PokemonType;

class Pokemon {
protected:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
public:
    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health,int attackPower);

    // Copy constructor
    Pokemon(const Pokemon& other);

    // Destructor
    ~Pokemon();

    virtual void attack(Pokemon * target)=0;

	void TakeDamage(int damage);

	bool isFainted() const;

    int heal();
};