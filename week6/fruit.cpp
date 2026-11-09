#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>


int search_vector(std::string s, const std::vector<std::string>& vin)
{
    for(int i = 0; i < vin.size(); ++i)
    {
        if(vin[i] == s)
        {
            return i;
        }
    }
    return -1;
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& out)
{
    out.clear();
    
    for(auto &item : vin1)
    {
        out.push_back(item);
    }
    
    for(auto &item : vin2)
    {
        if(search_vector(item, out) == -1)
        {
            out.push_back(item);
        }
    }
}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& out)
{
    out.clear();
    for(auto &item : vin1)
    {
        if(search_vector(item, vin2) != -1)
        {
            out.push_back(item);
        }
    }
}

int main(){
    std::ifstream infile;
    std::vector<std::string> v1, v2;
    std::string tmp;

    infile.open("warehouse1.txt");
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp)
    {
        v1.push_back(tmp);
    }
    infile.close();

    
    infile.open("warehouse2.txt");
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp)
    {
        v2.push_back(tmp);
    }
    infile.close();

    
    std::vector<std::string> uni_res, inter_res;
    union_vector(v1, v2, uni_res);
    intersection_vector(v1, v2, inter_res);

    
    std::ofstream outfile;
    outfile.open("union.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(auto &s : uni_res)
    {
        outfile << s << '\n';
    }
    outfile.close();

    
    outfile.open("intersection.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(auto &s : inter_res)
    {
        outfile << s << '\n';
    }
    outfile.close();

    
    std::cout << "Union:\n";
    for(auto &s : uni_res) std::cout << s << '\n';
    std::cout << "\nIntersection:\n";
    for(auto &s : inter_res) std::cout << s << '\n';

    return 0;
}
