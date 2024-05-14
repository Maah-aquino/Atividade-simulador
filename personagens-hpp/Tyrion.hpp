#ifndef TYRION
#define TYRION
#include "../core-simulador-hpp/Personagem.hpp"
class Tyrion : public Personagem
{
    public:
       Tyrion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif