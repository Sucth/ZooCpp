#ifndef Aigle_h
#define Aigle_h

// Classe Aigle dérivée de IAnimal
class Aigle : public IAnimal {
private:
    string name;
    int age;
    int money;
    string race;
    int day;
    int month;
    int year;
    vector<int>a_viande;
    int last_month = 1;
    int qte_totale_viande = 0;
    int male = 0;
    int femelle = 0;
    int couldb = 0;

public:
    Aigle(string name, int age, int money, string race) : IAnimal(name, age, money, race) {}


    void accouplement(string setrace){
        if (setrace == "Male"){
            male++;
        } else if (setrace == "Female"){
            femelle++;
        }

    }

    int child(){
        if (male >= 1 && femelle >= 1){
            if (couldb == 9){
                cout << "Votre AIGLE a acoucher d'un petit" << endl;
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

    void requestmeet(vector<int> setmeet){
        a_viande = setmeet;
    }

    void inventorymeattigre(){
        int qte_viande = 0;
        for (auto& element : a_viande) {
            qte_viande += element;
        }
        std::cout << qte_viande << " " << "Kilo de viande dans l'enclot des aigles" << std::endl;
        qte_totale_viande = qte_viande;
    }
    
    virtual void equip() override { cout << "Buy " << i_name << " with cost " << money << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with cost " << money << endl; }


    double getPrix() const {return money;}
    
    double setPrix(double newprix) {return money = newprix;}

    string getNom() const {return name;}
};


#endif /* Aigle_h */
