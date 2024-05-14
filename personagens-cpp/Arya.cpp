#include "../personagens-hpp/Arya.hpp"

Arya::Arya(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Arya::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Arya::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Arya::pegarDescricao() 
{
    return "HOJE NÃO";
}