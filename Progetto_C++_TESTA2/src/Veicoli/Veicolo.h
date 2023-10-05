/*
 * Veicolo.h
 *
 *  Created on: 25 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef VEICOLO_H_
#define VEICOLO_H_
#include <sstream>
#include <iostream>
#include <string.h>
using namespace std;

class Veicolo {
public:
	Veicolo(string p, string t, int l, int a);
	Veicolo(const Veicolo &other);

	virtual void printInfo()=0; //METODO ASTRATTO
	virtual const string getProprietario();
	virtual const string getTarga();
	virtual const int getLunghezza();
	virtual const int getAltezza();
	virtual const string getTOString();

	virtual ~Veicolo();
protected:
	string Proprietario;
	string Targa;
	int Lunghezza;
	int Altezza;
};

#endif /* VEICOLO_H_ */
