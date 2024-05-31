#include <iostream>
#include <limits>
using namespace std;

class TemperatureConverter {
public:
    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5/9;
    }

    double celsiusToFahrenheit(double celsius) {
        return celsius * 9/5 + 32;
    }
};

int main() {
    TemperatureConverter converter;

    int choice;
    double temperature;
    char unit;
    
    cout << "Choose conversion:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Your choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please choose again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
    }

    cout << "Enter temperature: ";
    cin >> temperature;

    while (true) {
        cout << "Enter unit (F for Fahrenheit, C for Celsius): ";
        cin >> unit;
        if (unit == 'F' || unit == 'C')
            break;
        cout << "Invalid unit. Please enter F or C." << endl;
    }

    if (choice == 1 && unit == 'F') {
        cout << temperature << " Fahrenheit = " << converter.fahrenheitToCelsius(temperature) << " Celsius" << endl;
    } else if (choice == 2 && unit == 'C') {
        cout << temperature << " Celsius = " << converter.celsiusToFahrenheit(temperature) << " Fahrenheit" << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}