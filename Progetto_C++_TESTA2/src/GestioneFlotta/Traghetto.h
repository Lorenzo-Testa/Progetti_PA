/*
 * Traghetto.h
 *
 *  Created on: 26 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef GESTIONEFLOTTA_TRAGHETTO_H_
#define GESTIONEFLOTTA_TRAGHETTO_H_
#include "Parcheggio.h"
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include <memory>
using namespace std;

class Traghetto {
public:
	string nome;

	//Traghetto(string n, int ca, int cc, int cp, vector<string> pass, Parcheggio p);
	Traghetto(string n, int ca, int cc, int cp, vector<string> pass);
	Traghetto(string n, int ca, int cc, int cp);

	void printInfo();
	const string getTOString();
	//void addParcheggio(Parcheggio p);
	void addAuto(Automobile a);
	void addCamion(Camion c);
	void addPasseggero(string p);
	void svuotaTraghetto();
	void svuotaParcheggio();

	virtual ~Traghetto();

private:
	int capienzaauto;
	int capienzacamion;
	int capienzapasseggeri;
	vector<string> passeggeri;
	parcheggio_ref parcheggio;
	//shared_ptr<Parcheggio> parcheggio;
	//Parcheggio parcheggio;
};

typedef shared_ptr<Traghetto> traghetto_ref;

#endif /* GESTIONEFLOTTA_TRAGHETTO_H_ */
