#include "Sala.hpp"

// Implementação dos métodos da classe base Dispositivo
void Dispositivo::definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
        std::cout << "Dispositivo ligado." << std::endl;
    } else {
        std::cout << "Dispositivo desligado." << std::endl;
    }
}

// Implementação dos métodos da classe Iluminacao
void Iluminacao::controlar(float nivel) {
    this->nivel = nivel;
    std::cout << "Brilho controlado para " << nivel << "%" << std::endl;
}

// Implementação dos métodos da classe ArCondicionado
void ArCondicionado::controlar(float temp) {
    this->temperatura = temp;
    std::cout << "Temperatura controlada para " << temp << " graus Celsius." << std::endl;
}

// Implementação dos métodos da classe Televisao
void Televisao::controlar(float nivel) {
    this->volume = nivel;
    std::cout << "Volume controlado para " << nivel << std::endl;
}

void Televisao::controlarCanal(int canal) {
    this->canal = canal;
    std::cout << "Canal controlado para " << canal << std::endl;
}

// Implementação dos métodos da classe AutomacaoSala
void AutomacaoSala::controlarIluminacao(bool estado, float brilho) {
    if (estado) {
        iluminacao.definirLigado(true);
        iluminacao.controlar(brilho);
    } else {
        iluminacao.definirLigado(false);
    }
}

void AutomacaoSala::controlarArCondicionado(bool estado, float temperatura) {
    if (estado) {
        arCondicionado.definirLigado(true);
        arCondicionado.controlar(temperatura);
    } else {
        arCondicionado.definirLigado(false);
    }
}

void AutomacaoSala::controlarTelevisao(bool estado, float volume, int canal) {
    if (estado) {
        televisao.definirLigado(true);
        televisao.controlar(volume);
        televisao.controlarCanal(canal);
    } else {
        televisao.definirLigado(false);
    }
}