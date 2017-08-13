#include <iostream>
#include <vector>
#include <memory>

class polynomial
{
  public:
    //default constructor
    polynomial(int deg=0,std::vector<double> src={0}) 
    {
      degree = deg;
      coe = src;
    }

    //copy constructor
    polynomial(polynomial& src)
    {
        degree = src.degree;
        coe = src.coe;
    }
    //destructor
    ~polynomial(){}

    //move assignment
    polynomial& operator=(polynomial&& src)
    {
      std::swap(degree, src.degree);
      std::swap(coe, src.coe);
      std::cout << "Move assignment is used." << std::endl;
      return *this;
    }

    //output function
    void printout(std::ostream& os)
    {
      std::cout << "test: " << degree << std::endl;
      std::cout << "The polynomial is: " << std::endl; 
      for (int i = degree; i > 0; --i)
      {
        std::cout << coe[i]<<"x^" << i << " + ";
      }
      std::cout << coe[0] << std::endl;
    }
  
  private:
    int degree;
    std::vector<double> coe;
};

polynomial f(double c2, double c1, double c0)
{
  std::vector<double> data = {c0,c1,c2};
  polynomial poly(2,data); 
  return poly;
}

int main()
{
//  polynomial a(2);

  polynomial pl;
  pl = f(2.,3.,1.);
  pl.printout(std::cout);
 
  return 0;
}

