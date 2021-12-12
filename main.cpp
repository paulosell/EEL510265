#include <iostream>
#include "cadastro/cadastroTemperatura.h"
#include "cadastro/cadastroPressao.h"

using namespace std;

int main(){
    CadastroTemperatura ct;
    CadastroPressao cp;

    while(true){

        cout << endl << "Digite uma opçao" << endl;
        cout << "1. Leitura de sensor de temperatura" <<endl
             << "2. Excluir temperatura" << endl
             << "3. Consultar determinada temperatura" << endl
             << "4. Listar todas as temperaturas" << endl
             << "5. Leitura de sensor de pressao" << endl
             << "6. Excluir pressao" << endl 
             << "7. Consultar determinada pressao" << endl 
             << "8. Listar todas as pressões" << endl;
    

    int op;
    cin >> op;
    switch(op) {
        case 1:
            ct.adicionarTemperatura();
            break;
        case 2:
            ct.excluirTemperatura();
            break;
        case 3:
            ct.consultar();
            break;
        case 4:
            ct.listar();
            break;
        case 5:
            cp.adicionarPressao();
            break;
        case 6:
            cp.excluirPressao();
            break;
        case 7:
            cp.consultar();
            break;
        case 8:
            cp.listar();
            break;

        default:
            cout << endl << "Opcao invalida" << endl;
            break;
    }

    }
}