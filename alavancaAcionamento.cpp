#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "alavancadeacionamento.h"


using namespace std;


alavancaAcionamento::alavancaAcionamento(){
    cout << "Construtor da alavanca de acionamento." << endl;
    
    }

alavancaAcionamento::~alavancaAcionamento(){
    cout << "Destrutor da alavanca de acionamento." << endl;
}

void alavancaAcionamento::acionar(){
    cout << "Alavanca acionada!" << endl;
    }



