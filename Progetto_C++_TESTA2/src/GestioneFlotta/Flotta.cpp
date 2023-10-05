/*
 * Flotta.cpp
 *
 *  Created on: 3 ott 2023
 *      Author: Testa Lorenzo
 */

#include "Flotta.h"
#include "Traghetto.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include <memory>
using namespace std;

int Flotta::dimensione = 0;

Flotta::Flotta() {
}

void Flotta::printInfo() {
	stringstream streamer;
	streamer << "FLOTTA" << endl;
	for (vector<traghetto_ref>::iterator i = this->traghetti.begin(); i != this->traghetti.end(); ++i) {
		streamer << i->get()->getTOString();
	}
	cout << streamer.str();
}

string Flotta::getTOString() {
	stringstream streamer;
	streamer << "FLOTTA" << endl;
	for (vector<traghetto_ref>::iterator i = this->traghetti.begin(); i != this->traghetti.end(); ++i) {
		streamer << i->get()->getTOString();
	}
	return streamer.str();
}

void Flotta::addTraghetto(Traghetto t) {
	Flotta::dimensione++;
	traghetto_ref p = make_shared<Traghetto>(t);
	this->traghetti.push_back(p);
}

void Flotta::removeTraghetto(string s) {
	Flotta::dimensione--;
	if (Flotta::dimensione >= 0) {
		int index = 0;
		int find = -1;
		for (vector<traghetto_ref>::iterator i = this->traghetti.begin();
				i != this->traghetti.end(); ++i) {
			if (s == i->get()->nome) {
				find = index;
			}
			index++;
		}
		if (find >= 0) {
			this->traghetti.erase(this->traghetti.begin() + find);
		} else {
			cout << "Traghetto non trovato, impossibile eliminare" << endl;
		}
	} else {
		cerr << "Impossibile rimuovere, flotta vuota";
	}
}

traghetto_ref Flotta::getTraghetto(string s) {
	int index = 0;
	int find = -1;
	for (vector<traghetto_ref>::iterator i = this->traghetti.begin();
			i != this->traghetti.end(); ++i) {
		if (s == i->get()->nome) {
			find = index;
		}
		index++;
	}
	if (find >= 0) {

		traghetto_ref p = this->traghetti.at(find);
		return p;
	} else {
		cout << "Traghetto non trovato, impossibile eliminare" << endl;
		//return NULL;
	}
}

void Flotta::svuotaTraghetto(string s) {
	int index = 0;
	int find = -1;
	for (vector<traghetto_ref>::iterator i = this->traghetti.begin();
			i != this->traghetti.end(); ++i) {
		if (s == i->get()->nome) {
			find = index;
		}
		index++;
	}
	if (find >= 0) {

		this->traghetti.at(find)->svuotaTraghetto();
	} else {
		cout << "Traghetto non trovato, impossibile eliminare" << endl;
		//return NULL;
	}
}

int Flotta::getDimensione() {
	return Flotta::dimensione;
}
Flotta::~Flotta() {
}

