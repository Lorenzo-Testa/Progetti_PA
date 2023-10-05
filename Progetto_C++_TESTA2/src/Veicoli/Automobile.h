/*
 * Automobile.h
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_
#include <iostream>
#include <string.h>
using namespace std;

#include "Veicolo.h"

class Automobile: public Veicolo {
public:
	Automobile(string p, string t, int l, int a, string ma, string mo);
	Automobile(const Automobile &other);

	virtual void printInfo();
	virtual const string getMarca();
	virtual const string getModello();
	virtual const string getTOString();

	virtual ~Automobile();

protected:
	string Marca;
	string Modello;
};

#endif /* AUTOMOBILE_H_ */
