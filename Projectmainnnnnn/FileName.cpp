#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    string year;
    string color;
    string speed;

    Car(string brand, string model, string year, string color, string speed)
        : brand(brand), model(model), year(year), color(color), speed(speed) {}
};

int main() {
    string car1_brand, car1_model, car1_year, car1_color, car1_speed;

    cout << "Enter the brand of the car: ";
    cin >> car1_brand;
    cout << "Enter the model of the car: ";
    cin >> car1_model;
    cout << "Enter the year of the car: ";
    cin >> car1_year;
    cout << "Enter the color of the car: ";
    cin >> car1_color;
    cout << "Enter the speed of the car: ";
    cin >> car1_speed;

    Car car1(car1_brand, car1_model, car1_year, car1_color, car1_speed);

    cout << "\nData for the first car:\n";
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    cout << "Color: " << car1.color << endl;
    cout << "Speed: " << car1.speed << endl;

    return 0;
}