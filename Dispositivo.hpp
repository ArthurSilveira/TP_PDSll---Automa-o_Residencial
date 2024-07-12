#ifndef DISPOSITIVO_HPP
#define DISPOSITIVO_HPP

#include <iostream>
#include <string>

// Classe base para dispositivos
class Dispositivo {
protected:
    bool estado = false;
public:
    virtual void definirLigado(bool estado) = 0;
    virtual void controlar(float nivel) = 0;
    virtual ~Dispositivo() = default;
};

#endif // DISPOSITIVO_HPP