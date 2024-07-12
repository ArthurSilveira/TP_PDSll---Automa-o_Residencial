#include "Iluminacao.hpp"

// Implementação dos metodos da classe Iluminacao
void Iluminacao :: definirLigado (bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout << "Luzes ligadas." << std::endl;
    } else {
        std::cout << "Luzes desligadas." << std::endl;
    }
}

void Iluminacao :: controlar(float nivel) {
    ajustarBrilho(nivel);
}

void Iluminacao :: ajustarBrilho(float nivel) {
    this->nivel = nivel;
    std::cout << "Brilho ajustado para " << nivel << "%" << std::endl;
}