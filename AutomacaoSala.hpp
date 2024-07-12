#ifndef AUTOMACAOSALA_HPP
#define AUTOMACAOSALA_HPP

#include <iostream>
#include <string>

#include "Iluminacao.hpp"
#include "ArCondicionado.hpp"
#include "Televisao.hpp"

// Classe principal para gerenciar a automatização da sala de estar
class AutomacaoSala {
private:
    Iluminacao iluminacao;
    ArCondicionado arCondicionado;
    Televisao televisao;

public:
    void controlarIluminacao(bool estado, float brilho);
    void controlarArCondicionado(bool estado, float temperatura);
    void controlarTelevisao(bool estado, float volume = 1.0f, int canal = 1);
};

#endif // AUTOMACAOSALA_HPP