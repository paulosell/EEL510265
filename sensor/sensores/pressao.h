#ifndef SENSOR_SENSORES_PRESSAO_H
#define SENSOR_SENSORES_PRESSAO_H

#include "../Sensor.h"
#include "../../relogio/clockCalendar.h"

class Pressao : public Sensor
{
private:
    ClockCalendar dataHora;

public:
    Pressao(){};

    Pressao(int id);

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * definir o valor do identificador único do sensor
     * 
     * @param[in]   id      valor do identificador único
     */
    void setIdPressao(int id);

    /**
     * @brief metodo para que uma entidade que não seja Sensor possa
     * obter o valor do identificador único do sensor
     * 
     */
    int getIdPressao();

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