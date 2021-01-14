#include <iostream>
using namespace std;

int main(){
  double emplyeePay = 16.00;
  double overtimePay = 16.00 * 1.50;
  double securityTax = 0.06;
  double fedIncomTax = 0.14;
  double stateIncomTax = 0.05;
  double medInsur = 10.00;
  double hours;
  double grossWage;
  double grossSubSec;
  double grossSubFed;
  double grossSubStat;

  cout << "How many hours did the emplyee work? " << endl;
  cin >> hours;

  if(hours > 40)
  {
    grossWage = (overtimePay * hours);
    grossSubSec = grossWage * securityTax;
    grossSubFed = grossWage * fedIncomTax;
    grossSubStat = grossWage * stateIncomTax;
    grossWage = grossWage - grossSubSec - grossSubFed - grossSubStat - medInsur;

    cout << "Gross income (overtime) is: $" << grossWage << endl;
  }
  else
  {
    grossWage = (emplyeePay * hours);
    grossSubSec = grossWage * securityTax;
    grossSubFed = grossWage * fedIncomTax;
    grossSubStat = grossWage * stateIncomTax;
    grossWage = grossWage - grossSubSec - grossSubFed - grossSubStat - medInsur;
    cout << "Gross income is: $" << grossWage << endl;
  }
  return 0;
}
