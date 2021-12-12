/*
 * file: Temperatura.h
 *
 * Descricao: Classe Temperatura utilizada para realizar a leitura do sensor de temperatura, e data data/hora da leitura realizada.
 *
 * Autor: Eduardo Augusto Bezerra
 * Data: 09/12/2021
 * 
 * Ultima Alteracao: Eduardo Augusto Bezerra
 * Data da ultima alteracao: 09/12/2021
 *
 */

#ifndef SENSOR_SENSORES_TEMPERATURA_H
#define SENSOR_SENSORES_TEMPERATURA_H

#include "../Sensor.h"
#include "../../relogio/clockCalendar.h"

class Temperatura : public Sensor
{
private:
    ClockCalendar dataHora;

public:
    Temperatura(){};

    Temperatura(int id);

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * definir o valor do identificador único do sensor
     * 
     * @param[in]   id      valor do identificador único
     */
    void setIdTemperatura(int id);

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * obter o valor do identificar únido do sensor 
     * 
     */
    int getIdTemperatura();

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * obter o valor da leitura feita pelo sensor
     * 
     */
    void getLeitura();

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * definir o valor da leitura feita pelo sensor
     * 
     */
    void setLeitura();

protected:
    void readSensor();
};

#endif