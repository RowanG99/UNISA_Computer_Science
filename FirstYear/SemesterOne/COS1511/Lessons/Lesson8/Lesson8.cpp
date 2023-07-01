#include <iostream>

using namespace std;

int main()
{
//    const float HIGHEST_TAX_RATE = 0.40;
//    const float LOWEST_TAX_RATE = 0.30;
//
//    float salary = 0, tax = 0;
//    cout << "Please provide your yearly salary: " << endl;
//    cin >> salary;
//    cout << endl;
//
//    if(salary > 70000)
//    {
//        tax = salary * HIGHEST_TAX_RATE;
//    }
//    else
//    {
//        tax = salary * LOWEST_TAX_RATE;
//    }
//
//    cout << "The tax on a salary of R" << salary;
//    cout << " is R" << tax << endl;

      const float STANDARD_DISCOUNT = 10, VALUE = 200.0;
      int adjustableDiscount = 0;
      float oldPrice = 0, newPrice = 0, discount = 0;

      cout << "Enter old price: ";
      cin >> oldPrice;
      cout << endl;

      if(oldPrice >= VALUE)
      {
          cout << "Enter special discount %: " << endl;
          cin >> adjustableDiscount;
          cout << endl;
      }
      else
      {
        adjustableDiscount = STANDARD_DISCOUNT;
      }

      discount = oldPrice * adjustableDiscount / 100;
      newPrice = oldPrice - discount;


      cout << "===========" << endl;
      cout << "Was: R" << oldPrice << endl;
      cout << "Discount: " << discount << "%" << endl;
      cout << "Now: R" << newPrice << endl;
      cout << "===========" << endl;

    return 0;
}
