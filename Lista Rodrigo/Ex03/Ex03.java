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

class CLista {
    private CCelula primeiro;
    private CCelula ultimo;

    public CLista() {
        primeiro = new CCelula();
        ultimo = primeiro;
    }

    public int removerInicio() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover (vazia)!");
        }

        CCelula tmp = primeiro;
        primeiro = primeiro.prox;
        int resp = primeiro.elemento;
        tmp.prox = null;
        tmp = null;
        return resp;
    }

    public int removerFim() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover (vazia)!");
        }

        CCelula i;
        for (i = primeiro; i.prox != ultimo; i = i.prox)
            ;

        int resp = ultimo.elemento;
        ultimo = i;
        i = ultimo.prox = null;

        return resp;
    }

    public int remover(int pos) throws Exception {
        int resp;
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

    public boolean pesquisar(int x) {
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
        for (CCelula i = primeiro; i != ultimo; i = i.prox, tamanho++);
        return tamanho;
    }

    public void insereOrdenado(int elementoAInserir) {
        int resp=0;
        boolean find = false;

        if (tamanho() == 0) {
            ultimo.prox = new CCelula(elementoAInserir);
            ultimo = ultimo.prox;
        } else {
            for (CCelula i = primeiro.prox; i != null; i = i.prox) {
                if (i.elemento > elementoAInserir) {
                    find = true;
                }
                if (find) {
                    resp = i.elemento;
                    i.elemento = elementoAInserir;
                    elementoAInserir = resp;
                }
            }
            ultimo.prox = new CCelula(elementoAInserir);
            ultimo = ultimo.prox;
        }
    }
}

public class Ex03 {
    public static void main(String[] args) {
        try {
            System.out.println("=== LISTA FLEXIVEL SIMPLESMENTE ENCADEADA ===");
            CLista lista = new CLista();

            lista.insereOrdenado(1);
            lista.insereOrdenado(0);
            lista.insereOrdenado(4);
            lista.insereOrdenado(5);
            lista.insereOrdenado(2);
            lista.insereOrdenado(3);
            lista.insereOrdenado(6);
            lista.insereOrdenado(-1);
            lista.insereOrdenado(7);
            lista.insereOrdenado(8);
            
            System.out.print("Apos insercoes: ");
            lista.mostrar();

            int x1 = lista.remover(3);
            int x2 = lista.remover(2);
            int x3 = lista.removerFim();
            int x4 = lista.removerInicio();
            int x5 = lista.remover(0);
            int x6 = lista.remover(4);

            System.out.print("Apos remocoes (" + x1 + ", " + x2 + ", " + x3 + ", " + x4 + ", " + x5 + ", " + x6 + "): ");
            lista.mostrar();
        } catch (Exception erro) {
            System.out.println(erro.getMessage());
        }
    }
}