#ifndef Poule_h
#define Poule_h

// Classe Poule dérivée de IAnimal
class Poule : public IAnimal {
private:
    string name;
    int age;
    int money;
    string race;
    int day;
    int month;
    int year;
    vector<int>p_graine;
    int male = 0;
    int femelle = 0;
    int couldb = 0;

public:
    Poule(string name, int age, int money, string race) : IAnimal(name, age, money, race) {}


    void accouplement(string setrace){
        if (setrace == "Male" && age >= 4){
            male++;
        } else if (setrace == "Female" && age >= 4){
            femelle++;
        }

    }

    int child(){
        if (male >= 1 && femelle >= 1){
            if (couldb == 9){
                cout << "Votre POULE a acoucher d'un petit" << endl;
                return 2;
            }
            couldb++;
            return 0;
        } else{
            return 1;
        }
    }

    void requestday(int setday){
        day = setday;
    }
    void requestmonth(int setmonth){
        month = setmonth;
    }
    void requestyear(int setyear){
        year = setyear;
    }

    void requestgraine(vector<int> setmeet){
        p_graine = setmeet;
    }

    void inventorygrainepoule(){
        int qte_totale = 0;
        for (auto& element : p_graine) {
            qte_totale += element;
        }
        std::cout << qte_totale << " " << "Kilo de graine dans l'enclot des poules" << std::endl;
    }

    
    virtual void equip() override { cout << "Buy " << i_name << " with cost " << money << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with cost " << money << endl; }

    double getPrix() const {return money;}
    
    double setPrix(double newprix) {return money = newprix;}

    string getNom() const {return name;}
};


#endif /* Poule_h */
