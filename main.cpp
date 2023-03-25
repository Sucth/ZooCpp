#include <iostream>
#include <string>
#include <ctime>
#include "vector"
#include "IAnimal.h"
#include "Tigre.h"
#include "Aigle.h"
#include "Poule.h"
#include "Ihabitat.h"
#include "Habitat Tigre.h"
#include "Habitat Aigle.h"
#include "Habitat Poule.h"
#include "Zoo.h"

using namespace std;

int runOnceInThree() {
    int randomNum = std::rand() % 3;
    return randomNum;
}

int runOnceInTen(){
    int randomNum = std::rand() % 10;
    return randomNum;
}

int runOnceInAHundred(){
    int randomNum = std::rand() % 100;
    if (randomNum == 2) {
        return 2;
    } else {
    }
}

int runOnceInAHundred2(){
    int randomNum = std::rand() % 100;
    if (randomNum == 3) {
        return 3;
    } else {

    }
}


int runOnceInFive(){
    int randomNum = std::rand() % 5;
    return randomNum;
}


void menu(){
    Zoo zoo;
    zoo.setmoney(80000);
    Tigre tigre_m("Tigre 6 mois", 0.5, 3000, "Male");
    Tigre tigre14_m("Tigre 14 ans", 14, 60000, "Male");
    Tigre tigre4_m("Tigre 4 ans", 4, 120000, "Male");

    Aigle aigle_m("aigle 6 mois", 0.5, 1000, "Male");
    Aigle aigle4_m("aigle 4 ans", 4, 4000, "Male");
    Aigle aigle14_m("aigle 14 ans", 14, 2000, "Male");

    Poule poule_m("Poule", 0.5, 20, "Male");

    Tigre tigre_f("Tigre 6 mois", 0.5, 3000, "Femelle");
    Tigre tigre14_f("Tigre 14 ans", 14, 60000, "Femelle");
    Tigre tigre4_f("Tigre 4 ans", 4, 120000, "Femelle");

    Aigle aigle_f("aigle 6 mois", 0.5, 1000, "Femelle");
    Aigle aigle4_f("aigle 4 ans", 4, 4000, "Femelle");
    Aigle aigle14_f("aigle 14 ans", 14, 2000, "Femelle");

    Poule poule_f("Poule", 0.5, 20, "Femelle");

    Habitattigre hb_tigre("Habitat tigre", 2, 2000);
    Habitataigle hb_aigle("Habitat aigle", 4, 2000);
    Habitatpoule hb_poule("Habitat poule", 10, 300);

    string namezoo;
    cout << "=== ENTER YOUR ZOO'S NAME ===" << endl;
    cin >> namezoo;
    cout << "Welcome to" << namezoo << " zoo" << " You have a budget of $80,000" << endl;
    int month = zoo.getmonth();

    while (true) {
        //met le temps a jours
        zoo.setnbtigre(hb_tigre.getnbtigre());
        zoo.setnbaigle(hb_aigle.getnbaigle());
        zoo.setnbpoule(hb_poule.getnbpoule());

        tigre_m.requestday(zoo.getday());
        aigle_m.requestday(zoo.getday());
        poule_m.requestday(zoo.getday());

        tigre_m.requestmonth(zoo.getmonth());
        aigle_m.requestmonth(zoo.getmonth());
        poule_m.requestmonth(zoo.getmonth());

        tigre_m.requestyear(zoo.getyear());
        aigle_m.requestyear(zoo.getyear());
        poule_m.requestyear(zoo.getyear());
        tigre_m.getdate();

        cout << "MENU\n";
        cout << "What would you like to do?" << endl;
        cout << "1. Shop" << endl;
        cout << "2. Animal Management" << endl;
        cout << "3. Zoo Management" << endl;
        cout << "4. Time" << endl;
        cout << "5. Quit" << endl;

        int choix;
        cin >> choix;

        if (choix == 1) {
            while (true) {
                cout << "Welcome to our store!" << endl;
                cout << "What would you like to buy?" << endl;
                cout << "1. Meat" << endl;
                cout << "2. Seeds" << endl;
                cout << "3. Buy an animal" << endl;
                cout << "4. Sell an animal" << endl;
                cout << "5. Buy a habitat" << endl;
                cout << "6. Sell a habitat" << endl;
                cout << "7. Quit" << endl;

                int choix;
                cin >> choix;

                if (choix == 1) {
                    int qte_viande;
                    int price;
                    cout << "How many kilos of meat do you want to buy?" << endl;
                    cin >> qte_viande;
                    zoo.shopmeet(qte_viande);
                    price = qte_viande * 5;
                    zoo.pay(price);
                    zoo.getzoomoney();
                    break;
                }
                else if (choix == 2) {
                    int qte_graine;
                    int price;
                    cout << "How many kilos of meat do you want to buy?" << endl;
                    cin >> qte_graine;
                    zoo.shopgraine(qte_graine);
                    price = qte_graine * 2.5;
                    zoo.pay(price);
                    zoo.getzoomoney();
                    break;
                }
                else if (choix == 3) {//achat
                    cout << "Which animal would you like to buy?" << endl;
                    cout << "1. 6-month-old Tiger (€3,000)(Male)" << endl;
                    cout << "2. 6-month-old Chicken (€20)(Male)" << endl;
                    cout << "3. 6-month-old Rooster (€100)(Male)" << endl;
                    cout << "4. 6-month-old Eagle (€1,000)(Male)" << endl;
                    cout << "5. 4-year-old Tiger (€120,000)(Male)" << endl;
                    cout << "6. 4-year-old Eagle (€4,000)(Male)" << endl;
                    cout << "7. 14-year-old Tiger (€60,000)(Male)" << endl;
                    cout << "8. 14-year-old Eagle (€2,000)(Male)" << endl << endl;

                    cout << "9. 6-month-old Tiger (€3,000)(Female)" << endl;
                    cout << "10. 6-month-old Chicken (€20)(Female)" << endl;
                    cout << "11. 6-month-old Rooster (€100)(Female)" << endl;
                    cout << "12. 6-month-old Eagle (€1,000)(Female)" << endl;
                    cout << "13. 4-year-old Tiger (€120,000)(Female)" << endl;
                    cout << "14. 4-year-old Eagle (€4,000)(Female)" << endl;
                    cout << "15. 14-year-old Tiger (€60,000)(Female)" << endl;
                    cout << "16. 14-year-old Eagle (€2,000)(Female)" << endl;

                    int choix_animal;
                    cin >> choix_animal;

                    switch (choix_animal) {
                        case 1:
                            if (zoo.getzoomoney() >= 3000) {
                                hb_tigre.addtigre(&tigre_m);
                                zoo.pay(3000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 2:
                            if (zoo.getzoomoney() >= 20) {
                                hb_poule.addpoule(&poule_m);
                                zoo.pay(20);
                                zoo.Bank();
                                hb_poule.printhabitatpoule();
                                poule_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 3:
                            if (zoo.getzoomoney() >= 0) {
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }

                        case 4:
                            if (zoo.getzoomoney() >= 1000) {
                                hb_aigle.addaigle(&aigle_m);
                                zoo.pay(1000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                             }
                        case 5:
                            if (zoo.getzoomoney() >= 120000) {
                                hb_tigre.addtigre(&tigre4_m);
                                zoo.pay(120000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 6:
                            if (zoo.getzoomoney() >= 4000) {
                                hb_aigle.addaigle(&aigle4_m);
                                zoo.pay(4000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 7:
                            if (zoo.getzoomoney() >= 60000) {
                                hb_tigre.addtigre(&tigre14_m);
                                zoo.pay(60000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 8:
                            if (zoo.getzoomoney() >= 2000) {
                                hb_aigle.addaigle(&aigle14_m);
                                zoo.pay(2000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Male");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }

                        case 9:
                            if (zoo.getzoomoney() >= 3000) {
                                hb_tigre.addtigre(&tigre_f);
                                zoo.pay(3000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 10:
                            if (zoo.getzoomoney() >= 20) {
                                hb_poule.addpoule(&poule_f);
                                zoo.pay(20);
                                zoo.Bank();
                                hb_poule.printhabitatpoule();
                                poule_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 11:
                            if (zoo.getzoomoney() >= 3000) {

                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }

                        case 12:
                            if (zoo.getzoomoney() >= 1000) {
                                hb_aigle.addaigle(&aigle_f);
                                zoo.pay(1000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 13:
                            if (zoo.getzoomoney() >= 120000) {
                                hb_tigre.addtigre(&tigre4_f);
                                zoo.pay(120000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 14:
                            if (zoo.getzoomoney() >= 4000) {
                                hb_aigle.addaigle(&aigle4_f);
                                zoo.pay(4000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 15:
                            if (zoo.getzoomoney() >= 60000) {
                                hb_tigre.addtigre(&tigre14_f);
                                zoo.pay(60000);
                                zoo.Bank();
                                hb_tigre.printhabitattigre();
                                tigre_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }
                        case 16:
                            if (zoo.getzoomoney() >= 2000) {
                                hb_aigle.addaigle(&aigle14_f);
                                zoo.pay(2000);
                                zoo.Bank();
                                hb_aigle.printhabitataigle();
                                aigle_m.accouplement("Female");
                                break;
                            } else{
                                cout << "You do not enough money" << endl;
                                break;
                            }

                        default:
                            cout << "Choix invalide." << endl;
                            continue;
                    }

                    break;
                }
                else if (choix == 4) {//vente
                    cout << "Which animal do you want to sell?" << endl;
                    cout << "1. Tiger" << endl;
                    cout << "2. Eagle" << endl;
                    cout << "3. Chicken" << endl;

                    int choix_animal;
                    cin >> choix_animal;


                    if (choix_animal == 1){
                        cout << "Which tiger do you want to sell?" << endl;
                        hb_tigre.printhabitattigre();
                        int choix_animal_vente;
                        cin >> choix_animal_vente;
                        hb_tigre.erase(choix_animal_vente-1);
                    }
                    else if(choix_animal == 2){
                        cout << "Which hen do you want to sell?" << endl;
                        hb_poule.printhabitatpoule();
                        int choix_animal_vente;
                        cin >> choix_animal_vente;
                        hb_poule.erase(choix_animal_vente-1);
                    }
                    else if(choix_animal == 3){
                        cout << "Which eagle do you want to sell?" << endl;
                        hb_aigle.printhabitataigle();
                        int choix_animal_vente;
                        cin >> choix_animal_vente;
                        hb_aigle.erase(choix_animal_vente-1);
                    }
                    else {
                        cout << "Invalid choice. Please select 1, 2 or 3." << endl;
                    }


                }
                else if (choix == 5) {
                    cout << "What do you want to buy?" << endl;
                    cout << "1. Tiger Habitat (€2,000)" << endl;
                    cout << "2. Eagle Habitat (€2,000)" << endl;
                    cout << "3. Chicken Habitat (€500)" << endl;
                    int choicehab;
                    cin >> choicehab;
                    if (choicehab == 1){

                        //
                        zoo.inventory(&hb_tigre);
                        zoo.pay(2000);
                        zoo.Bank();
                        break;
                    }
                    else if (choicehab == 2){
                        zoo.inventory(&hb_aigle);
                        zoo.pay(2000);
                        zoo.Bank();
                        break;
                    }
                    else if (choicehab == 3){


                        zoo.inventory(&hb_poule);
                        zoo.pay(300);
                        zoo.Bank();
                        break;
                    }
                    break;
                }
                else if (choix == 6){
                    cout << "What do you want to sell?" << endl;
                    cout << "1. Tiger Habitat (€200)" << endl;
                    cout << "2. Eagle Habitat (€200)" << endl;
                    cout << "3. Chicken Habitat (€50)" << endl;
                    int choicehab;
                    cin >> choicehab;
                    if (choicehab == 1){
                        zoo.undotcap(2);
                        zoo.sell(200);
                        break;
                    }
                    else if (choicehab == 2){
                        zoo.undoacap(4);
                        zoo.sell(200);
                        break;
                    }
                    else if (choicehab == 3){
                        zoo.undoacap(10);
                        zoo.sell(50);
                        break;
                    }
                }
                else if (choix == 7){
                    break;
                }
                else {
                    cout << "Invalid choice." << endl;
                    continue;
                }
            }
        }
        else if (choix == 2) {
            int choice;
            while (1) {

                cout << "MENU\n";
                cout << "1. Display inventory" << endl;
                cout << "2. Display tiger habitats" << endl;
                cout << "3. Display eagle habitats" << endl;
                cout << "4. Display chicken habitats" << endl;

                cin >> choice;

                if (choice == 1) {
                    zoo.printinventory();
                    break;
                } else if (choice == 2) {
                    hb_tigre.printhabitattigre();
                    cout << endl << "You have a capacity of " << zoo.gettigrecap() << " annial" << endl;
                    break;
                } else if (choice == 3) {
                    hb_aigle.printhabitataigle();
                    cout << endl << "You have a capacity of " << zoo.getaiglecap() << " annial" << endl;
                    break;
                } else if (choice == 4) {
                    hb_poule.printhabitatpoule();
                    cout << endl << "You have a capacity of " << zoo.getpoulecap() << " annial" << endl;
                    break;
                } else {
                    cout << "Invalid choice, please try again\n";
                }
            }
        }
        else if (choix == 3) {
            cout << "1. Bank" << endl;
            cout << "2. Meat Stock" << endl;
            cout << "3. Grain Stock" << endl;


            int choixgestion;
            cin >> choixgestion;
            if (choixgestion == 1){
                cout << "You have " << zoo.getzoomoney() << "$ in your bank" << endl;

            }
            else if (choixgestion == 2){
                zoo.invmeet();

            }
            else if (choixgestion == 3){
                zoo.invgraine();

            }
        }
        else if (choix == 4) {
            cout << "1.Passer 1 Mois" << endl;


            int choice;
            cin >> choice;

            if (choice == 1){
                month++;
                int dy = 12;
                if (month == dy){
                    int subventiontigre = zoo.getnbtigre() * 43800;
                    int subventionaigle = zoo.getnbaigle() * 2190;
                    zoo.sell(subventiontigre);
                    zoo.sell(subventionaigle);
                    cout << "you just received the tigers and eagles grant" << endl;
                }
                zoo.updtime(30);
                zoo.showdate();
                hb_tigre.printhabitattigre();
                hb_aigle.printhabitataigle();
                hb_poule.printhabitatpoule();
                zoo.setnbtigre(hb_tigre.getnbtigre());
                zoo.setnbaigle(hb_aigle.getnbaigle());
                zoo.setnbpoule(hb_poule.getnbpoule());
                hb_tigre.deltigre(zoo.eventmeatt());
                hb_aigle.delaigle(zoo.eventmeata());
                hb_tigre.deltigre(zoo.eventcapt());
                hb_aigle.delaigle(zoo.eventcapa());
                hb_poule.delpoule(zoo.eventcapp());
                if (tigre_m.child() == 2){
                    if (runOnceInTen() == 1){
                        cout << "your newborn is dead" << endl;
                    } else  {
                        hb_tigre.addtigre(&tigre_m);
                    }

                } else if (aigle_m.child() == 2){
                    if (runOnceInTen() == 1){
                        cout << "your newborn is dead" << endl;
                    } else{
                        hb_aigle.addaigle(&aigle_m);
                    }
                } else if (poule_m.child() == 2){
                    if (runOnceInTen() == 1){
                        cout << "your newborn is dead" << endl;
                    } else{
                        hb_poule.addpoule(&poule_m);
                        hb_poule.addpoule(&poule_m);
                        hb_poule.addpoule(&poule_f);
                        hb_poule.addpoule(&poule_f);
                        hb_poule.addpoule(&poule_f);
                    }

                }
                cout << "Your animals brought you back " << zoo.event() << "$" << endl;
                zoo.sell(zoo.event());
                if (runOnceInAHundred2() == 3){
                    cout << "there is a fire in your zoo" << endl;
                    if (runOnceInThree() == 1){
                        zoo.undotcap(2);
                        cout << "you just lost a tiger habitat" << endl;
                    } else if (runOnceInThree() == 2){
                        zoo.undoacap(4);
                        cout << "you just lost a eagle habitat" << endl;
                    } else if (runOnceInThree() == 3){
                        zoo.undopcap(10);
                        cout << "you just lost a chicken habitat" << endl;
                    }
                }
                if (runOnceInAHundred() == 2){
                    cout << "an animal has been stolen" << endl;
                    if (runOnceInThree() == 1){
                        hb_tigre.deltigre(0);
                        cout << "you just lost a tiger" << endl;
                    } else if (runOnceInThree() == 2){
                        hb_aigle.delaigle(0);
                        cout << "you just lost a eagle" << endl;
                    } else if (runOnceInThree() == 3){
                        hb_poule.delpoule(0);
                        cout << "you just lost a chicken" << endl;
                    }
                }

                const double GRAINE_PERCENTAGE_TO_REMOVE = 0.2;
                const double MEAT_PERCENTAGE_TO_REMOVE = 0.1;

                if (runOnceInFive() == 1) {
                    cout << "You just lost 20% of your seeds" << endl;
                    vector<int> graine = zoo.getgraine();
                    vector<int> new_graine;
                    int total_graine = 0;

                    for (auto& i : graine) {
                        total_graine += i;
                    }

                    if (total_graine != 0) {
                        int graines_a_supprimer = total_graine * GRAINE_PERCENTAGE_TO_REMOVE;
                        int graines_supprimees = 0;

                        for (auto& i : graine) {
                            int nb_graines_a_supprimer = min(i, graines_a_supprimer - graines_supprimees);
                            new_graine.push_back(i - nb_graines_a_supprimer);
                            graines_supprimees += nb_graines_a_supprimer;

                            if (graines_supprimees >= graines_a_supprimer) {
                                break;
                            }
                        }

                        zoo.setzoograine(new_graine);
                    }
                }

                if (runOnceInTen() == 1) {
                    cout << "You just lost 10% of your meat" << endl;
                    vector<int> meat = zoo.getViande();
                    vector<int> new_meat;
                    int total_meat = 0;

                    for (auto& i : meat) {
                        total_meat += i;
                    }

                    if (total_meat != 0) {
                        int meat_a_supprimer = total_meat * MEAT_PERCENTAGE_TO_REMOVE;
                        int meat_supprime = 0;

                        for (auto& i : meat) {
                            int nb_meat_a_supprimer = min(i, meat_a_supprimer - meat_supprime);
                            new_meat.push_back(i - nb_meat_a_supprimer);
                            meat_supprime += nb_meat_a_supprimer;

                            if (meat_supprime >= meat_a_supprimer) {
                                break;
                            }
                        }

                        zoo.setzoomeat(new_meat);
                    }
                }


            }

        }
        else if (choix == 5){
            break;
        }

        else {
            cout << "Choix invalide." << endl;
            continue;
        }
    }
}





int main() {
    menu();
    return 0;
}

