#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
  public:
    Car(string licensePlate, int year);
    string getLicensePlate();
    int getYear();

  private:
    string m_licensePlate;
    int m_year;
};

#endif
