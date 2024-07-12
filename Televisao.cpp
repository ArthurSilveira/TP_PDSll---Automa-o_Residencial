#include "Televisao.hpp"

// Implementação dos metodos da classe Televisao
void Televisao :: definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout <<  "TV ligada." << std::endl;
    } else {
        std::cout <<  "TV desligada." << std::endl;
    }
}

void Televisao::controlar(float nivel) {
    ajustarVolume(nivel);
}

void Televisao :: ajustarVolume(float nivel) {
    this->volume = nivel;
    std::cout << "Volume ajustado para " << nivel << std::endl;
}

void Televisao :: ajustarCanal(int canal) {
    this->canal = canal;
    std::cout << "Canal ajustado para " << canal << std::endl;
}