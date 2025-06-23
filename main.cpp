//How many customers consume energy drinks.
#include <iostream>
using namespace std;

int main ()
{
double EnergyDrink, CitrusFlavor, CitrusLover;
  long customers;
  EnergyDrink = 2475;
  CitrusFlavor = 58;
  CitrusLover = EnergyDrink * CitrusFlavor/100;
  customers = 16500;

  cout << "A store surveyed " << customers << " on what drinks they enjoy." << endl;
  cout << "Approximately " << EnergyDrink << " customers imbibe in energy drinks." << endl;
  cout << "Of those, " << CitrusFlavor << "% love citrus flavored energy drinks." << endl;
  cout << "A total of " << CitrusLover << " customers drink the citrus energy drinks." << endl;
    return 0;
}