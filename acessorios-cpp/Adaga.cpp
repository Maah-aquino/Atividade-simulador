#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Adaga.hpp"

Adaga::Adaga(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Adaga::gerarForcaAtaque()
{
    return  maxForca*0,8;
}

string Adaga::gerarRuidoAtaque()
{
    return "glub glub";
}
