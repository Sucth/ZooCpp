#ifndef Ihabitat_h
#define Ihabitat_h

class Ihabitat {
private:
    string h_name;
    int h_capacity;
    int h_money;
public:
    Ihabitat (string name, int capacity, int money) : h_name(name), h_capacity(capacity), h_money(money) {}
    
    string i_getname() {return h_name;}
    int i_getcapacity() {return h_capacity;}
    int i_getmoney() {return h_money;}
    
};

#endif /* Ihabitat_h */
