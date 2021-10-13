#ifndef COBRA_H
#define COBRA_H
#include <vector>
#include "Comida.h"

using namespace std ;

class Cobra
{   private:
    vector <int> CoX,CoY;   //Vetores posi��o da cobra
    int Mx,My ;    //Vetores posi��o da ma��
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
