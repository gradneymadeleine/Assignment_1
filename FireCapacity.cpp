#include <iostream>
using namespace std;

int main(){
  int fireCapacity = 250;
  int guests;

  cout << "Enter the number of people that are attending the meeting: " << endl;
  cin >> guests;

  if(guests <= fireCapacity){
    int remainingSpace = fireCapacity - guests;
    cout << "Number of guests are within guidlines, meeting is able to proceed. You are still able to have " << remainingSpace << " guests." << endl;
    }
  else {
    cout << "That is above fire capacity, meeting cannot be held. Building ouccupency is 250." << endl;
  }
  return 0;
}
