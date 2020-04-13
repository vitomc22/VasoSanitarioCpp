#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "valvulaAlientacao.h"

using namespace std;

valvulaAlimentacao::valvulaAlimentacao(){
    cout <<"Construtor da valvula de alimentação" << endl;

}

valvulaAlimentacao::~valvulaAlimentacao(){
    cout <<"Destrutor da valvula de alimentação" << endl;

}

float valvulaAlimentacao::getCapacidadeVazao(){
    return this->capacidadeVazao;
}

