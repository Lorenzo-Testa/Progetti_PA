package progetto;

import java.util.ArrayList;

public final class Traghetto implements Printable {
	private int capienza_comm;
	private int capienza_auto;
	private int capienza_persone;
	String nome;
	ArrayList<String> passeggeri;
	Parcheggio park;

	public Traghetto(String nome, int cc, int ca, int cp) {
		this.nome = nome;
		this.capienza_comm = cc;
		this.capienza_auto = ca;
		this.capienza_persone = cp;
		this.passeggeri = new ArrayList<String>(cp); // si suppone che la capienza dei passeggeri sia sempre >0
		if (cc > 0 || ca > 0) {
			this.park = new Parcheggio(ca, cc);
		}
	}

	public String getNome() {
		return nome;
	}

	public int getCapienza_comm() {
		return capienza_comm;
	}

	public int getCapienza_auto() {
		return capienza_auto;
	}

	public int getCapienza_persone() {
		return capienza_persone;
	}

	public void addPasseggeri(String... strings) throws Exception {
		for (String p : strings) {
			if(this.passeggeri.size()<=this.capienza_persone) {
				this.passeggeri.add(p);
			}
			else {
				throw new Exception("Troppi passeggeri");
			}
		}
	}

	public void printPasseggeri() {
		int i = 0;
		for (String s : this.passeggeri) {
			i++;
			System.out.println("     Passeggero " + i + " : " + s);
		}
	}

	public void deletePasseggeri() {
		this.passeggeri.removeAll(passeggeri);
	}
	

	public void addAutomobile(Automobile... a) throws Exception {
		for (Automobile aa : a) {
			if(this.park.parkauto.size()<=this.capienza_auto) {
				this.park.add(aa);
			}
			else {
				throw new Exception("Troppe auto");
			}
		}
	}

	public void deleteAuto() {
		this.park.parkauto.removeAll(this.park.parkauto);
	}
	
	public void addFurgone(Furgone... f) throws Exception {
		for (Furgone ff : f) {
			if(this.park.parkcomm.size()<=this.capienza_comm) {
				this.park.add(ff);
			}
			else {
				throw new Exception("Troppi furgoni");
			}
		}
	}
	
	public void deleteFurgoni() {
		this.park.parkcomm.removeAll(this.park.parkcomm);
	}

	@Override
	public void printInfo() {
		System.out.println("   Nome nave: " + this.nome);
		System.out.println("   Passeggeri: ");
		this.printPasseggeri();
		System.out.println("   Veicoli: ");
		this.park.printInfo();

	}
}
