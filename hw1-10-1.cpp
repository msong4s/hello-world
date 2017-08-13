#include <iostream>
#include <fstream>

int main(){
    int age = 0;
    std::cout << "What is your age?" << std::endl;
    std::cout << "Answer: ";
    std::cin >> age;
//room to check if age is valid
    std::ofstream myfile;
    myfile.open("age.txt");
    myfile << "The age is " << age << std::endl;
//room to check if file is opened
    return 0;
}
