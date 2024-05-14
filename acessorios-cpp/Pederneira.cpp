#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Pederneira.hpp"

Pederneira::Pederneira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Pederneira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Pederneira::getResistencia() 
{
    return this->resistencia;
}