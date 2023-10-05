//============================================================================
// Name        : Progetto_C++_TESTA.cpp
// Author      : Testa Lorenzo 1059562
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Veicoli/Camion.h"
#include "Veicoli/Automobile.h"
#include "Veicoli/Furgone.h"
#include "GestioneFlotta/Parcheggio.h"
#include "GestioneFlotta/Traghetto.h"
#include "GestioneFlotta/Flotta.h"

using namespace std;

int main() {
	Automobile a1 = Automobile("ANTONIO", "AA001AA", 380, 125, "Fiat", "Panda");
	Automobile a2 = Automobile("FRANCESCO", "AA002AA", 480, 150, "Alfa Romeo", "Giulia");
	//a1.printInfo();
	Camion c1 = Camion("GIOVANNI", "CC001CC", 2000, 200, 12000);
	Camion c2 = Camion("ANGELO", "CC002CC", 2000, 200, 15000);
	//c1.printInfo();
	//cout << a1.getMarca() <<endl;
	//cout << c1.getMassa() <<endl;
	//Parcheggio p1 = Parcheggio(a1, c1);
	//p1.addAuto(a2);
	//p1.addCamion(c2);
	//p1.printInfo();
	//cout << p1.getTOString() <<endl;
	//cout << p1.getSizeAuto() <<endl;
	//cout << p1.getSizeCamion() <<endl;

	Traghetto t1 = Traghetto("GRIMALDI", 3, 3, 3);
	//t1.addParcheggio(p1);
	t1.addPasseggero("PIPPO1");
	t1.addPasseggero("PIPPO2");
	t1.addPasseggero("PIPPO3");
	t1.addAuto(a1);
	t1.addCamion(c1);
	//t1.printInfo();
	//cout << t1.getTOString() <<endl;
	//t1.addPasseggero("PIPPO4"); //errore


	Flotta f1 = Flotta();
	f1.addTraghetto(t1);
	f1.printInfo();
	traghetto_ref r1 = f1.getTraghetto("GRIMALDI");
	r1->addAuto(a2);
	f1.printInfo();
	f1.svuotaTraghetto("GRIMALDI");
	f1.printInfo();
	//cout << f1.getDimensione();
	//Traghetto c = f1.getTraghetto("GRIMALDI");
	//c.addAuto(a1);
	//c.printInfo();

	return 0;
}
