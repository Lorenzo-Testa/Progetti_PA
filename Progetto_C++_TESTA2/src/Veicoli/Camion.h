/*
 * Camion.h
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef CAMION_H_
#define CAMION_H_
#include <iostream>
#include <string.h>
using namespace std;

#include "Veicolo.h"

class Camion: public Veicolo {
public:
	Camion(string p, string t, int l, int a, int mas);
	Camion(const Camion &other);

	virtual void printInfo();
	virtual const int getMassa();
	virtual const string getTOString();

	virtual ~Camion();

protected:
	int Massa;
};

#endif /* CAMION_H_ */
