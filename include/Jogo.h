#ifndef JOGO_H
#define JOGO_H
#include "Cobra.h"
#include "Comida.h"
#include "Cenario.h"
#include <conio.h>
#include <iostream>

class Jogo
{
private:
    Cobra cobra;
    Comida comida;
    Cenario cenario;
    char tecla;
    int d;

public:
    Jogo()
    {
        tecla = 'a';
        d = 2;
        cenario.construir();
        comida.exibir();
        cobra.exibir();
    }

    void play()
    {
        while (tecla != 's')
        {
            while (tecla != 's' && !(tecla = kbhit()))
            {

                cobra.movimenta(d);
                if (cobra.mesmaPosicao(comida))
                {
                    cobra.aumenta();
                    comida.exibir();

                }

                Sleep(100);

                if (cobra.enrolou())
                    {tecla = 's';

                    }


                if (cobra.colidiu())
                    {tecla = 's';
                    }


            }
            if (tecla != 's')
                tecla = getch();
            if (tecla == 'K')
                d = 0;
            if (tecla == 'H')
                d = 1;
            if (tecla == 'M')
                d = 2;
            if (tecla == 'P')
                d = 3;
            if (cobra.colidiu())
                tecla = 's';
        }
        getch();
}    };

#endif // JOGO_H
