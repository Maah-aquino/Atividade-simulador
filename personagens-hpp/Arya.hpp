#ifndef ARYA
#define ARYA
#include "../core-simulador-hpp/Personagem.hpp"
class Arya : public Personagem
{
    public:
        Arya(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif