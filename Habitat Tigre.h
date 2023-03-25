#ifndef Habitat_Tigre_h
#define Habitat_Tigre_h

class Habitattigre : public Ihabitat {
private:
    string name;
    int capacity;
    int money;
    vector<IAnimal *>h_tigre;
    vector<int>t_viande;
    int qte_totale_viande = 0;
    int nb_tigre;
public:
    Habitattigre(string name, int capacity, int money) : Ihabitat(name, capacity, money) {}

    void inventorymeattigre() {
        int qte_viande = 0;
        for (auto& element : t_viande) {
            qte_viande += element;
        }
        std::cout << qte_viande << " " << "Kilo de viande dans l'enclot des tigre" << std::endl;
        qte_totale_viande = qte_viande;
    }

    void erase(int nb){
        auto it = h_tigre.begin()+nb;
        h_tigre.erase(it);
    }

    void addtigre(IAnimal *tigre){
        h_tigre.push_back(tigre);
    }
    void deltigre(int del){
        if (del == 0){
            h_tigre.pop_back();
        } else{
            return;
        }
    }
    void printhabitattigre(){
        cout << "Habitat Tigre :" << endl << endl;
        int i = 0;
        for (const auto& element : h_tigre) {
            i++;
            std::cout << i << ". " << element->getName() << " " << element->getRace() << endl;

        }
        nb_tigre = i;
    }
    void undocapacity(int newcapacity){
        capacity -= newcapacity;
    }
    void requestmeet(vector<int> setmeet){t_viande = setmeet;}
    vector<int> aiglemeat(){return t_viande;}
    int setcap(int newcap){capacity = newcap;}
    string getName() {return name;}
    int getPlace() {return capacity;}
    int getMoney() {return money;}
    int getnbtigre(){return nb_tigre;}
};


#endif /* Habitat_Tigre_h */