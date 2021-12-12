#ifndef CADASTRO_CADASTROTEMPERATURA_H
#define CADASTRO_CADASTROTEMPERATURA_H

#include "../sensor/sensores/temperatura.h"
#define MAX_SENSOR_TEMP 10

class CadastroTemperatura
{
public:
    /**
        @brief Construtor da classe CadastroTemperatura. Apenas inicializa o vetor
        num_leituras 
    */
    CadastroTemperatura();

    /**
     * @brief adiciona um sensor de temperatura no vetor de sensores
     */
    void adicionarTemperatura();

    /**
     * @brief exlui um sensor de temperatura do vetor de sensores
     */
    void excluirTemperatura();

    /**
     * @brief consulta um sensor de pressao específico no vetor de sensores
     */
    void consultar();

    /**
     * @brief lista todos os sensores de pressao adicionados no vetor de sensores
     */
    void listar();

private:
    Temperatura vTemperatura[MAX_SENSOR_TEMP];
    bool valido[MAX_SENSOR_TEMP];
    int num_leituras;
};

#endif