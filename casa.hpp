#pragma once
class Garaj
{
private:
     double c_suprafata{};
public:
    Garaj(/* args */);
    ~Garaj();
};

class Casa
{
private:
    double c_suprafataOdaie;
    double c_suprafataBucatarie;
    Garaj Garaj;
public:
    Casa(/* args */);
    ~Casa();
};

class Villa : public Casa
{ 
    private:
     double c_pamantAdiacent{};
    public:
    Villa();

};