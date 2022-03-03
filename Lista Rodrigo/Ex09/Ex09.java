class CCelula {
    public Object elemento;
    public CCelula prox;

    public CCelula() {
        this(0);
    }

    public CCelula(Object elemento) {
        this.elemento = elemento;
        this.prox = null;
    }
}

class CListaDup {
    private CCelula primeiro;
    private CCelula ultimo;

    public CListaDup() {
        primeiro = new CCelula();
        ultimo = primeiro;
    }

    public void inserirInicio(Object x) {
        CCelula tmp = new CCelula(x);
        tmp.prox = primeiro.prox;
        primeiro.prox = tmp;
        if (primeiro == ultimo) {
            ultimo = tmp;
        }
        tmp = null;
    }

    public void inserirFim(Object x) {
        ultimo.prox = new CCelula(x);
        ultimo = ultimo.prox;
    }

    public Object removerInicio() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover (vazia)!");
        }

        CCelula tmp = primeiro;
        primeiro = primeiro.prox;
        Object resp = primeiro.elemento;
        tmp.prox = null;
        tmp = null;
        return resp;
    }

    public Object removerFim() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover (vazia)!");
        }

        CCelula i;
        for (i = primeiro; i.prox != ultimo; i = i.prox)
            ;

        Object resp = ultimo.elemento;
        ultimo = i;
        i = ultimo.prox = null;

        return resp;
    }

    public void inserir(Object x, int pos) throws Exception {

        int tamanho = tamanho();

        if (pos < 0 || pos > tamanho) {
            throw new Exception("Erro ao inserir posicao (" + pos + " / tamanho = " + tamanho + ") invalida!");
        } else if (pos == 0) {
            inserirInicio(x);
        } else if (pos == tamanho) {
            inserirFim(x);
        } else {
            CCelula i = primeiro;
            for (int j = 0; j < pos; j++, i = i.prox)
                ;

            CCelula tmp = new CCelula(x);
            tmp.prox = i.prox;
            i.prox = tmp;
            tmp = i = null;
        }
    }

    public Object remover(int pos) throws Exception {
        Object resp;
        int tamanho = tamanho();

        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover (vazia)!");

        } else if (pos < 0 || pos >= tamanho) {
            throw new Exception("Erro ao remover (posicao " + pos + " / " + tamanho + " invalida!");
        } else if (pos == 0) {
            resp = removerInicio();
        } else if (pos == tamanho - 1) {
            resp = removerFim();
        } else {
            CCelula i = primeiro;
            for (int j = 0; j < pos; j++, i = i.prox)
                ;

            CCelula tmp = i.prox;
            resp = tmp.elemento;
            i.prox = tmp.prox;
            tmp.prox = null;
            i = tmp = null;
        }

        return resp;
    }

    public void mostrar() {
        System.out.print("[ ");
        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            System.out.print(i.elemento + " ");
        }
        System.out.println("] ");
    }

    public boolean pesquisar(Object x) {
        boolean resp = false;
        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            if (i.elemento == x) {
                resp = true;
                i = ultimo;
            }
        }
        return resp;
    }

    public int tamanho() {
        int tamanho = 0;
        for (CCelula i = primeiro; i != ultimo; i = i.prox, tamanho++)
            ;
        return tamanho;
    }

    public CListaDup concatenaLD(CListaDup L1, CListaDup L2) {
        CListaDup AmaisB = new CListaDup();
        
        for (CCelula i = L1.primeiro.prox; i != null; i = i.prox) {
            AmaisB.inserirFim(i.elemento);
        }

        for (CCelula i = L2.primeiro.prox; i != null; i = i.prox) {
            AmaisB.inserirFim(i.elemento);
        }

        return AmaisB;
    }

    public int ultimaOcorrenciaDe(Object Elemento) {
        int resp = 0, cont = 1;
        
        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            if (i.elemento == Elemento) {
                resp = cont;
            }
            cont++;
        }

        return resp;
    }
}

public class Ex09 {
    public static void main(String[] args) {
        System.out.println("=== LISTA FLEXIVEL SIMPLESMENTE ENCADEADA ===");
        CListaDup A = new CListaDup();
        CListaDup B = new CListaDup();
        CListaDup AmaisB = new CListaDup();

        A.inserirFim(3);
        A.inserirFim(2);
        A.inserirFim(4);
        A.inserirFim(45);
        A.inserirFim(4);
        A.inserirFim(74);

        System.out.print("Apos insercoes: A = ");
        A.mostrar();

        int elemento=4;
        if (!A.pesquisar(elemento)) {
            System.out.println("ELEMENTO NAO ENCONTRADO!");
        } else {
            System.out.println("Ultima ocorrencia do elemento "+elemento+" = posicao [" + A.ultimaOcorrenciaDe(elemento)+"]");
        }

        B.inserirFim(1);
        B.inserirFim(2);
        B.inserirFim(3);
        B.inserirFim(2);
        B.inserirFim(5);

        System.out.print("Apos insercoes: B = ");
        B.mostrar();

        elemento=2;
        if (!B.pesquisar(elemento)) {
            System.out.println("ELEMENTO NAO ENCONTRADO!");
        } else {
            System.out.println("Ultima ocorrencia do elemento "+elemento+" = posicao [" + B.ultimaOcorrenciaDe(elemento)+"]");
        }

        AmaisB = AmaisB.concatenaLD(A, B);

        System.out.print("Apos concatenacao: AmaisB = ");
        AmaisB.mostrar();

        elemento=2;
        if (!AmaisB.pesquisar(elemento)) {
            System.out.println("ELEMENTO NAO ENCONTRADO!");
        } else {
            System.out.println("Ultima ocorrencia do elemento "+elemento+" = posicao [" + AmaisB.ultimaOcorrenciaDe(elemento)+"]");
        }

        elemento=4;
        if (!AmaisB.pesquisar(elemento)) {
            System.out.println("ELEMENTO NAO ENCONTRADO!");
        } else {
            System.out.println("Ultima ocorrencia do elemento "+elemento+" = posicao [" + AmaisB.ultimaOcorrenciaDe(elemento)+"]");
        }
    }
}