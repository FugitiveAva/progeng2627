#include <iostream>
int smallest_factor(int n)
{
    if(n <= 1){
        return -1;
    }
    for(int cf = 2; cf < n; cf++)
    {
        bool found_factor = false;

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        return cf;
        }

       }
       return n;
}


int main(){
        int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}