#include "Cobra.h"
#include <vector>
#include <iostream>
#include <windows.h>

using namespace std ;

Cobra::Cobra()
{
    //ctor
}

Cobra::~Cobra()
{
    //dtor
}
void Cobra::mgotoxy(int x,int y)
{
    COORD p={x,y} ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}
void Cobra::exibir()
{

    tamanho=2;
    CoX.push_back(7);
    CoY.push_back(7);

    CoX.push_back(6);
    CoY.push_back(6);
    mgotoxy(CoX.at(tamanho-1),CoY.at(tamanho-1));
    cout<<(char) 219 ;

}
void Cobra::movimenta(int d)
{


        int x ;
        aux=CoX.at(tamanho-1);
        auy=CoY.at(tamanho-1);

 mgotoxy(CoX.at(tamanho-1),CoY.at(tamanho-1));
    cout<<" ";

    ax=CoX.at(0);
    ay=CoY.at(0);
    for( x=0;x<tamanho-1;x++)
    {
        bx=CoX.at(x+1);
        by=CoY.at(x+1);
        CoX.at(x+1)=ax;
        CoY.at(x+1)=ay;
        ax=bx;
        ay=by;
    }
    if (d==0)
        {CoX.at(0)--;
        a=-1;}
    if (d==1)
        {CoY.at(0)--;
        a=-1;}
    if (d==2)
        {CoX.at(0)++;
        a=1;}
    if (d==3)
        {CoY.at(0)++;
        a=1;}

    mgotoxy(CoX.at(0),CoY.at(0));
    cout <<(char) 219 ;
    mgotoxy(CoX.at(tamanho-1),CoY.at(tamanho-1));



}
void Cobra::aumenta()
{
    tamanho++;
    aux=CoX.at(tamanho-2);
    auy=CoY.at(tamanho-2);
    CoX.push_back(aux);
    CoY.push_back(auy);


}
bool Cobra::mesmaPosicao(Comida o)
{
        if(o.getMx()==CoX.at(0)&&o.getMy()==CoY.at(0))
        {

            return 1;
        }
        return 0 ;
}
bool Cobra::enrolou()
{
    for(int x=1 ;x<tamanho-1;x++)
        for(int y=1;y<tamanho-1;y++)
    {
            if(CoX.at(0)==CoX.at(x)&&CoY.at(0)==CoY.at(y)&&tamanho>3)
                {
                    return 1;
                }
    }
    return 0 ;
}
bool Cobra::colidiu()
{
    if(CoX.at(0)==0||CoX.at(0)==32||CoY.at(0)==0||CoY.at(0)==28||CoX.at(0)==15&&CoY.at(0)==19||CoX.at(0)==16&&CoY.at(0)==19||CoX.at(0)==22&&CoY.at(0)==14||CoX.at(0)==23&&CoY.at(0)==14||CoX.at(0)==24&&CoY.at(0)==14||CoX.at(0)==23&&CoY.at(0)==15||CoX.at(0)==8&&CoY.at(0)==9||CoX.at(0)==9&&CoY.at(0)==9||CoX.at(0)==10&&CoY.at(0)==9||CoX.at(0)==11&&CoY.at(0)==9)
    {
            return 1;

    }
    return 0 ;
}
