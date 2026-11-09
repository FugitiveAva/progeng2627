#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;
    // outfile is not a special name

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "hello" << std::endl;
    // prints on the output file

    outfile.close();

    std::ifstream infile; 
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)

    infile.open("output.txt");
    // we associate the object called infile
    // to the text file called input.txt

    // now before we go any further it's important to check
    // whether the operation opening the file really worked
    // (if for example we misspell the name then the program
    // doesn't work and we don't know why

    // please note that difference between function open (above)
    // and function is_open (below)

    if(infile.is_open()){ 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        std::string tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 
}
}

