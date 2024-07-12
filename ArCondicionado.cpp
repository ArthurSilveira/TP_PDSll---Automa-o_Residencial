#include "ArCondicionado.hpp"

// Implementação dos metodos da classe ArCondicionado
void ArCondicionado :: definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout <<  "Ar condicionado ligado." << std::endl;
    } else {
        std::cout <<  "Ar condicionado desligado." << std::endl;
    }
}
void ArCondicionado :: controlar(float temp) {
    ajustarTemperatura(temp);
}
void ArCondicionado :: ajustarTemperatura(float temp) {
    this->temperatura = temp;
    std::cout << "Temperatura ajustada para " << temp << " graus Celsius." << std::endl;
}