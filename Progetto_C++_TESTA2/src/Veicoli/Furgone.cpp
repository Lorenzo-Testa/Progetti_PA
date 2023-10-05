/*
 * Furgone.cpp
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */
#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

#include "Furgone.h"
#include "Automobile.h"
#include "Camion.h"

Furgone::Furgone(string p, string t, int l, int a, string marca, string modello, int mas) :
		Automobile(p, t, l, a, marca, modello), Camion(p, t, l, a, mas) {
}

void Furgone::printInfo() {
//	cout << "Targa: " << this->getTarga() << " Proprietario: " << this->Proprietario
//			<< endl << "Marca: " << this->Marca << " Modello: " << this->Modello
//			<< endl << "Lunghezza: " << this->Lunghezza << " Altezza: "
//			<< this->Altezza << endl;
}

const string Furgone::getTOString() {
	stringstream streamer;
//	streamer << Veicolo::getString() << " Marca: " << this->Marca
//			<< " Modello: " << this->Modello << endl;
	streamer << "PROVA" << endl;
	return streamer.str();
}

Furgone::~Furgone() {
}

