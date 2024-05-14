#ifndef BALACLAVA
#define BALACLAVA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class BalaClava : public ArmaDefesa
{
    public:
        BalaClava(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif