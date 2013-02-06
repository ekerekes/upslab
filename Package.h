/*Jason Wassel and Erich Kerekes
Fundamentals of Computing II, Lab 3
UPS Package class*/

#include <iostream>
#include <string>

using namespace std;

class Package{

public:
void calculateCost();
void setAddress(int Address);
void setCity(string City);
void setState(string State);
void setZipCode(int Zip);
void setWeight(double Weight);

private:
string name;
int address;
string city;
string state;
int zipcode;
double weight;
double cost;
};
