#ifndef IAnimal_h
#define IAnimal_h
using namespace std;

// Classe abstraite IAnimal
class IAnimal {
public:
    IAnimal(string name, int age, int money, string race) : i_name(name), i_age(age), i_money(money), i_race(race) {}

    virtual void equip() = 0;
    virtual void unequip() = 0;

    string getName() const { return i_name; }
    string getRace() const {return i_race;}
    int getAge() const { return i_age; }
    int getMoney() const { return i_money; }
    bool isBought() const { return bought; }
    void setBought(bool b) { bought = b; }

protected:
    string i_name;
    int i_age;
    int i_money;
    string i_race;
    bool bought = false;
};

#endif /* IAnimal_h */
