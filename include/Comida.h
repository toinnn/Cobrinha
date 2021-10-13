#ifndef COMIDA_H
#define COMIDA_H


class Comida
{   private:
    int Mx,My ;


    public:
        Comida();
        virtual ~Comida();
        void exibir();
        int getMx();
        int getMy();

      void mgotoxy(int x, int y);
        protected:


};

#endif // COMIDA_H
