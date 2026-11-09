#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> v; 
    std::cout << "please enter number" << std::endl;
    std::cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        std::cout << "please enter number" << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    int s;
    std::cout << "please enter number to search" << std::endl;
    std::cin >> s;
    int count = 0;
    for(int i1 = 0; i1<n; i1++){
        if(v[i1] == s){
            count++;
        }
    }
    std::cout << "number found " << count << " times" << std::endl;
}
