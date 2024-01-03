#include <iostream>
#include <string>
using namespace std;

class Vehicle {
  private:
    string owner_name;
    string vehicle_type;
    int vehicle_value;
    int engine_capacity;
    double tax_rate;
  public:
    Vehicle(string name, string type, int value, int capacity) {
        owner_name = name;
        vehicle_type = type;
        vehicle_value = value;
        engine_capacity = capacity;
        if (capacity <= 100) {
            tax_rate = 0.01;
        } else if (capacity <= 200) {
            tax_rate = 0.03;
        } else {
            tax_rate = 0.05;
        }
    }
    double get_tax() {
        return vehicle_value * tax_rate;
    }
    void print_info() {
        cout << "Owner Name: " << owner_name << endl;
        cout << "Vehicle Type: " << vehicle_type << endl;
        cout << "Vehicle Value: " << vehicle_value << endl;
        cout << "Engine Capacity: " << engine_capacity << " cc" << endl;
        cout << "Tax Rate:" << tax_rate << endl;
    }
};

int main() {
    Vehicle xe1("Nguyen Van A", "Xe may", 50000000, 150);
    Vehicle xe2("Tran Thi B", "Xe dap dien", 5000000, 0);
    Vehicle xe3("Hoang Van C", "O to",1500000000, 2000);

    xe1.print_info();
    cout << "Tax: " << xe1.get_tax() << endl;

    xe2.print_info();
    cout << "Tax: " << xe2.get_tax() << endl;

    xe3.print_info();
    cout << "Tax: " << xe3.get_tax() << endl;

    return 0;
}