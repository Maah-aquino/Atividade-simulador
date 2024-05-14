#ifndef CERSEI
#define CERSEI
#include "../core-simulador-hpp/Personagem.hpp"
class Cersei : public Personagem
{
    public:
       Cersei(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif