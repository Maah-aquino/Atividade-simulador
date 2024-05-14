#ifndef DAENERYS
#define DAENERYS
#include "../core-simulador-hpp/Personagem.hpp"
class Daenerys : public Personagem
{
    public:
        Daenerys(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif