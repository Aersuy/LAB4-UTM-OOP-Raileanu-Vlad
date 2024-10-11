constexpr int maxSize{50};
class Mobila
{
protected:
    double c_pret{};
    char* c_nume{};
    char* c_stil{};
    char* c_domeniuDeUtilizare{};
public:
    Mobila();
    Mobila(Mobila&);
    ~Mobila();

    void setStill();
    void setPret();
    void setDomeniuDeUtilizare();
    Mobila& operator=(const Mobila&);
    virtual void print();
};


class Scaun : public Mobila 
{
    private:
     int c_nrPicioare{};

    public:
    Scaun();
    Scaun(int);
    void print();
    void setNrPicioare();
    Scaun& operator=(const Scaun&);

};

class Masa : public Mobila
{
    private:
      double c_suprafata{};
    public:
    Masa();
    Masa(double);

    Masa& operator=(const Masa&);
    void print();
    void setSuprafata();
};