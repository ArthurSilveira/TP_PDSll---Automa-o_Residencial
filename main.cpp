#include "Sala.hpp"

#include <iostream>
#include <string>

using namespace std;

void informacoes(){
    cout << "O que deseja fazer no momento?" << endl;
    cout << endl;
    cout << "-> Ligar a luz (digite L e o nivel do Brilho)" << endl;
    cout << "-> Ligar o ar condicinado (digite A e a Temperatura desejada)" << endl;
    cout << "-> Ligar a televisão (digite T, o Volume e o Canal desejado)" << endl;
    cout << endl;
    cout << "*Caso deseje desligar algo, basta adicionar o termo 'D' e depois o comando escolhido!" << endl;
    cout << "Nesse caso ao eh necessario informar nada alem do comando de desligamento" << endl;
}

int main(){
    char comando;
    AutomacaoSala sala;

    informacoes();

    cin >> comando;

    switch(comando){
        case 'L':
            int brilho;
            cin >> brilho;

            sala.controlarIluminacao(true, brilho);
            break;
        
        case 'A':
            int temperatura;
            cin >> temperatura;

            sala.controlarArCondicionado(true, temperatura);
            break;

        case 'T':
            float volume;
            int canal;
            cin >> volume >> canal;

            sala.controlarTelevisao(true, volume, canal);
            break;

        case 'D':
	    char comando_a_desligar;
	    cin >> comando_a_desligar;
	    
	    if(comando_a_desligar == 'L'){
	    	sala.controlarIluminacao(false, 0);
            	break;
	    }

            if(comando_a_desligar == 'A'){
	    	sala.controlarArCondicionado(false, 0);
            	break;
	    }

	    if(comando_a_desligar == 'T'){
	    	sala.controlarTelevisao(false, 0);
            	break;
	    }
    }

    return 0;
}
