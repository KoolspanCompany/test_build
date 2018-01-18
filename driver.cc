#include "Car.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
  Car c("ABC123", 1996);
  cout << "The car's license plate is " << c.getLicensePlate() << " and the year is " << c.getYear() << endl;
}
