#include "cadastroTemperatura.h"
#include <iostream>
using namespace std;

CadastroTemperatura::CadastroTemperatura(){

    for(int i =0; i< MAX_SENSOR; i++){
        this->valido[i] = false;
    }

    this->num_leituras = 0;
}


void CadastroTemperatura::adicionar(){

    if(this->num_leituras >= 10){
        cout<<endl<<"Limite de sensores de temperatura atingido"<<endl;
        return;
    }

    int serie;

    cout << endl << "Digite o identificador único do sensor de temperatura" << endl;
    cin >> serie;
    for(int i=0; i < MAX_SENSOR;i++){
        if(this->valido[i] == true && this->vTemperatura[i].getIdTemperatura() == serie){
            cout << endl << "O identificador deve ser diferente para cada sensor de temperatura" << endl;
            return;
        }
    }

    
    for(int i=0; i < MAX_SENSOR;i++){
        if(this->valido[i] == false){
            Temperatura t;
            t.setIdTemperatura(serie);
            t.setLeitura();
            this->vTemperatura[i] = t;
            this->num_leituras++;
            this->valido[i] = true;
            cout << endl << "Sensor adicionado com sucesso" << endl;
            return;
        }
    }

}


void CadastroTemperatura::excluir(){
    if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    cout << endl << "Digite o identificador do sensor que deseja excluir" << endl;

    int serie;
    cin >> serie;

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->vTemperatura[i].getIdTemperatura() == serie){
            this->valido[i] = false;
            this->num_leituras--;
            cout << endl << "Excluído com sucesso" << endl;
            return;
        }
    }

    cout << endl << "O identificador informado não existe" << endl;
    return;
}

void CadastroTemperatura::consultar(){

    if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    cout << endl << "Digite o identificador do sensor que deseja consultar" << endl;

    int serie;
    cin >> serie;

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->vTemperatura[i].getIdTemperatura() == serie){
            this->vTemperatura[i].getLeitura();
            return;
        }
    }

    cout << endl << "O identificador informado não existe" << endl;
    return;
}

void CadastroTemperatura::listar(){

if(this->num_leituras == 0){
        cout << endl<< "Nenhum sensor adicionado"<<endl;
        return;
    }

    for(int i = 0; i < MAX_SENSOR; i++){
        if(this->valido[i]==true){
            this->vTemperatura[i].getLeitura();
           
        }
    }

    
}
