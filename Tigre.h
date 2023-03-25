#ifndef Tigre_h
#define Tigre_h
#include <numeric>

// Classe Tigre dérivée de IAnimal
class Tigre : public IAnimal {
private:
    string name;
    int age;
    int money;
    string race;
    int day;
    int month;
    int year;
    int last_month = 1;
    int male = 0;
    int femelle = 0;
    int couldb = 0;

public:
    Tigre(string name, int age, int money, string race) : IAnimal(name, age, money, race) {}

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
                cout << "Votre lionne a acoucher d'un petit" << endl;
                couldb = 0;
                return 2;

            }
            couldb++;
            return 0;

        } else{
            return 1;
        }
    }

    void requestday(int setday){day = setday;}
    void requestmonth(int setmonth){month = setmonth;}
    void requestyear(int setyear){year = setyear;}
    //int setnbtigre(int tigre){nb_tigre = tigre;}
    void getdate(){cout << "Day: " << day << "  Month: " << month << "  Year: " << year << endl;}
    virtual void equip() override { cout << "Buy " << i_name << " with cost " << money << endl; }
    virtual void unequip() override { cout << "Sell " << i_name << " with cost " << money << endl; }
    double getPrix() const {return money;}
    double setPrix(double newprix) {return money = newprix;}
    string getNom() const {return name;}
    string getRace() const {return race;}
};


#endif /* Tigre_h */