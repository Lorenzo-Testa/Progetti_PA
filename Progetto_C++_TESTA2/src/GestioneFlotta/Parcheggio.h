/*
 * Parcheggio.h
 *
 *  Created on: 26 set 2023
 *      Author: Testa Lorenzo
 */

#ifndef GESTIONEFLOTTA_PARCHEGGIO_H_
#define GESTIONEFLOTTA_PARCHEGGIO_H_

#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <iterator>
#include <memory>
#include "../Veicoli/Camion.h"
#include "../Veicoli/Automobile.h"
#include "../Veicoli/Furgone.h"

using namespace std;

class Parcheggio {
public:
	Parcheggio();//creazione vuoto
	Parcheggio(Automobile a);//creazione + inserimento
	Parcheggio(Camion c);//creazione + inserimento
	Parcheggio(Automobile a, Camion c);//creazione + inserimento

	void printInfo();
	const string getTOString();
	const int getSizeAuto();
	const int getSizeCamion();
	void addAuto(Automobile a);
	void addCamion(Camion c);
	void svuotaParcheggio();

	virtual ~Parcheggio();

private:
	vector <Automobile> parkauto;
	vector <Camion> parkcomm;
};

typedef shared_ptr<Parcheggio> parcheggio_ref;
#endif /* GESTIONEFLOTTA_PARCHEGGIO_H_ */
