#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Arco.hpp"

Arco::Arco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Arco::gerarForcaAtaque()
{
    return  maxForca - minForca*50/100;
}

string Arco::gerarRuidoAtaque()
{
    return "flapt";
}
