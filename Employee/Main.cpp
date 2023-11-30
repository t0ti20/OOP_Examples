#include "Company.hpp"
int main()
{
  using namespace Company;
  Sales First_Sales{"Ahmed Tamer", 1234, 3000, 0.1, 5000};
  Engineer First_Engineer{"Ahmed Tamer", 1234,3000,"Computer",23,10,0.1};
  First_Sales.Print();
  First_Engineer.Print();
  Employee *PTR=&First_Sales;
  PTR->Print();
  return 0;
} 