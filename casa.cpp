#pragma once
#include "casa.hpp"
#include "iostream"

Garaj::Garaj()
{
    std::cout << "Da marimea garajului (m^2) \n";
    std::cin >> c_suprafata;
}
Casa::Casa()
{
    std::cout << "Da marimea camerei (m^2) \n";
    std::cin >> c_suprafataOdaie;

    std::cout << "Da marimea bucatarii (m^2) \n";
    std::cin >> c_suprafataBucatarie;
}
Villa::Villa() : Casa()
{
    std::cout << "Da marimea pamantului adiacent (m^2) \n";
    std::cin >> c_terenAdiacent;

}
double Garaj::getSuprafata() const
{
    return c_suprafata;
}
void Garaj::setSuprafata(double suprafata)
{
  c_suprafata = suprafata;
}
void Casa::print()
{
    std::cout << "Camera are " << c_suprafataOdaie << " m^2 \n";
    std::cout << "Bucataria are " << c_suprafataBucatarie << " m^2 \n";
    std::cout << "Garajul are " << c_garaj.getSuprafata() << " m^2 \n";
}
void Villa::print()
{
    std::cout << "Camera vilei are " << c_suprafataOdaie << " m^2 \n";
    std::cout << "Bucataria vilei are " << c_suprafataBucatarie << " m^2 \n";
    std::cout << "Garajul vilei are " << c_garaj.getSuprafata() << " m^2 \n";
    std::cout << "Terenul adiacent a vilei are " << c_terenAdiacent << " m^2 \n";
}
std::ostream& operator<<(std::ostream& out,const Casa& casa)
{
     out << "Camera are " << casa.c_suprafataOdaie << " m^2 \n";
    out << "Bucataria are " << casa.c_suprafataBucatarie << " m^2 \n";
    out << "Garajul are " << casa.c_garaj.getSuprafata() << " m^2 \n";
    return out;
}
std::ostream& operator<<(std::ostream& out,const Villa& villa)
{
     out << "Camera vilei are " << villa.c_suprafataOdaie << " m^2 \n";
    out << "Bucataria vilei are " << villa.c_suprafataBucatarie << " m^2 \n";
    out << "Garajul vilei are " << villa.c_garaj.getSuprafata() << " m^2 \n";
    out << "Terenul vilei adiacent are " << villa.c_terenAdiacent << " m^2 \n";
    return out;
}