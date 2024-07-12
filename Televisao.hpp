#ifndef TELEVISAO_HPP
#define TELEVISAO_HPP

#include <iostream>

#include "Dispositivo.hpp"

// Classe para controlar a televisão
class Televisao : public Dispositivo {
private:
    float volume;
    int canal;
public:
    void definirLigado(bool estado) override;
    void controlar(float nivel) override;
    void ajustarVolume(float nivel);
    void ajustarCanal(int canal);
};

#endif // TELEVISAO_HPP