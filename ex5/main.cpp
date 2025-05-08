#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string m_drivemode;  

private:
    int m_maxseating;
    int m_price;
    
    void m_updateprice(int base = 50000) {
        m_price = m_maxseating * base;
    }

public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_maxseating = s; 
        m_updateprice();
    }
    
    int get_maxseating() {
        return m_maxseating;
    }
    
    int get_price() {
        return m_price;
    }
};

class BMW_Car : public Car {
public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
        cout << "Constructing BMW_Car\n";
        m_drivemode = "Rear-wheel";
    }
    string get_drivemode() {
        return m_drivemode;  
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s) {
        cout << "Constructing AUDI_Car\n";
        m_drivemode = "Front-wheel";
    }
    string get_drivemode() {
        return m_drivemode; 
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s) {
        cout << "Constructing BENZ_Car\n";
        m_drivemode = "Front-wheel";
    }
    string get_drivemode() {
        return m_drivemode; 
    }
};
int main() {
    BMW_Car bmw("X5", 2023, 5);
    cout << "BMW Drive Mode: " << bmw.get_drivemode() << endl;
    AUDI_Car audi("A4", 2023, 5);
    cout << "AUDI Drive Mode: " << audi.get_drivemode() << endl;
    BENZ_Car benz("EQE", 2023, 4);
    cout << "BENZ Drive Mode: " << benz.get_drivemode() << endl;
    
    return 0;
}
