#ifndef CADASTRO_CADASTRO_H
#define CADASTRO_CADASTRO_H

#define MAX_SENSOR 10
#include "../sensor/Sensor.h"

class Cadastro{
public:
    /**
        @brief Construtor da classe Cadastro 
    */
    Cadastro(){};
protected:
    /**
     * @brief adiciona um sensor 
     */
    virtual void adicionar() = 0;

    /**
     * @brief exclui um sensor 
     */
    virtual void excluir() = 0;

    /**
     * @brief consulta um sensor de específico 
     */
    virtual void consultar() = 0;

    /**
     * @brief lista todos os sensores adicionados
     */
    virtual void listar() = 0;


};

#endif