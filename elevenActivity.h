#pragma once
#include "Activity.h"
class ElevenActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Exibicao retangulo";
    };
};

class Retangulo {
    public:
        Retangulo();
        Retangulo(int bas, int alt);
        int getBase();
        int getAltura();
        void setBase(int bas);
        void setAltura(int alt);
        int calcularArea();
        int calcularPerimetro();
        void exibirDados();
    private:
        int bas;
        int alt;
};