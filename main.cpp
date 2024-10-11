#include "mobila.cpp"

int main()
{
    Scaun s(4);
    s.setPret();
    s.setDomeniuDeUtilizare();
      s.setStill();

    Scaun b(s);
    b.print();
    return 0;
}
