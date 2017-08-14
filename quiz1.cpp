/*
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cassert>
*/

#include "quiz1.h"

int main(int argc,char* argv[]){
  //read in file 
  std::string filename;
  assert (argc == 2);
  filename = argv[1];
//  std::cout << "Opening file " << argv[1] << std::endl;

  std::ifstream infile(filename);
  assert (infile.is_open());  
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
