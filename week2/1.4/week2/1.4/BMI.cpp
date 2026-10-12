#include <iostream>

int main(){
    double BMIheight, BMIweight, BMI;

    std::cout << "please enter your height in meters" << std::endl;
    std::cin >> BMIheight;

    std::cout << "please enter your weight in kilograms" << std::endl;
    std::cin >> BMIweight;

    BMI = BMIweight / (BMIheight * BMIheight);

    std::cout << "your BMI is: " << BMI << std::endl;
}
