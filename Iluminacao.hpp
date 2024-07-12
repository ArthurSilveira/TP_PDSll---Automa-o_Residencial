#ifndef ILUMINACAO_HPP
#define ILUMINACAO_HPP

#include <iostream>

#include "Dispositivo.hpp"

// Classe para controlar a iluminação
class Iluminacao : public Dispositivo {
private:
    float nivel;
public:
    void definirLigado(bool estado) override;
    void controlar(float nivel) override;
    void ajustarBrilho(float nivel);
};

#endif // ILUMINACAO_HPP