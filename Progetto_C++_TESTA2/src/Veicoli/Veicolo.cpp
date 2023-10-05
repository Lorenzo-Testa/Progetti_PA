/*
 * Veicolo.cpp
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#include "Veicolo.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
using namespace std;


Veicolo::Veicolo(string p, string t, int l, int a) {
	this->Proprietario = p;
	this->Targa = t;
	this->Lunghezza = l;
	this->Altezza = a;
}

Veicolo::Veicolo(const Veicolo &other) {
	Proprietario = other.Proprietario;
	Targa = other.Targa;
	Lunghezza = other.Lunghezza;
	Altezza = other.Altezza;
}

inline const string Veicolo::getProprietario() {
	return Proprietario;
}
inline const string Veicolo::getTarga() {
	return Targa;
}
inline const int Veicolo::getLunghezza() {
	return Lunghezza;
}
inline const int Veicolo::getAltezza() {
	return Altezza;
}

const string Veicolo::getTOString() {
	stringstream streamer;
	streamer << "Dati di: Targa: " << this->Targa << " Proprietario: "
			<< this->Proprietario << endl << " Lunghezza: " << this->Lunghezza
			<< " Altezza: " << this->Altezza << endl;
	return streamer.str();
}

Veicolo::~Veicolo() {
}
