#include <iostream>

int main(){
    double n1, n2, area, perimeter;
    // this line declares three variables of a numerical type
    // n1, n2, area are the names of the variables
    // double is the type, which represents general decimal numbers

    std::cout << "please enter the first side length" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second side length" << std::endl;
    std::cin >> n2;

    area = n1 * n2;
    perimeter = 2 * (n1 + n2);
    // here the result of n1 * n2 is computed
    // and it is stored in variable area

    std::cout << n1 << " * " << n2 << " = " <<  area << std::endl;
    std::cout << "perimeter = " << perimeter << std::endl;
    // this is a printing instruction printing
    // the value in n1
    // the symbol * (with spaces)
    // the value in n2
    // the symbol = (with spaces)
    // the value in area
    // (and a newline at the end as usual)
}