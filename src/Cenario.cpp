#include "Cenario.h"
#include <iostream>

using namespace std ;

Cenario::Cenario()
{
    //ctor
}

Cenario::~Cenario()
{
    //dtor
}

void Cenario::mgotoxy(int x,int y)
{
    COORD p={x,y} ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}
void Cenario::construir()
{
    int i=0;
    for( i;i<32;i++)
    {
        mgotoxy(i,0) ;
          cout<<(char) 219 ;
          paredeX.push_back(i);
          }
    for (i=0;i<32;i++)
    {
        mgotoxy(i,28) ;
          cout<<(char) 219 ;
    }
    for(i=0;i<29;i++)
    {
        mgotoxy(0,i) ;
          cout<<(char) 219 ;
    }
    for(i=0;i<29;i++)
    {
        mgotoxy(32,i) ;
          cout<<(char) 219 ;
    }
    mgotoxy(15,19) ;
          cout<<"**" ;
          mgotoxy(22,14) ;
          cout<<"***" ;
          mgotoxy(23,15) ;
          cout<<"*" ;
          mgotoxy(8,9) ;
          cout<<"****" ;

}
vector <int> Cenario::getParedeX()
    {
        return paredeX;
    }
vector <int> Cenario::getParedeY()
    {
        return paredeY;
    }

