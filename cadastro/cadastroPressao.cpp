#include "cadastroPressao.h"
#include <iostream>
using namespace std;

CadastroPressao::CadastroPressao(){

    for(int i =0; i< MAX_SENSOR; i++){
        this->valido[i] = false;
    }

    this->num_leituras = 0;
}


void CadastroPressao::adicionar(){

    if(this->num_leituras >= 10){
        cout<<endl<<"Limite de sensores de pressao atingido"<<endl;
        return;
    }

    int serie;

    cout << endl << "Digite o identificador único do sensor de pressao" << endl;
    cin >> serie;
    for(int i=0; i < MAX_SENSOR;i++){
        if(this->valido[i] == true && this->vPressao[i].getIdPressao() == serie){
            cout << endl << "O identificador deve ser diferente para cada sensor de pressao" << endl;
            return;
        }
    }

    
    for(int i=0; i < MAX_SENSOR;i++){
        if(this->valido[i] == false){
            Pressao t;
            t.setIdPressao(serie);
            t.setLeitura();
            this->vPressao[i] = t;
            this->num_leituras++;
            this->valido[i] = true;
            cout << endl << "Sensor adicionado com sucesso" << endl;
            return;
        }
    }

}


void CadastroPressao::excluir(){
    if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    cout << endl << "Digite o identificador do sensor que deseja excluir" << endl;

    int serie;
    cin >> serie;

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->vPressao[i].getIdPressao() == serie){
            this->valido[i] = false;
            this->num_leituras--;
            cout << endl << "Excluído com sucesso" << endl;
            return;
        }
    }

    cout << endl << "O identificador informado não existe" << endl;
    return;
}

void CadastroPressao::consultar(){

    if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    cout << endl << "Digite o identificador do sensor que deseja consultar" << endl;

    int serie;
    cin >> serie;

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->vPressao[i].getIdPressao() == serie){
            this->vPressao[i].getLeitura();
            return;
        }
    }

    cout << endl << "O identificador informado não existe" << endl;
    return;
}

void CadastroPressao::listar(){

if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->valido[i]==true){
            this->vPressao[i].getLeitura();
           
        }
    }

    
}
