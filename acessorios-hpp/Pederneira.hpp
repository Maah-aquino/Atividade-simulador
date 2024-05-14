#ifndef PEDERNEIRA
#define PEDERNEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Pederneira : public ArmaDefesa
{
    public:
        Pederneira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif