#ifndef CENARIO_H
#define CENARIO_H
#include <vector>
#include <windows.h>

using namespace std ;

class Cenario
{   private:

    vector <int> paredeX,paredeY ;


    public:
        Cenario();
        virtual ~Cenario();
        void construir();
        vector <int> getParedeX();
        vector <int> getParedeY();
    void mgotoxy(int x,int y);
    protected:



};

#endif // CENARIO_H
