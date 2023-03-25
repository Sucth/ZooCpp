#ifndef Habitat_Aigle_h
#define Habitat_Aigle_h

class Habitataigle : public Ihabitat {
private:
    string name;
    int capacity;
    int money;
    vector<IAnimal *>h_aigle;
    int nb_aigle;
    vector<int>a_viande;
    int qte_totale_viande = 0;
public:
    Habitataigle(string name, int capacity, int money) : Ihabitat(name, capacity, money) {}

    void addaigle(IAnimal *aigle){
        h_aigle.push_back(aigle);
    }
    void erase(int nb){
        auto it = h_aigle.begin()+nb;
        h_aigle.erase(it);
    }
    void delaigle(int del){
        if (del == 0){
            h_aigle.pop_back();
        } else{
            return;
        }
    }
    void printhabitataigle(){
        cout << "Habitat aigle :" << endl << endl;
        int i = 0;
        for (const auto& element : h_aigle) {
            i++;
            std::cout << i << ". " << element->getName() << " " << element->getRace() << endl;

        }
        nb_aigle = i;
    }
    void setcapacity(int newcapacity){
        capacity += newcapacity;
    }
    void undocapacity(int newcapacity){
        capacity -= newcapacity;
    }

    int setcap(int newcap){capacity = newcap;}
    vector<int> setmeat(vector<int> meat){a_viande = meat;}
    vector<int> getameat(){return a_viande;}
    string getName() {return name;}
    int getCapacity() {return capacity;}
    int getMoney() {return money;}
    int getnbaigle(){return nb_aigle;}
};

#endif /* Habitat_Aigle_h */
