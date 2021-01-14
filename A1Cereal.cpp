#include <iostream>
using namespace std;


int main(int argc, char **argv){
  int weightOfCereal;
  double metricTon = 35273.92;

  cout << "Input weight of cereal (in ounces): " << endl;
  cin >> weightOfCereal;
  cout << "The weight of cereal is "  << weightOfCereal << " oz."<< endl;

  int numWholeOfCereal = metricTon / weightOfCereal;

  cout << "The number of whole cereal boxes it would take to weigh a metric ton: " << numWholeOfCereal << endl;
  return 0;

}
