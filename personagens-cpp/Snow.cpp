#include "../personagens-hpp/Snow.hpp"

Snow::Snow(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Snow::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Snow::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Snow::pegarDescricao() 
{
    return "O inverno está chegando";
}