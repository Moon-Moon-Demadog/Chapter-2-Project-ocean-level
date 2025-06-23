//Calculating the perposed rise of the ocean level in  mm over a set period of time.
#include <iostream>
using namespace std;

int main ()
{
  double oceanLevel, riseRate;
  int fiveYears, sevenYears, tenYears;
  oceanLevel = 2133.6;
  riseRate = 1.5;
  fiveYears = oceanLevel + (riseRate * 5);
  sevenYears = oceanLevel + (riseRate * 7);
  tenYears = oceanLevel + (riseRate * 10);
  
    cout << "Our current ocean level of " << oceanLevel << "mm is experiencing a steady rise of " << riseRate << "mm per year."<< endl;
  cout << "Within five years from now the new ocean level will be "<< fiveYears << "mm." << endl;
  cout << "Seven years from now the ocean level will be "<< sevenYears << "mm." << endl;
  cout << "And just ten years from now the ocean level will be " << tenYears << "mm." << endl;
  return 0;
}