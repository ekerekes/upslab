/*Jason Wassel and Erich Kerekes
Fundamentals of Computing II, Lab 3
UPS Package class*/

#include <iostream>

using namespace std;

// Default Constructor
Package::Package(){
name= "empty";
address= 0;
city= "empty";
state= "empty";
zipcode=0;
weight=0;
cost=0;
};

// Calculate Cost Function
void Package::calculateCost(){
double costPerOunce= .15; // 15 cents per ounce to ship
cost= costPerOunce*weight;
}

// SET ADDRESS FUNCTION
void Package::setAddress(int Address){
address=Address;
}

// SET CITY FUNCTION
void Package::setCity(string City){
city=City;
}

// SET STATE FUNCTION
void Package::setState(string State){
state=State;
}

// SET ZIPCODE FUNCTION
void Package::setZipCode(int Zip){
zipcode=Zip;
}

// SET WEIGHT FUNCTION
void Package::setWeight(double Weight){
weight=Weight;
}



