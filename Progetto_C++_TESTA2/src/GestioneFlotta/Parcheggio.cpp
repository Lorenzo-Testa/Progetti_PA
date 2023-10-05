/*
 * Parcheggio.cpp
 *
 *  Created on: 26 set 2023
 *      Author: Testa Lorenzo
 */

#include "Parcheggio.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include "../Veicoli/Camion.h"
#include "../Veicoli/Automobile.h"
#include "../Veicoli/Furgone.h"


Parcheggio::Parcheggio() {
}

Parcheggio::Parcheggio(Automobile a) {
	this->parkauto.push_back(a);
}

Parcheggio::Parcheggio(Camion c) {
	this->parkcomm.push_back(c);
}

Parcheggio::Parcheggio(Automobile a, Camion c) {
	this->parkauto.push_back(a);
	this->parkcomm.push_back(c);
}


void Parcheggio::printInfo() {
	cout << "-----AUTOMOBILI-----" << endl;
	for (vector<Automobile>::iterator i = this->parkauto.begin();
			i != this->parkauto.end(); ++i) {
		i->printInfo();
	}
	cout << "-----CAMION-----" << endl;
	for (vector<Camion>::iterator i = this->parkcomm.begin();
			i != this->parkcomm.end(); ++i) {
		i->printInfo();
	}
}

const string Parcheggio::getTOString() {
	stringstream streamer;
	streamer << "-----AUTOMOBILI-----" << endl;
	for (vector<Automobile>::iterator i = this->parkauto.begin();
			i != this->parkauto.end(); ++i) {
		streamer << i->getTOString() << endl;
	}
	streamer << "-----CAMION-----" << endl;
	for (vector<Camion>::iterator i = this->parkcomm.begin();
			i != this->parkcomm.end(); ++i) {
		streamer << i->getTOString() << endl;
	}
	return streamer.str();
}


const int Parcheggio::getSizeAuto() {
	return this->parkauto.size();
}

const int Parcheggio::getSizeCamion() {
	return this->parkcomm.size();
}

void Parcheggio::addAuto(Automobile a) {
	this->parkauto.push_back(a);
}

void Parcheggio::addCamion(Camion c) {
	this->parkcomm.push_back(c);
}

void Parcheggio::svuotaParcheggio(){
	this->parkauto.clear();
	this->parkcomm.clear();
}

Parcheggio::~Parcheggio() {
}
