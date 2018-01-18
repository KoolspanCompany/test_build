#include "Car.h"

Car::Car(string licensePlate, int year)
{
  m_licensePlate = licensePlate;
  m_year = year;
}

string Car::getLicensePlate()
{
  return m_licensePlate;
}

int Car::getYear()
{
  return m_year;
}
