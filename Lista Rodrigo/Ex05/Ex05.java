class CCelula {
	public int elemento;
	public CCelula prox;
    
	public CCelula() {
		this(0);
	}
    
	public CCelula(int elemento) {
      this.elemento = elemento;
      this.prox = null;
	}
}

class CFila {
	private CCelula primeiro;
	private CCelula ultimo;
    
	public CFila() {
		primeiro = new CCelula();
		ultimo = primeiro;
	}
    
	public void inserir(int x) {
		ultimo.prox = new CCelula(x);
		ultimo = ultimo.prox;
	}
    
	public int remover() throws Exception {
		if (primeiro == ultimo) {
			throw new Exception("Erro ao remover!");
		}

      CCelula tmp = primeiro;
		primeiro = primeiro.prox;
		int resp = primeiro.elemento;
      tmp.prox = null;
      tmp = null;
		return resp;
	}
    
	public void mostrar() {
		System.out.print("[ ");
		
		for(CCelula i = primeiro.prox; i != null; i = i.prox) {
			System.out.print(i.elemento + " ");
		}
		
		System.out.println("] ");
	}

	public CFila concatenaLD(CFila L1, CFila L2) {
        CFila AmaisB = new CFila();
        
        for (CCelula i = L1.primeiro.prox; i != null; i = i.prox) {
            AmaisB.inserir(i.elemento);
        }

        for (CCelula i = L2.primeiro.prox; i != null; i = i.prox) {
            AmaisB.inserir(i.elemento);
        }

        return AmaisB;
    }
}

public class Ex05 {
	public static void main(String args[]) {
		System.out.println("=== FILA FLEXIVEL SIMPLESMENTE ENCADEADA ===");
		CFila A = new CFila();
		CFila B = new CFila();
		CFila AmaisB = new CFila();

		A.inserir(20);
		A.inserir(33);
		A.inserir(2);
		A.inserir(4);

		System.out.print("Apos insercoes: A = ");
		A.mostrar();

		B.inserir(1);
		B.inserir(2);
		B.inserir(3);
		B.inserir(4);
		B.inserir(5);

		System.out.print("Apos insercoes: B = ");
		B.mostrar();

		AmaisB = AmaisB.concatenaLD(A, B);

		System.out.print("Apos concatenacao: AmaisB = ");
		AmaisB.mostrar();
	}
}
