#ifndef SNOW
#define SNOW
#include "../core-simulador-hpp/Personagem.hpp"
class Snow : public Personagem
{
    public:
        Snow(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif