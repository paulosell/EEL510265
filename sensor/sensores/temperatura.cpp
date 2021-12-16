#include "temperatura.h"
#include <cstdlib>   // para usar srand() e rand()
#include <ctime>     // para usar time()

Temperatura::Temperatura(int id){
    this->setID(id);
}

void Temperatura::setIdTemperatura(int id){
    this->setID(id);
}

int Temperatura::getIdTemperatura(){
    return this->getID();
}

void Temperatura::getLeitura(){
    cout << endl << "Identificador: "<< this->getID() << "  Temperatura lida: " << this->getValor() <<
    "  " << "  Hora e Data "; this->dataHora.read(); cout << endl;
    
}

void Temperatura::setLeitura(){
    this->readSensor();
}

void Temperatura::readSensor(){
	// Data/hora da leitura do sensor - substituir os parametros do construtor do ClockCalendar por time()
    time_t timer;
    time(&timer);

    struct tm *horario;
    horario = localtime(&timer);
    cout<<horario->tm_mday;
	dataHora = ClockCalendar(horario->tm_mon, horario->tm_mday, horario->tm_year, horario->tm_hour, horario->tm_min, horario->tm_sec, true);
	// Simulacao de leitura de sensor
	srand (static_cast <unsigned> (time(0)));
	setValor(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
}
