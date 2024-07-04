#include <iostream>
#include <iomanip> 

using namespace std; 

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
} 

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
} 

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
} 

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
} 

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
} 

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
} 

int main() {
    double temperature;
    int inputScale, outputScale; 

    cout << "Temperature Conversion Program\n";
    cout << "Enter the temperature to convert: ";
    cin >> temperature; 

    cout << "Select the input scale:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "Enter your choice: ";
    cin >> inputScale; 

    cout << "Select the output scale:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "Enter your choice: ";
    cin >> outputScale; 

    double convertedTemperature; 

    if (inputScale == 1) {
        // Input in Celsius
        if (outputScale == 2) {
            convertedTemperature = celsiusToFahrenheit(temperature);
            cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
        } else if (outputScale == 3) {
            convertedTemperature = celsiusToKelvin(temperature);
            cout << "Temperature in Kelvin: " << convertedTemperature << endl;
        } else {
            cout << "Invalid output scale selected.\n";
        }
    } else if (inputScale == 2) {
        // Input in Fahrenheit
        if (outputScale == 1) {
            convertedTemperature = fahrenheitToCelsius(temperature);
            cout << "Temperature in Celsius: " << convertedTemperature << endl;
        } else if (outputScale == 3) {
            convertedTemperature = fahrenheitToKelvin(temperature);
            cout << "Temperature in Kelvin: " << convertedTemperature << endl;
        } else {
            cout << "Invalid output scale selected.\n";
        }
    } else if (inputScale == 3) {
        // Input in Kelvin
        if (outputScale == 1) {
            convertedTemperature = kelvinToCelsius(temperature);
            cout << "Temperature in Celsius: " << convertedTemperature << endl;
        } else if (outputScale == 2) {
            convertedTemperature = kelvinToFahrenheit(temperature);
            cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
        } else {
            cout << "Invalid output scale selected.\n";
        }
    } else {
        cout << "Invalid input scale selected.\n";
    } 

    return 0;
}