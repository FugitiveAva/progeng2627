#include <iostream>
#include <cmath>
int main()
{
    double a, b, c;
    std::cout << "please enter three lengths of a triangle" << std::endl;
    if (!(std::cin >> a >> b >> c))
    {
        std::cout << "Type error";
        return 0;
    }
    if (a + b > c && b + c > a && a + c > b)
    {
        std::cout << "the type of triangle is\t";
        if (a == b && a == c)
        {
            std::cout << "equilateral" << std::endl;
        }
        else if (a == b || a == c || b == c)
        {
            std::cout << "isosceles " << std::endl;
        }
        else
        {
            std::cout << "scalene " << std::endl;
        }
    }
    else
    {
        std::cout << "not a triangle";
        return 0;
    }
    double per = a + b + c;
    std::cout << "the perimeter is\t" << per << std::endl;
    double s = per / 2;
    double A = std::sqrt(s * (s - a) * (s - b) * (s - c));
    std::cout << "the area is\t" << A << std::endl;
    return 0;
}