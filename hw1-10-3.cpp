#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(){
  //read in file  
  std::ifstream infile("mmf.txt");

  //read lines with %
  std::string line;
  while (std::getline(infile, line))
  {
    if (line[0] != '%')
    {
      std::istringstream ss(line);
      int row, column, value;
      ss >>row >> column >> value;
      std::cout << row  << " "<< column << " " << value<<std::endl;
      break;
    }
  }

  return 0;
}
