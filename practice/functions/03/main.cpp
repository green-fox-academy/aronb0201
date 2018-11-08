#include <iostream>


std::string choosenUnit;
std::string inputCelsius;
std::string inputFahrenheit;
std::string inputKelvin;


std::string choosenUnit1 = "celsius";
std::string choosenUnit2 = "fahrenheit";
std::string choosenUnit3 = "kelvin";

std::string fahrenConv1 = "cels";
std::string fahrenConv2 = "kelv";

std::string kelvConv1 = "Celsius";
std::string kelvConv2 = "Fahrenheit";

std::string fahrenheit = "f";
std::string kelvin = "k";


double tempCels;
double tempKelvin;
double tempFahrenheit;


double fromCelstoFahrenheit(double tempCels);

double fromCelsToKelvin(double tempCels);

double fromFahrenheitToKelvin(double tempFahrenheit);

double fromFahrenheittoCels(double tempFahrenheit);

double fromKelvToCels(double tempKelvin);

double fromKelvToFahrenheit(double tempKelvin);


int main() {

    std::cout << "what would you like to convert? --> (type it like its written --> celsius, fahrenheit, kelvin)" << std::endl;
    std::cin >> choosenUnit;

    if (choosenUnit == choosenUnit1) {

        std::cout << " give me the C" << std::endl;
        std::cin >> tempCels;

        std::cout << "what would you like to convert from celsius?-->( type it like its written f = Fahrenheit, k = Kelvin)" << std::endl;
        std::cin >> inputCelsius;


        if (inputCelsius == kelvin) {
            fromCelsToKelvin(tempCels);
            std::cout << fromCelsToKelvin(tempCels) << std::endl;

        } else if (inputCelsius == fahrenheit) {

            fromCelstoFahrenheit(tempCels);
            std::cout << fromCelstoFahrenheit(tempCels) << std::endl;

        } else {
            std::cout << "anyaddal baszakodj" << std::endl;
        }

    } else if (choosenUnit == choosenUnit2) {

        std::cout << " give me a fahrenheit" << std::endl;
        std::cin >> tempFahrenheit;

        std::cout << " where do you want to convert?--> cels, kelv" << std::endl;
        std::cin >> inputFahrenheit;

        if (inputFahrenheit == fahrenConv1) {

            fromFahrenheittoCels(tempFahrenheit);
            std::cout << fromFahrenheittoCels(tempFahrenheit) << std::endl;
        } else if (inputFahrenheit == fahrenConv2) {
            fromFahrenheitToKelvin(tempFahrenheit);
            std::cout << fromFahrenheitToKelvin(tempFahrenheit);
        } else {

            std::cout << "fukk off" << std::endl;
        }
    } else if (choosenUnit == choosenUnit3) {

        std::cout << " give me a kelvin" << std::endl;
        std::cin >> tempKelvin;

        std::cout << " where do you want to convert?(Celsius, Fahrenheit)" << std::endl;
        std::cin >> inputKelvin;

        if (inputKelvin == kelvConv1) {
            fromKelvToCels(tempKelvin);
            std::cout << fromKelvToCels(tempKelvin);

        } else if (inputKelvin == kelvConv2) {
            fromKelvToFahrenheit(tempKelvin);
            std::cout << fromKelvToFahrenheit(tempKelvin);


        } else {
            std::cout << " cmon..." << std::endl;
        }


    } else {

        std::cout << " baszki" << std::endl;
    }


}

double fromFahrenheittoCels(double tempFahrenheit) {

    double celsius = (5.0 / 9.0) * (tempFahrenheit - 32);
    return celsius;

}

double fromFahrenheitToKelvin(double tempFahrenheit) {

    double fahrenheitToKelvin = (5.0 / 9.0) * (tempFahrenheit - 32) + 273;
    return fahrenheitToKelvin;

}

double fromCelstoFahrenheit(double tempCels) {

    double celsToFahrenheit = tempCels * 1.8 + 32;
    return celsToFahrenheit;

}

double fromCelsToKelvin(double tempCels) {

    double celsToKelvin = tempCels + 273.15;
    return celsToKelvin;

}

double fromKelvToCels(double tempKelvin) {

    double kelvToCels = tempKelvin - 273.15;
    return kelvToCels;
}

double fromKelvToFahrenheit(double tempKelvin) {

    double kelvToFahrenheit = tempKelvin * 1.8 - 459.67;
    return kelvToFahrenheit;
}