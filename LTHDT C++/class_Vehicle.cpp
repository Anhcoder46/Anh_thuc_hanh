#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    string owner;
    string type;
    double value;
    double engineSize;
public:
    // Constructor
    Vehicle(string owner, string type, double value, double engineSize) {
        this -> owner = owner;
        this -> type = type;
        this -> value = value;
        this -> engineSize = engineSize;
    }
    
    // Getters and Setters
    string getOwner() const {
        return owner;
    }
    void setOwner(string owner) {
        this -> owner = owner;
    }

    string getType() const {
        return type;
    }
    void setType(string type) {
        this -> type = type;
    }

    double getValue() const {
        return value;
    }
    void setValue(double value) {
        this -> value = value;
    }

    double getEngineSize() const {
        return engineSize;
    }
    void setEngineSize(double engineSize) {
        this -> engineSize = engineSize;
    }

    // Calculate tax
    double calculateTax() const {
        double lateTax;
        if (engineSize < 100) {
            lateTax = 0.01;
       } else if (engineSize <= 200) {
            lateTax = 0.03;
        } else {
            lateTax = 0.05;
        }
        return value * lateTax;
    }
};

int main() {
    // Create three Vehicle objects
    Vehicle xe1("Nguyen Van A", "Sedan", 1000000, 90);
    Vehicle xe2("Tran Thi B", "SUV", 2000000, 150);
    Vehicle xe3("Pham Van C", "Pickup Truck", 3000000, 250);

    // Print out information and tax for each vehicle
    cout << "Owner\t\t" << "Type\t\t" << "Value\t\t" << "Engine Size\t" << "Tax\n";
    cout << "---------------------------------------------------------------------\n";
    cout << xe1.getOwner() << "\t" << xe1.getType() << "\t" << xe1.getValue() << "\t\t" << xe1.getEngineSize() << "\t\t" << xe1.calculateTax() << "\n";
    cout << xe2.getOwner() << "\t" << xe2.getType() << "\t" << xe2.getValue() << "\t\t" << xe2.getEngineSize() << "\t\t" << xe2.calculateTax() << "\n";
    cout << xe3.getOwner() << "\t" << xe3.getType() << "\\t" << xe3.getValue() << "\t\t" << xe3.getEngineSize() << "\t\t" << xe3.calculateTax() << "\n";

    return 0;
}