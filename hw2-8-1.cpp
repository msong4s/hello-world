#include <iostream>
#include <vector>

class polynomial
{
  public:
    //default constructor
    polynomial(int deg=0)  {degree = deg;}

    //destructor
    ~polynomial(){}

    void printout(std::ostream& os)
    {
//      std::cout << "test: " << degree << std::endl;
      std::cout << "The polynomial is: " << std::endl; 
      for (int i = degree; i > 0; --i)
      {
//        std::cout << coe[i]<<"x^" << i << " + ";
      }
//      std::cout << coe[0] << std::endl;
    }
  
  private:
    int degree;
    std::vector<double> coe;
};

int main()
{
  polynomial pl;
  pl.printout(std::cout);
 
  return 0;
}

