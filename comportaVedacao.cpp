#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "comportaVedacao.h"

using namespace std;

comportaVedacao::comportaVedacao() {
cout << "Construtor da comporta de Vedação." << endl;

}

comportaVedacao::~comportaVedacao(){
    cout<< "Destrudor da comporta de Vedação." << endl;

}

float comportaVedacao::abrir(){
    cout << "Comporta de vedação aberta. Água saindo!!!" << endl;

}

void comportaVedacao::fechar(){
    cout <<"Comporta de vedação fechada. Água subindo..." << endl;
    
}