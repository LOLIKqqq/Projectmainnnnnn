#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
private:
    string brand;
    string model;
    string year;
    string color;
    string speed;

public:
    Car() : brand(""), model(""), year(""), color(""), speed("") {}

    Car(const string& _brand, const string& _model, const string& _year, const string& _color, const string& _speed)
        : brand(_brand), model(_model), year(_year), color(_color), speed(_speed) {}

    const string& getBrand() const {
        return brand;
    }

    const string& getModel() const {
        return model;
    }

    const string& getYear() const {
        return year;
    }

    const string& getColor() const {
        return color;
    }

    const string& getSpeed() const {
        return speed;
    }

    Car() {
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
            cout << "Brand: " << car.getBrand() << endl;
            cout << "Model: " << car.getModel() << endl;
            cout << "Year: " << car.getYear() << endl;
            cout << "Color: " << car.getColor() << endl;
            cout << "Speed: " << car.getSpeed() << endl;
            cout << endl;
        }
    }
};

int main() {
    CarManager carManager;

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

    carManager.displayCars();

    return 0;
}