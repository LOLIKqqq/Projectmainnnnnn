#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
public:
    string brand;
    string model;
    string year;
    string color;
    string speed;

    Car() : brand(""), model(""), year(""), color(""), speed("") {}

    
    Car(string _brand, string _model, string _year, string _color, string _speed)
        : brand(_brand), model(_model), year(_year), color(_color), speed(_speed) {}

    
    ~Car() {
        cout << "Car object destroyed\n";
    }
};

class CarManager {
private:
    vector<Car> cars;

public:
    void addCar(const Car& car) {
        cars.push_back(car);
        cout << "Car added successfully!\n";
    }

    void displayCars() {
        if (cars.empty()) {
            cout << "No cars to display. Please add cars first.\n";
            return;
        }

        cout << "\nList of Cars:\n";
        for (const auto& car : cars) {
            cout << "Brand: " << car.brand << endl;
            cout << "Model: " << car.model << endl;
            cout << "Year: " << car.year << endl;
            cout << "Color: " << car.color << endl;
            cout << "Speed: " << car.speed << endl;
            cout << endl;
        }
    }
};

int main() {
    CarManager carManager;

    
    Car car2;

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

    carManager.addCar(car1);
    carManager.addCar(car2);  

    carManager.displayCars();

    return 0;
}