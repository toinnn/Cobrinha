#include "Comida.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std ;

Comida::Comida()
{
    //ctor
}

Comida::~Comida()
{
    //dtor
}
void Comida::mgotoxy(int x,int y)
{
    COORD p={x,y} ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}
void Comida ::exibir()
{

    do{
    srand(time(NULL));
    Mx=(rand()% 30 )+1 ;
    My=(rand()%26)+1 ;
    mgotoxy(Mx,My);}while(Mx==15&&My==19||Mx==16&&My==19||Mx==22&&My==14||Mx==23&&My==14||Mx==24&&My==14||Mx==23&&My==15||Mx==8&&My==9||Mx==9&&My==9||Mx==10&&My==9||Mx==11&&My==9)
    ;cout<< (char ) 2 ;

}
int Comida::getMx()
{
    return Mx ;
}
int Comida ::getMy()
{
    return My ;
}
