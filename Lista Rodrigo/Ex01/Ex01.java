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

class CLista {
    private CCelula primeiro;
    private CCelula ultimo;

    public CLista() {
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

    public void insereAntesDe(Object elementoAInserir, Object Elemento) {
        Object resp=0;
        boolean find = false;

        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            if ((i.elemento).equals(Elemento)) {
                find = true;
            }
            if (find) {
                resp = i.elemento;
                i.elemento = elementoAInserir;
                elementoAInserir = resp;
            }
        }

        if (find) {
            inserirFim(elementoAInserir);
        } else {
            System.out.println("Elemento "+Elemento+" nao encontrado, falha ao adicionar elemento "+elementoAInserir+" !");
        }
    }
}

public class Ex01 {
    public static void main(String[] args) {
        try {
            System.out.println("=== LISTA FLEXIVEL SIMPLESMENTE ENCADEADA ===");
            CLista lista = new CLista();

            lista.inserirInicio(1);
            lista.inserirInicio(0);
            lista.inserirFim(4);
            lista.inserirFim(5);
            lista.inserir(2, 2);
            lista.inserir(3, 3);
            lista.inserir(6, 6);
            lista.inserir(-1, 0);
            lista.inserirFim(7);
            lista.inserirFim(8);

            System.out.print("Apos insercoes: ");
            lista.mostrar();

            Object x1 = lista.remover(3);
            Object x2 = lista.remover(2);
            Object x3 = lista.removerFim();
            Object x4 = lista.removerInicio();
            Object x5 = lista.remover(0);
            Object x6 = lista.remover(4);
            lista.inserirFim(9);

            System.out.print("Apos remocoes (" + x1 + ", " + x2 + ", " + x3 + ", " + x4 + ", " + x5 + ", " + x6 + "): ");
            lista.mostrar();

            lista.insereAntesDe(100, 5);
            lista.insereAntesDe(12, 6);
            lista.insereAntesDe(7, 100);
            lista.insereAntesDe(156, 101);
            System.out.print("Apos insercoes: ");
            lista.mostrar();
        } catch (Exception erro) {
            System.out.println(erro.getMessage());
        }
    }
}