#include <iostream>

int main(){
    double currency, exchange_rate, converted_currency;


    std::cout << "please enter the amount of currency" << std::endl;
    std::cin >> currency;

    std::cout << "please enter the exchange rate" << std::endl;
    std::cin >> exchange_rate;

    converted_currency = currency * exchange_rate;

    std::cout << "the converted currency is: " << converted_currency << std::endl;
}
