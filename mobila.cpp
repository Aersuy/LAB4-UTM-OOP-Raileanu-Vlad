#include "mobila.hpp"
#include <iostream>
Mobila::Mobila()
{ 
    c_nume = new char[maxSize];
    c_stil = new char[maxSize];
    c_domeniuDeUtilizare = new char[maxSize];
    std::cout << "Da numele mobilierului dat \n";
    std::cin >> c_nume;
}
Mobila::Mobila(Mobila& other)
{ 
    c_nume = new char[maxSize];
    c_stil = new char[maxSize];
    c_domeniuDeUtilizare = new char[maxSize];
    
    c_nume = other.c_nume;
    c_stil = other.c_stil;
    c_domeniuDeUtilizare = other.c_domeniuDeUtilizare;
    c_pret = other.c_pret;
}
void Mobila::print()
{
    std::cout << c_nume << " are pretul " << c_pret << " stilul " << c_stil << " si se utilizeaza in " << c_domeniuDeUtilizare << '\n'; 
}
void Mobila::setPret()
{   std::cin.ignore();
    std::cout << "Da pretul \n";
    std::cin >> c_pret;
}
void Mobila::setStill()
{   
    std::cout << "Da stilul \n";
    std::cin.ignore();
    std::cin.getline(c_stil,maxSize);
}
void Mobila::setDomeniuDeUtilizare()
{
    std::cout << "Da domeniul de utilizare \n";
    std::cin.ignore();
    std::cin.getline(c_domeniuDeUtilizare,maxSize);
}
Mobila::~Mobila()
{  
    delete[] c_nume;
    delete[] c_domeniuDeUtilizare;
    delete[] c_stil;
}
Scaun::Scaun() : Mobila()
{
   std::cout << "Da numarul de picioare \n";
   std::cin >> c_nrPicioare;
}
Scaun::Scaun(int picioare) : Mobila()
{
    c_nrPicioare = picioare;
}

Masa::Masa() : Mobila()
{
    std::cout << "Da suprafata mesei \n";
    std::cin >> c_suprafata;

}
Masa::Masa(double suprafata) : Mobila()
{
   c_suprafata = suprafata;
}

void Scaun::print()
{   std::cout << "Scaunul " <<  c_nume << " are " << c_nrPicioare << " piciare ";
    std::cout << c_nume << " are pretul " << c_pret << " stilul " << c_stil << " si se utilizeaza in " << c_domeniuDeUtilizare << '\n';
}

void Masa::print()
{   std::cout << "Masa" << c_nume << " are " << c_suprafata << " cm patrati ";
    std::cout << c_nume << " are pretul " << c_pret << " stilul " << c_stil << " si se utilizeaza in " << c_domeniuDeUtilizare << '\n';
}

Mobila& Mobila::operator=(const Mobila& other)
{ 
    if (this != &other)
    {
    c_nume = other.c_nume;
    c_domeniuDeUtilizare = other.c_domeniuDeUtilizare;
    c_pret = other.c_pret;
    c_stil = other.c_stil;
    }
    
 
    return *this;

}
Scaun& Scaun::operator=(const Scaun& other)
{
      if (this != &other)
    {
    c_nume = other.c_nume;
    c_domeniuDeUtilizare = other.c_domeniuDeUtilizare;
    c_pret = other.c_pret;
    c_stil = other.c_stil;
    c_nrPicioare = other.c_nrPicioare;
    }
    
 
    return *this;
}
Masa& Masa::operator=(const Masa& other)
{
      if (this != &other)
    {
    c_nume = other.c_nume;
    c_domeniuDeUtilizare = other.c_domeniuDeUtilizare;
    c_pret = other.c_pret;
    c_stil = other.c_stil;
    c_suprafata = other.c_suprafata;
    }
    
 
    return *this;
}

void Scaun::setNrPicioare()
{
    std::cout << "Da numarul de picioare a scaunului \n";
    std::cin >> c_nrPicioare;
}
void Masa::setSuprafata()
{
    std::cout << "Da suprafata mesei (cm^2) \n";
    std::cin >> c_suprafata;
}