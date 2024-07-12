#include "AutomacaoSala.hpp"

// Implementação dos metodos da classe AutomacaoSala
void AutomacaoSala :: controlarIluminacao(bool estado, float brilho) {
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