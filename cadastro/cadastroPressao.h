#ifndef CADASTRO_CADASTROPRESSAO_H
#define CADASTRO_CADASTROPRESSAO_H

#include "../sensor/sensores/pressao.h"
#define MAX_SENSOR_PRESS 10

class CadastroPressao
{
public:
    /**
        @brief Construtor da classe CadastroPressao. Apenas inicializa o vetor
        num_leituras 
    */
    CadastroPressao();

    /**
     * @brief adiciona um sensor de pressao no vetor de sensores
     */
    void adicionarPressao();

    /**
     * @brief exlui um sensor de pressao do vetor de sensores
     */
    void excluirPressao();

    /**
     * @brief consulta um sensor de pressao específico no vetor de sensores
     */
    void consultar();

    /**
     * @brief lista todos os sensores de pressao adicionados no vetor de sensores
     */
    void listar();

private:
    Pressao vPressao[MAX_SENSOR_PRESS];
    bool valido[MAX_SENSOR_PRESS];
    int num_leituras;
};

#endif