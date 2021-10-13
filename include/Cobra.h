#ifndef COBRA_H
#define COBRA_H
#include <vector>
#include "Comida.h"

using namespace std ;

class Cobra
{   private:
    vector <int> CoX,CoY;   //Vetores posição da cobra
    int Mx,My ;    //Vetores posição da maçã
    int tamanho,aux,auy,ax,bx,ay,by,a ;



    public:
        Cobra();
        virtual ~Cobra();
        void exibir();
        void movimenta(int x);
        void aumenta();
        bool enrolou();
        bool colidiu();

        bool mesmaPosicao(Comida o);
    void mgotoxy(int x,int y);
    protected:


};

#endif // COBRA_H
