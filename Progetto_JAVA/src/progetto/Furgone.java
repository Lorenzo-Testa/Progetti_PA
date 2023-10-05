package progetto;

//Classe Furgone, sottoclasse di Veicolo
public class Furgone extends Veicolo implements Printable {
	int massa;

	/**
	 * 
	 * @param p PROPRIETARIO
	 * @param t TARGA
	 * @param l LUNGHEZZA
	 * @param a ALTEZZA
	 * @param m MASSA
	 */
	public Furgone(String p, String t, int l, int a, int m) {
		super(p, t, l, a);
		this.massa = m;
	}

	public void printInfo() {
		System.out.println("     Dati di " + this.targa + " :");
		System.out.print("     Tipologia: Furgone, ");
		System.out.print("Proprietario: " + this.proprietario);
		System.out.print(", Lunghezza: " + this.lunghezza);
		System.out.print(", Altezza: " + this.altezza);
		System.out.print(", Massa: " + this.massa);
		System.out.println("");
	}

	public int getMassa() {
		return massa;
	}

	@Override
	public String toString() {
		return "Furgone [massa=" + massa + ", proprietario=" + proprietario + ", targa=" + targa + ", lunghezza="
				+ lunghezza + ", altezza=" + altezza + "]";
	}
	

}
