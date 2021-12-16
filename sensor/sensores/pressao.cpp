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
    "  " << "Data e Hora "; this->dataHora.read(); cout << endl;
}

void Pressao::setLeitura(){
    this->readSensor();
}

void Pressao::readSensor(){
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
