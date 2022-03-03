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
class CPilha {
	private CCelula topo;
    
	public CPilha() {
		topo = null;
	}
    
	public void inserir(int x) {
		CCelula tmp = new CCelula(x);
		tmp.prox = topo;
		topo = tmp;
		tmp = null;
	}
    
	public int remover() throws Exception {
		if (topo == null) {
			throw new Exception("Erro ao remover!");
		}
		int resp = topo.elemento;
		CCelula tmp = topo;
		topo = topo.prox;
		tmp.prox = null;
		tmp = null;
		return resp;
	}
    
	public void mostrar() {
		System.out.print("[ ");
		for (CCelula i = topo; i != null; i = i.prox) {
			System.out.print(i.elemento + " ");
		}
		System.out.println("] ");
	}

	public int getSoma() {
		return getSoma(topo);
	}

	private int getSoma(CCelula i) {
		int resp = 0;
		if (i != null) {
			resp += i.elemento + getSoma(i.prox);
		}
		return resp;
	}

	public int getMax() {
		int max = topo.elemento;
		for (CCelula i = topo.prox; i != null; i = i.prox) {
			if (i.elemento > max)
				max = i.elemento;
		}
		return max;
	}

	public void mostraPilha() {
		mostraPilha(topo);
	}

	private void mostraPilha(CCelula i) {
		if (i != null) {
			mostraPilha(i.prox);
			System.out.println("" + i.elemento);
		}
	}

	public CPilha concatenaLD(CPilha L1, CPilha L2) {
        CPilha AmaisB = new CPilha();
        
        for (CCelula i = L1.topo; i != null; i = i.prox) {
            AmaisB.inserir(i.elemento);
        }

        for (CCelula i = L2.topo; i != null; i = i.prox) {
            AmaisB.inserir(i.elemento);
        }

        return AmaisB;
    }

}

public class Ex06 {
    public static void main(String args[]) {
		System.out.println("=== PILHA FLEXIVEL SIMPLESMENTE ENCADEADA ===");
		CPilha A = new CPilha();
		CPilha B = new CPilha();
		CPilha AmaisB = new CPilha();

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
