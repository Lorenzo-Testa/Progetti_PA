package progetto;

import java.util.ArrayList;

public class Parcheggio implements Printable {
	ArrayList<Automobile> parkauto;
	ArrayList<Furgone> parkcomm;

	public Parcheggio(int dimauto, int dimcomm) {
		this.parkcomm = new ArrayList<Furgone>(dimcomm);
		this.parkauto = new ArrayList<Automobile>(dimauto);
	}

	public <T extends Veicolo> void add(T a) {
		if (a instanceof Automobile) {
			this.parkauto.add((Automobile) a);
		} else {
			this.parkcomm.add((Furgone) a);
		}
	}

	public <T extends Veicolo> void remove(T a) {
		if (a instanceof Automobile) {
			this.parkauto.remove((Automobile) a);
		} else {
			this.parkcomm.remove((Furgone) a);
		}
	}

	public void printInfo() {
		for (Automobile a : this.parkauto) {
			a.printInfo();
		}
		for (Furgone f : this.parkcomm) {
			f.printInfo();
		}
	}

}
