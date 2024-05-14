#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/BalaClava.hpp"

BalaClava::BalaClava(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string BalaClava::getDescricaoArma() 
{
    return this->descricaoArma;
}

int BalaClava::getResistencia() 
{
    return this->resistencia;
}