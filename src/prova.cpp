#include <iostream>
#include "prova.h"

using namespace std;

// Implementação do construtor STCard
STCard::STCard(string ID, string Name, string Company, string Year, string Speed, string Range, string Length, string Wingspan){
  this->ID = ID;
  this->Name = Name;
  this->Company = Company;
  this->Year = Year;
  this->Speed = Speed;
  this->Range = Range;
  this->Length = Length;
  this->Wingspan = Wingspan;
  ST = false; // A carta inicialmente não está marcada como Super Trunfo
}

bool STCard::IsST() const{
  return ST;
}
string STCard::GetId() const{
  return ID;
}
string STCard::GetName() const{
  return Name;
}
string STCard::GetCompany() const{
  return Company;
}
int STCard::GetYear() const{
  return Year;
}
int STCard::GetSpeed() const{
  return Speed;
}
unsigned int STCard::GetRange() const{
  return Range;
}
float STCard::GetLength() const{
  return Length;
}
float STCard::GetWingspan() const{
  return Wingspan;
}
