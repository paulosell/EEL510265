#include "pressao.h"
#include <cstdlib>   // para usar srand() e rand()
#include <ctime>     // para usar time()

Pressao::Pressao(int id){
    this->setID(id);
}

void Pressao::setIdPressao(int id){
    this->setID(id);
}

int Pressao::getIdPressao(){
    return this->getID();
}

void Pressao::getLeitura(){
    cout << endl << "Identificador: "<< this->getID() << "  Pressao lida: " << this->getValor() <<
    "  " << "  Data/Hora"; this->dataHora.read(); cout << endl;
}

void Pressao::setLeitura(){
    this->readSensor();
}

void Pressao::readSensor(){
	// Data/hora da leitura do sensor - substituir os parametros do construtor do ClockCalendar por time()
    time_t timer;
    time(&timer);
	dataHora = ClockCalendar(2021, 6, 30, 11, 59, 55, true, (char*)ctime(&timer));
	// Simulacao de leitura de sensor
	srand (static_cast <unsigned> (time(0)));
	setValor(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
}
