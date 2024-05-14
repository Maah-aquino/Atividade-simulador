#include "../personagens-hpp/Daenerys.hpp"

Daenerys::Daenerys(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Daenerys::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Daenerys::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Daenerys::pegarDescricao() 
{
    return "Churrasco";
}