#ifndef CADASTRO_CADASTROTEMPERATURA_H
#define CADASTRO_CADASTROTEMPERATURA_H

#include "cadastro.h"
#include "../sensor/sensores/temperatura.h"

class CadastroTemperatura : public Cadastro
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
    void adicionar();

    /**
     * @brief exlui um sensor de temperatura do vetor de sensores
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
    Temperatura vTemperatura[MAX_SENSOR];
    bool valido[MAX_SENSOR];
    int num_leituras;
};

#endif