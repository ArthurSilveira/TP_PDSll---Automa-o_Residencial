Sala.hpp
#ifndef AUTOMACAO_SALA_HPP
#define AUTOMACAO_SALA_HPP

#include <iostream>
#include <string>

// Classe para controlar a iluminação
class Iluminacao {
private:
    bool estado = false;
    float nivel;
public:
    void definirLigado(bool estado);
    void ajustarBrilho(float nivel);
};

// Classe para controlar o ar condicionado
class ArCondicionado {
private:
    bool estado = false;
    double temperatura;
public:
    void definirLigado(bool estado);
    void ajustarTemperatura(double temp);
};

// Classe para controlar a televisão
class Televisao {
private:
    bool estado = false;
    float volume;
    int canal;
public:
    void definirLigado(bool estado);
    void ajustarVolume(float nivel);
    void ajustarCanal(int canal);
};

// Classe principal para gerenciar a automatização da sala de estar
class AutomacaoSala {
private:
    Iluminacao iluminacao;
    ArCondicionado arCondicionado;
    Televisao televisao;

public:
    void controlarIluminacao(bool estado, int brilho);
    void controlarArCondicionado(bool estado, float temperatura);
    void controlarTelevisao(bool estado, float volume = 1.0f, int canal = 0);
};

#endif // AUTOMACAO_SALA_HPP
