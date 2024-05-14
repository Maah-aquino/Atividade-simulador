#include "../personagens-hpp/Tyrion.hpp"

Tyrion::Tyrion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Tyrion::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Tyrion::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Tyrion::pegarDescricao() 
{
    return "ahh Não";
}