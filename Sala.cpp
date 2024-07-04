#include "Sala.hpp"

// Implementação dos metodos da classe Iluminacao
void Iluminacao :: definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout << "Luzes ligadas." << std::endl;
    } else {
        std::cout << "Luzes desligadas." << std::endl;
    }
}

void Iluminacao :: ajustarBrilho(float nivel) {
    this->nivel = nivel;
    std::cout << "Brilho ajustado para " << nivel << "%" << std::endl;
}

// Implementação dos metodos da classe ArCondicionado
void ArCondicionado :: definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout <<  "Ar condicionado ligado." << std::endl;
    } else {
        std::cout <<  "Ar condicionado desligado." << std::endl;
}
}

void ArCondicionado :: ajustarTemperatura(double temp) {
    this->temperatura = temp;
    std::cout << "Temperatura ajustada para " << temp << " graus Celsius." << std::endl;
}

// Implementação dos metodos da classe Televisao
void Televisao :: definirLigado(bool estado) {
    this->estado = estado;
    if (estado) {
    std::cout <<  "TV ligada." << std::endl;
    } else {
        std::cout <<  "TV desligada." << std::endl;
    }
}

void Televisao :: ajustarVolume(float nivel) {
    this->volume = nivel;
    std::cout << "Volume ajustado para " << nivel << std::endl;
}

void Televisao :: ajustarCanal(int canal) {
    this->canal = canal;
    std::cout << "Canal ajustado para " << canal << std::endl;
}

// Implementação dos metodos da classe AutomacaoSala
void AutomacaoSala ::controlarIluminacao(bool estado, int brilho) {
    if (estado) {
        iluminacao.definirLigado(true);
        iluminacao.ajustarBrilho(brilho);
    } else {
        iluminacao.definirLigado(false);
    }
}

void AutomacaoSala :: controlarArCondicionado(bool estado, float temperatura){
    if (estado) {
        arCondicionado.definirLigado(true);
        arCondicionado.ajustarTemperatura(temperatura);
    } else {
        arCondicionado.definirLigado(false);
    }
}

void AutomacaoSala :: controlarTelevisao(bool estado, float volume , int canal) {
    if (estado) {
        televisao.definirLigado(true);
        televisao.ajustarVolume(volume);
        televisao.ajustarCanal(canal);
    } else {
        televisao.definirLigado(false);
    }
}
