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
    std::cin >> c_pamantAdiacent;

}