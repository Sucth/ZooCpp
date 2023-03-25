#ifndef Zoo_h
#define Zoo_h

class Zoo {
protected:
    int day;
    int month;
    int year;
    int z_money;
    vector<Ihabitat *>m_inventory;
    vector<int>z_viande;
    vector<int>z_graines;
    int meat = 0;
    int tigre_capacity = 0;
    int nb_tigre = 0;
    int aigle_capacity = 0;
    int nb_aigle = 0;
    int poule_capacity = 0;
    int nb_poule = 0;
    int qte_totale_viande = 0;
    int qte_graine = 0;

public:
    Zoo() : day(1), month(1), year(2023) {}

    int event() {
        const int TIGRE_PRICE = 50;
        const int AIGLE_PRICE = 30;
        const int POULE_PRICE = 5;

        int moneytigre = nb_tigre * TIGRE_PRICE;
        int moneyaigle = nb_aigle * AIGLE_PRICE;
        int moneypoule = nb_poule * POULE_PRICE;
        int ttl = moneytigre + moneyaigle + moneypoule;
        return ttl;
    }

    int eventmeatt() {
        const int TIGRE_FOOD_PER_MONTH = 360;
        int qte_meat_month = TIGRE_FOOD_PER_MONTH * nb_tigre;
        for (auto &element: z_viande) {
            qte_totale_viande = element;
        }
        if (nb_tigre == 0){
            return 1;
        }
        if (qte_totale_viande < qte_meat_month) {
            std::cout << "you don't have enough meat to feed your tigers you just lost a tiger" << std::endl;
            return 0;
        } else{
            for (auto &element : z_viande) {
                element -= qte_meat_month;
            }

        }
        return 1;
    }

    int eventmeata() {
        const int AIGLE_FOOD_PER_MONTH = 90;
        int qte_meat_month = AIGLE_FOOD_PER_MONTH * nb_aigle;
        for (auto &element: z_viande) {
            qte_totale_viande = element;
        }
        if (nb_aigle == 0){
            return 1;
        }
        if (qte_totale_viande < qte_meat_month) {
            std::cout << "you don't have enough meat to feed your eagle you just lost a eagle" << std::endl;

            return 0;
        }
        for (auto &element: z_viande) {
            element -= qte_meat_month;
        }
        return 1;
    }

    int eventmeatp() {
        int qte_graine_month = 5 * nb_poule;
        for (auto &element: z_graines) {
            qte_graine = element;
        }
        if (nb_poule == 0){
            return 1;
        }
        if (qte_graine < qte_graine_month) {
            std::cout << "you don't have enough meat to feed your eagle you just lost a eagle" << std::endl;

            return 0;
        }
        for (auto &element: z_graines) {
            element -= qte_graine_month;
        }
        return 1;
    }

    int eventcapt(){
        if (nb_tigre == 0){
            return 1;
        }
        if (nb_tigre > tigre_capacity){
            cout << "you have just lost a tiger because you did not respect overpopulation" << endl;
            return 0;
        } else{
            return 1;
        }
    }
    int eventcapa(){
        if (nb_aigle == 0){
            return 1;
        }
        if (nb_aigle > aigle_capacity){
            cout << "you have just lost a eagle because you did not respect overpopulation" << endl;
            return 0;
        } else{
            return 1;
        }
    }
    int eventcapp(){
        if (nb_poule == 0){
            return 1;
        }
        if (nb_poule > poule_capacity){
            cout << "you have just lost a chicken because you did not respect overpopulation" << endl;
            return 0;
        } else{
            return 1;
        }
    }


    void shopmeet(int qte_viande){
        z_viande.push_back(qte_viande);
    }

    void shopgraine(int qte_graines){
        z_graines.push_back(qte_graines);
    }

    void inventory(Ihabitat *item){
        m_inventory.push_back(item);
        if (item->i_getname() == "Habitat tigre"){
            tigre_capacity += 2;
            cout << "votre enclot a une capacite de " << tigre_capacity << " annimaux" << endl;
        }else if (item->i_getname() == "Habitat aigle"){
            aigle_capacity += 4;
            cout << "votre enclot a une capacite de " << aigle_capacity << " annimaux" << endl;
        }else if (item->i_getname() == "Habitat poule"){
            poule_capacity += 10;
            cout << "votre enclot a une capacite de " << poule_capacity << " annimaux" << endl;
        }
    }

    int gettigrecap(){return tigre_capacity;}
    int getaiglecap(){return aigle_capacity;}
    int getpoulecap(){return poule_capacity;}
    int undotcap(int cap){tigre_capacity -= cap;}
    int undoacap(int cap){aigle_capacity -= cap;}
    int undopcap(int cap){poule_capacity -= cap;}


    void invmeet(){
        cout << "Inventory :" << endl << endl;
        for (const auto& element : z_viande) {
            std::cout << element << " " << "Kilo de viande" << endl;
        }
    }
    void invgraine(){
        cout << "Inventory :" << endl << endl;
        for (const auto& element : z_graines) {
            std::cout << element << " " << "Kilo de graine" << endl;
        }
    }

    void printinventory() {
        cout << "Inventory :" << endl << endl;
        int i = 1;
        for (auto item: m_inventory) {
            cout << i++ << ". " << item->i_getname() << endl << endl;
        }
    }

    void updtime(int time) {
        day += time;
        if (day > 30) {
            day = 1;
            month ++;
        }
        if (month > 12) {
            month = 1;
            year ++;
        }
    }
    void showdate(){
        cout << "Day: " << day << "  Month: " << month << "  Year: " << year << endl;
    }

    void setmoney(int s_money) {z_money = s_money;}

    void pay(int cost) {
        if (cost <= z_money){
            z_money -= cost;
            return;
        }
    }
    void sell(int cost) {
        z_money += cost;
    }
    void Bank(){cout << "You Have " << z_money << "$ in a Bank" << endl << endl;}


    vector<int> getViande(){return z_viande;}
    vector<int> getgraine(){return z_graines;}
    vector<int> setzoomeat(vector<int> meat){z_viande = meat;}
    vector<int> setzoograine(vector<int> graine){graine = z_graines;}
    int setnbtigre(int tigre){nb_tigre = tigre;}
    int setnbaigle(int aigle){nb_aigle = aigle;}
    int setnbpoule(int poule){nb_poule = poule;}
    int getnbtigre(){return nb_tigre;}
    int getnbaigle(){return nb_aigle;}
    int getzoomoney(){return z_money;}
    int getday(){return day;}
    int getmonth(){return month;}
    int getyear(){return year;}
};


#endif /* Zoo_h */