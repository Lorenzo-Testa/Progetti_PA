package progetto;

import java.util.ArrayList;

public class Flotta implements Printable {
	// ---------SINGLETON---------//
	public static Flotta unica_flotta = null;

	int dimensione_flotta;
	ArrayList<Traghetto> flotta;

	private Flotta() {
		this.flotta = new ArrayList<Traghetto>();
		this.dimensione_flotta = 0;
	}

	public final static Flotta makeFlotta() {
		if (unica_flotta == null) {
			unica_flotta = new Flotta();
		}
		return unica_flotta;
	}

	// ---------METODI---------//
	public static void addTraghetto(Traghetto t) throws NullPointerException {
		if (unica_flotta == null) {
			throw new NullPointerException("Flotta non ancora creata");
		} else {
			unica_flotta.flotta.add(t);
			unica_flotta.dimensione_flotta++;
		}
	}

	public Traghetto getTraghetto(Traghetto t) throws Exception {
		if (unica_flotta == null) {
			throw new NullPointerException("Flotta non ancora creata");
		} else {
			if (unica_flotta.flotta.contains(t)) {
				return unica_flotta.flotta.get(unica_flotta.flotta.indexOf(t));
			} else {
				throw new Exception("Non è possibile rimuovere, il Traghetto non è presente nella flotta");
			}

		}
	}

	public Traghetto getTraghetto(int t) throws Exception {
		if (unica_flotta == null) {
			throw new NullPointerException("Flotta non ancora creata");
		} else {
			if (t <= unica_flotta.flotta.size()) {
				return unica_flotta.flotta.get(t);
			} else {
				throw new Exception("Non è possibile rimuovere, il Traghetto non è presente nella flotta");
			}

		}
	}
	
	public Traghetto getTraghetto(String s) throws Exception {
		if (unica_flotta == null) {
			throw new NullPointerException("Flotta non ancora creata");
		} else {
			for (Traghetto t : unica_flotta.flotta) {
				if(t.nome == s) {
					return t;
				}
			}

		}
		return null;
	}

	public static void removeTraghetto(Traghetto t) throws Exception {
		if (unica_flotta.flotta.isEmpty() || unica_flotta == null) {
			throw new ArrayIndexOutOfBoundsException("Non è possibile rimuovere, flotta vuota o non ancora creata");
		} else {
			if (unica_flotta.flotta.contains(t)) {
				unica_flotta.flotta.remove(unica_flotta.flotta.indexOf(t));
				unica_flotta.dimensione_flotta--;
			} else {
				throw new Exception("Non è possibile rimuovere, il Traghetto non è presente nella flotta");
			}
		}

	}
	
	public void svuotaTraghetto(Traghetto t) throws Exception {
		t.deleteAuto();
		t.deleteFurgoni();
		t.deletePasseggeri();
	}
	
	public void svuotaTraghetto(int i) throws Exception {
		Traghetto t = unica_flotta.getTraghetto(i);
		t.deleteAuto();
		t.deleteFurgoni();
		t.deletePasseggeri();
	}
	
	public static void svuotaTraghetto(String s) throws Exception {
		Traghetto t = unica_flotta.getTraghetto(s);
		t.deleteAuto();
		t.deleteFurgoni();
		t.deletePasseggeri();
	}
	
	public static void addAuto(String s, Automobile ... a) throws Exception {
		Traghetto t = unica_flotta.getTraghetto(s);
		t.addAutomobile(a);
	}
	
	public static void addFurgone(String s, Furgone ... f) throws Exception {
		Traghetto t = unica_flotta.getTraghetto(s);
		t.addFurgone(f);
	}
	
	public static void addPasseggeri(String s, String ... ss) throws Exception {
		Traghetto t = unica_flotta.getTraghetto(s);
		t.addPasseggeri(ss);
	}
	
	public static int getDimensione() {
		return unica_flotta.dimensione_flotta;
	}
	

	// ---------METODI OVERRIDE INTERFACCIA---------//
	@Override
	public void printInfo() {
		System.out.println("Dimensione flotta: " + unica_flotta.dimensione_flotta);
		System.out.println("-------------------");
		System.out.println("Dati traghetti: ");
		for (Traghetto t : unica_flotta.flotta) {
			t.printInfo();
			System.out.println("-------------------");
		}
		System.out.println("-------------------------------------------------------");
	}
}