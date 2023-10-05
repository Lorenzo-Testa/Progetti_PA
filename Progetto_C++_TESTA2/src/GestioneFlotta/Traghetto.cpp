/*
 * Traghetto.cpp
 *
 *  Created on: 26 set 2023
 *      Author: Testa Lorenzo
 */

#include "Parcheggio.h"
#include "Traghetto.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <memory>

using namespace std;

//Traghetto::Traghetto(string n, int ca, int cc, int cp, vector<string> pass, Parcheggio p) :
//		nome(n), capienzaauto(ca), capienzacamion(cc), capienzapasseggeri(cp) {
//	try {
//		if (ca > 0 || cc > 0) {
//			this->parcheggio = p;
//			//possibile nuovo check: size del parcheggio < della capienza
//		} else {
//			throw invalid_argument(
//					"Impossibile inserire un parcheggio se posti disponibili = 0");
//		}
//		if (cp > 0) {
//			this->passeggeri = pass;
//		} else {
//			throw invalid_argument(
//					"Impossibile inserire un parcheggio se posti disponibili = 0");
//		}
//	} catch (invalid_argument &e) {
//		cerr << e.what() << endl;
//	}
//}

Traghetto::Traghetto(string n, int ca, int cc, int cp, vector<string> pass) :
		nome(n), capienzaauto(ca), capienzacamion(cc), capienzapasseggeri(cp) {
	try {
		if (cp > 0) {
			this->passeggeri = pass;
		} else {
			throw invalid_argument(
					"Impossibile inserire un passeggero se posti disponibili = 0");
		}
	} catch (invalid_argument &e) {
		cerr << e.what() << endl;
	}
	this->parcheggio = make_unique<Parcheggio>();
}

Traghetto::Traghetto(string n, int ca, int cc, int cp) :
		nome(n), capienzaauto(ca), capienzacamion(cc), capienzapasseggeri(cp) {
	try {
		if (cp > 0) {
			vector<string> pass;
			this->passeggeri = pass;
		} else {
			throw invalid_argument(
					"Impossibile inserire un passeggero se posti disponibili = 0");
		}
	} catch (invalid_argument &e) {
		cerr << e.what() << endl;
	}
	this->parcheggio = make_unique<Parcheggio>();
}


void Traghetto::printInfo() {
	stringstream streamer;
	streamer << "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-" << endl;
	streamer << "NOME TRAGHETTO: " << this->nome << endl;
	streamer << "----------PASSEGGERI----------" << endl;
	for (vector<string>::iterator i = this->passeggeri.begin();
			i != this->passeggeri.end(); ++i) {
		streamer << *i << endl;
	}
	streamer << "----------PARCHEGGIO----------" << endl;
	streamer << parcheggio->getTOString() << endl;
	cout << streamer.str();
}

const string Traghetto::getTOString() {
	stringstream streamer;
	streamer << "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-" << endl;
	streamer << "NOME TRAGHETTO: " << this->nome << endl;
	streamer << "----------PASSEGGERI----------" << endl;
	for (vector<string>::iterator i = this->passeggeri.begin();
			i != this->passeggeri.end(); ++i) {
		streamer << *i << endl;
	}
	streamer << "----------PARCHEGGIO----------" << endl;
	streamer << parcheggio->getTOString() << endl;
	return streamer.str();
}

//void Traghetto::addParcheggio(Parcheggio p) {
//		this->parcheggio = p;
//}

void Traghetto::addAuto(Automobile a) {
	if (this->parcheggio->getSizeAuto() < this->capienzaauto) {
		this->parcheggio->addAuto(a);
	} else {
		cerr << "Impossibile inserire, parcheggio pieno" << endl;
	}
}

void Traghetto::addCamion(Camion c) {
	if (this->parcheggio->getSizeCamion() < this->capienzacamion) {
		this->parcheggio->addCamion(c);
	} else {
		cerr << "Impossibile inserire, parcheggio pieno" << endl;
	}
}

void Traghetto::addPasseggero(string p) {
	if (this->passeggeri.size() < this->capienzapasseggeri) {
		this->passeggeri.push_back(p);
	} else {
		cerr << "Impossibile inserire, passeggeri pieni" << endl;
	}
}

void Traghetto::svuotaTraghetto(){
	this->passeggeri.clear();
	this->parcheggio->svuotaParcheggio();
	cout << "Traghetto svuotato" <<endl;
}

void Traghetto::svuotaParcheggio(){
	this->parcheggio->svuotaParcheggio();
	cout << "Parcheggio svuotato" <<endl;
}

Traghetto::~Traghetto() {
}
