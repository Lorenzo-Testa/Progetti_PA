/*
 * Camion.cpp
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#include "Camion.h"

Camion::Camion(string p, string t, int l = 1200, int a = 400, int massa = 15000) :
		Veicolo(p, t, l, a) {
	this->Massa = massa;
}

Camion::Camion(const Camion &other) :
		Veicolo(other.Proprietario, other.Targa, other.Lunghezza, other.Altezza) {
	this->Massa = other.Massa;
}

inline void Camion::printInfo() {
	cout << "Targa: " << this->Targa << " Proprietario: " << this->Proprietario
			<< endl << "Lunghezza: " << this->Lunghezza << " Altezza: "
			<< this->Altezza << " Massa: " << this->Massa << endl;
}

inline const int Camion::getMassa() {
	return Massa;
}

const string Camion::getTOString() {
	stringstream streamer;
	streamer << Veicolo::getTOString() << " Massa: " << this->Massa << endl;
	return streamer.str();
}

Camion::~Camion() {
}

