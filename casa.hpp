#pragma once
#include <iostream>
class Garaj
{
private:
     double c_suprafata{};
public:
    Garaj();
    double getSuprafata() const ;
    void setSuprafata(double);
};

class Casa
{
protected:
    double c_suprafataOdaie;
    double c_suprafataBucatarie;
    Garaj c_garaj;

public:
    Casa();
    virtual void print();
    friend std::ostream& operator<<(std::ostream& out,const Casa&);
};

class Villa : public Casa
{ 
    private:
     double c_terenAdiacent{};
    public:
    Villa();
    void print();
    friend std::ostream& operator<<(std::ostream& out,const Villa&);
};