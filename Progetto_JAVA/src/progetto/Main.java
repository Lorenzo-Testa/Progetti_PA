package progetto;

public class Main {

	public static void main(String[] args) throws Exception {
		
		Flotta navi = Flotta.makeFlotta();
		
		Traghetto t1 = new Traghetto("TRAGHETTO1",5,5,10); //nome, cap comm, cap auto, cap pass
		Traghetto t2 = new Traghetto("TRAGHETTO2",5,5,2);
		
		t1.addPasseggeri("Pippo", "Pluto"); //aggiunta passeggeri varargs
		
		Automobile a1 = new Automobile("Francesco", "AA001AA", 400, 150, "VW", "GOLF");
		Automobile a2 = new Automobile("Giovanni", "AA002AA", 400, 150, "Alfa Romeo", "Giulia");
		Furgone f1 = new Furgone("Alfredo", "BB999BB", 500, 250, 12000);
		Furgone f2 = new Furgone("Giacomo", "BB998BB", 500, 250, 15000);
				
		t1.addAutomobile(a1);
		t1.addFurgone(f1);
		
		navi.printInfo();
		navi.addTraghetto(t1);
		navi.printInfo();
		navi.addTraghetto(t2);
		navi.addAuto("TRAGHETTO2", a2);
		navi.addFurgone("TRAGHETTO2", f2);
		t2.addPasseggeri("Lo", "Fr"); 
		navi.printInfo();
	}

}
