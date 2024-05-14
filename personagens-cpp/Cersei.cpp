#include "../personagens-hpp/Cersei.hpp"

Cersei::Cersei(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Cersei::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int  Cersei::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Cersei::pegarDescricao() 
{
    return "SHAME";
}