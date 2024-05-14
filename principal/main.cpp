#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Adaga.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../acessorios-hpp/Besta.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Manopla.hpp"
#include "../acessorios-hpp/Pederneira.hpp"
#include "../acessorios-hpp/BalaClava.hpp"
#include "../acessorios-hpp/Capa.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Arya.hpp"
#include "../personagens-hpp/Snow.hpp"
#include "../personagens-hpp/Tyrion.hpp"
#include "../personagens-hpp/Cersei.hpp"
#include "../personagens-hpp/Daenerys.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

 main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* besta  = new Besta("Arma super Roubada",50,100);
    ArmaAtaque* espada  = new Espada("Espada LONGCLAW",15,20);
    ArmaAtaque* lança = new Lanca("Lança longa",20,30);
    ArmaAtaque* adaga = new Adaga("aço valiriano",15,20);
    ArmaAtaque* machado = new Machado("rustico",12,15);
    ArmaAtaque* arco = new Arco("Simples",15,25);
    ArmaDefesa* escudo = new Escudo("Latão", 10);
    ArmaDefesa* manopla = new Manopla ("Aço", 5);
    ArmaDefesa* pederneira = new Pederneira("aço", 8);
    ArmaDefesa* balaclava = new BalaClava("Malha de aço", 11);
    ArmaDefesa* capa = new Capa("so deixa estiloso", 1);
    ArmaDefesa* armadura = new Armadura("Defesa Super Roubada", 1000);
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 100, arma, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo);
    Personagem* p4 = new Chaves(2, "Chaves Eq2 ", 60, arma, escudo);
    Personagem* p5 = new Arya(1, "Arya Eq1", 5, adaga, escudo);
    Personagem* p6 = new Snow(1, "Snow Eq1", 10, espada, pederneira);
    Personagem* p7 = new Tyrion(2, " TyrionEq2",50, lança, balaclava );
    Personagem* p8 = new Daenerys(2, "Daenerys Eq2 - Reserva", 11, machado, manopla);
    Personagem* p9 = new Cersei(2, "Cersei Eq2 - Reserva", 8, machado, capa);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 1);
    simulador->adicionarPersonagem(p7, 2);
    simulador->adicionarPersonagem(p8, 2);
    simulador->adicionarPersonagem(p9, 2);
    simulador->iniciarSimulacao();

    return 0;
}