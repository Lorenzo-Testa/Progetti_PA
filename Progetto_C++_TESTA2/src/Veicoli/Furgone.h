/*
 * Furgone.h
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef FURGONE_H_
#define FURGONE_H_
#include <iostream>
#include <string.h>
using namespace std;

#include "Automobile.h"
#include "Camion.h"

class Furgone: public Camion, public virtual Automobile {
public:
	Furgone(string p, string t, int l, int a, string marca, string modello,	int mas);

	void printInfo();
	const string getTOString();

	virtual ~Furgone();
};

#endif /* FURGONE_H_ */
