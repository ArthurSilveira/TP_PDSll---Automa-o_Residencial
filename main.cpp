#include "Sala.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void informacoes() {
    cout << "O que deseja fazer no momento?" << endl;
    cout << endl;
    cout << "-> Ligar a luz (digite LUZ e o nivel do Brilho)" << endl;
    cout << "-> Ligar o ar condicionado (digite AR e a Temperatura desejada)" << endl;
    cout << "-> Ligar a televisao (digite TV, o Volume e o Canal desejado)" << endl;
    cout << endl;
    cout << "*Caso deseje desligar algo, basta adicionar o termo 'D' no final do comando escolhido!" << endl;
    cout << "Nesse caso nao eh necessario informar nada alem do comando de desligamento" << endl;
    cout << endl;
    cout << "Para encerrar o programa, digite SAIR" << endl;
}

int main() {
    string comando;
    AutomacaoSala sala;

    informacoes();

    while (true) {
        cout << "Digite seu comando: ";
        getline(cin, comando);

        if (comando.empty()) {
            continue;  // Ignora comandos vazios
        }

        stringstream ss(comando);
        string acao;
        ss >> acao;

        if (acao == "SAIR") {
            cout << "Encerrando o programa..." << endl;
            break;
        } else if (acao == "LUZ") {
            int brilho;
            ss >> brilho;
            if (ss.fail() || brilho < 0 || brilho > 100) {
                cout << "Nivel de brilho invalido. Por favor, tente novamente." << endl;
                continue;
            }
            sala.controlarIluminacao(true, brilho);
        } else if (acao == "AR") {
            double temperatura;
            ss >> temperatura;
            if (ss.fail()) {
                cout << "Temperatura invalida. Por favor, tente novamente." << endl;
                continue;
            }
            sala.controlarArCondicionado(true, temperatura);
        } else if (acao == "TV") {
            float volume;
            int canal;
            ss >> volume >> canal;
            if (ss.fail()) {
                cout << "Volume ou canal invalido. Por favor, tente novamente." << endl;
                continue;
            }
            sala.controlarTelevisao(true, volume, canal);
        } else if (acao == "LUZD") {
            sala.controlarIluminacao(false, 0);
        } else if (acao == "ARD") {
            sala.controlarArCondicionado(false, 0);
        } else if (acao == "TVD") {
            sala.controlarTelevisao(false, 0, 0);
        } else {
            cout << "Comando invalido. Por favor, tente novamente." << endl;
        }
    }

    return 0;
}

