package progetto;

//Classe Veicolo, superclasse di Automobile e Furgone
public class Veicolo {
	String proprietario;
	String targa;
	int lunghezza;
	int altezza;

	public Veicolo(String p, String t, int l, int a) {
		this.proprietario = p;
		this.targa = t;
		this.lunghezza = l;
		this.altezza = a;
	}

	public void printInfo() {
		System.out.println("Dati di " + this.targa + " :");
		System.out.print("Tipologia: Veicolo, ");
		System.out.print("Proprietario: " + this.proprietario);
		System.out.print(", Lunghezza: " + this.lunghezza);
		System.out.print(", Altezza: " + this.altezza);
	}

	public String getProprietario() {
		return proprietario;
	}

	public String getTarga() {
		return targa;
	}

	public int getLunghezza() {
		return lunghezza;
	}

	public int getAltezza() {
		return altezza;
	}

	
}
