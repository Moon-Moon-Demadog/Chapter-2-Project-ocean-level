//Calculating the perposed rise of the ocean level in  mm over a set period of time.
#include <iostream>
using namespace std;

int main ()
{
double CityMiles, HighwayMiles, City, Highway;
  int Gallons = 20;
  City = 23.5;
  Highway = 28.9;
  CityMiles = Gallons * City;
  HighwayMiles = Gallons * Highway;
  Gallons = 20;

  cout << "Lets figure the efficency of a car on the highway vs in the city." << endl;
  cout << "An average car holds " << Gallons << " gallons and gets " << City << "mpg and the highway " << Highway << "mpg." << endl;
  cout << " So traveling on the highway you can expect to go " << HighwayMiles << "miles." << endl;
    cout << " Now traveling in the city you can expect to go " << CityMiles << "miles." << endl;
  cout << "Making highway travel the best option!";
  return 0;
}