#ifndef ARCONDICIONADO_HPP
#define ARCONDICIONADO_HPP

#include <iostream>

#include "Dispositivo.hpp"

// Classe para controlar o ar condicionado
class ArCondicionado : public Dispositivo {
private:
    double temperatura;
public:
    void definirLigado(bool estado) override;
    void controlar(float temp) override;
    void ajustarTemperatura(float temp);
};

#endif // ARCONDICIONADO_HPP