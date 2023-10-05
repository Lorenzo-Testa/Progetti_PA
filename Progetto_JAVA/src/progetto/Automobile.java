package progetto;

//Classe Automobile, sottoclasse di Veicolo
public final class Automobile extends Veicolo implements Printable {
	String marca;
	String modello;
	/**
	 * 
	 * @param p PROPRIETARIO
	 * @param t TARGA
	 * @param l LUNGHEZZA
	 * @param a ALTEZZA
	 */
	public Automobile(String p, String t, int l, int a, String ma, String mo) {
		super(p, t, l, a);
		this.marca=ma;
		this.modello=mo;
	}

	public void printInfo() {
		System.out.println("     Dati di " + this.targa + " :");
		System.out.print("     Tipologia: Automobile, ");
		System.out.print("Proprietario: " + this.proprietario);
		System.out.print(", Lunghezza: " + this.lunghezza);
		System.out.print(", Altezza: " + this.altezza);
		System.out.print(", Marca: " + this.marca);
		System.out.print(", Modello: " + this.modello);
		System.out.println("");
	}

	public String getMarca() {
		return marca;
	}

	public String getModello() {
		return modello;
	}

	@Override
	public String toString() {
		return "Automobile [marca=" + marca + ", modello=" + modello + ", proprietario=" + proprietario + ", targa="
				+ targa + ", lunghezza=" + lunghezza + ", altezza=" + altezza + "]";
	}
	

}
