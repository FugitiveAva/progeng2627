#include <iostream>

int main(){
    double temperature;
    // this line declares a variable of a numerical type
    // temperature is the name of the variable
    // double is the type, which represents general decimal numbers

    std::cout << "please enter the temperature in Celsius" << std::endl;
    std::cin >> temperature;

    std::cout << "the temperature in Fahrenheit is: " << (temperature * 9/5) + 32 << std::endl;
}
