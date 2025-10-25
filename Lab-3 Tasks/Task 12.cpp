#include <iostream>
using namespace std;
int main() 
{
    int salary = 10000;
    int laptopPrice = 50000;
    int monthsRequired;
    double advance;

  advance= salary * 0.5*6+salary;
  

    if (advance >= laptopPrice)
    {
        cout<<endl<<"Ali can buy the laptop with the advance salary.";
    }

    if (advance < laptopPrice)
    {
        monthsRequired = (laptopPrice + advance - 1) / advance;
        cout<<endl<<"Ali cannot buy the laptop with the advance salary.";
        cout<<endl<<"He needs at least Advance salary of "<<monthsRequired<< " more months to buy the laptop.";
    }

    return 0;
}
