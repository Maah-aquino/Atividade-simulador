#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Manopla.hpp"

Manopla::Manopla(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Manopla::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Manopla::getResistencia() 
{
    return this->resistencia;
}