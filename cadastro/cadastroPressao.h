#ifndef CADASTRO_CADASTROPRESSAO_H
#define CADASTRO_CADASTROPRESSAO_H

#include "cadastro.h"
#include "../sensor/sensores/pressao.h"

class CadastroPressao : public Cadastro
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
    void adicionar();

    /**
     * @brief exlui um sensor de pressao do vetor de sensores
     */
    void excluir();

    /**
     * @brief consulta um sensor de pressao específico no vetor de sensores
     */
    void consultar();

    /**
     * @brief lista todos os sensores de pressao adicionados no vetor de sensores
     */
    void listar();

private:
    Pressao vPressao[MAX_SENSOR];
    bool valido[MAX_SENSOR];
    int num_leituras;
};

#endif