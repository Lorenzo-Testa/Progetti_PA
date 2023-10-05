/*
 * Automobile.cpp
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#include "Automobile.h"
#include <sstream>
#include <iostream>
#include <string.h>
using namespace std;

Automobile::Automobile(string p, string t, int l = 500, int a = 200, string ma =
		"", string mo = "") :
		Veicolo(p, t, l, a) {
	Marca = ma;
	Modello = mo;
}

Automobile::~Automobile() {
}

Automobile::Automobile(const Automobile &other) :
		Veicolo(other.Proprietario, other.Targa, other.Lunghezza, other.Altezza) {
	this->Marca = other.Marca;
	this->Modello = other.Modello;
}

inline void Automobile::printInfo() {
	cout << "Targa: " << this->Targa << " Proprietario: " << this->Proprietario
			<< endl << "Marca: " << this->Marca << " Modello: " << this->Modello
			<< endl << "Lunghezza: " << this->Lunghezza << " Altezza: "
			<< this->Altezza << endl;
}

inline const string Automobile::getMarca() {
	return Marca;
}
inline const string Automobile::getModello() {
	return Modello;
}

const string Automobile::getTOString() {
	stringstream streamer;
	streamer << Veicolo::getTOString() << " Marca: " << this->Marca
			<< " Modello: " << this->Modello << endl;
	return streamer.str();
}
