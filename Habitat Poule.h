#ifndef Habitat_Poule_h
#define Habitat_Poule_h

class Habitatpoule : public Ihabitat {
private:
    string name;
    int capacity;
    int money;
    vector<IAnimal *>h_poule;
    int nb_poule;
public:
    Habitatpoule(string name, int capacity, int money) : Ihabitat(name, capacity, money) {}
    
    void addpoule(IAnimal *poule){
        h_poule.push_back(poule);
    }
    void erase(int nb){
        auto it = h_poule.begin()+nb;
        h_poule.erase(it);
    }
    void delpoule(int del){
        if (del == 0){
            h_poule.pop_back();
        } else{
            return;
        }
    }
    void printhabitatpoule(){
        cout << "Habitat poule :" << endl << endl;
        int i = 0;
        for (const auto& element : h_poule) {
            i++;
            std::cout << i << ". " << element->getName() << " " << element->getRace() << endl;

        }
        nb_poule = i;
    }
    void setcapacity(int newcapacity){
        capacity += newcapacity;
    }
    void undocapacity(int newcapacity){
        capacity -= newcapacity;
    }
    
    string getName() {return name;}
    int getCapacity() {return capacity;}
    int getMoney() {return money;}
    int getnbpoule(){return nb_poule;}
};


#endif /* Habitat_Poule_h */
