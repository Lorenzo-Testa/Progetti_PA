/*
 * Flotta.h
 *
 *  Created on: 3 ott 2023
 *      Author: Testa Lorenzo
 */

#ifndef GESTIONEFLOTTA_FLOTTA_H_
#define GESTIONEFLOTTA_FLOTTA_H_
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include <memory>
#include "Traghetto.h"
using namespace std;

class Flotta {
public:
	Flotta();

	void printInfo();
	string getTOString();
	void addTraghetto(Traghetto t);
	void removeTraghetto(string s);
	void svuotaTraghetto(string s);
	traghetto_ref getTraghetto(string s);
	int getDimensione();

	virtual ~Flotta();

private:
	static int dimensione;
	vector<traghetto_ref> traghetti;
};
#endif /* GESTIONEFLOTTA_FLOTTA_H_ */
