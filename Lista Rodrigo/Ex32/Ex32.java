class CCelula {
    public Object item;
    public CCelula prox;
}

class CListaSimples {
    private CCelula primeira, ultima;

    public CListaSimples() {}

    public boolean vazia() {
        return ultima == primeira;
    }

    public void insereComeco(Object valorItem) {
        CCelula aux = new CCelula();
        aux.item = valorItem;
        aux.prox = primeira;
        primeira = aux;
        if (ultima == null) {
            ultima = aux;
        }
    }

    public Object removeComeco() throws Exception {
        if (vazia()) {
            throw new Exception("Erro ao remover (vazia)!");
        }
        
        Object resp = primeira.item;
        primeira = primeira.prox;
        if (primeira == null) {
            primeira = ultima = null;
        }
        return resp;
    }

    public void insereFim(Object valorItem) {
        CCelula aux = new CCelula();
        ultima.prox = aux;
        aux.item = valorItem;
        ultima = aux;
    }

    public Object removeFim() throws Exception {
        if (primeira == ultima) {
            throw new Exception("Erro ao remover (vazia)!");
        }

        CCelula i;
        for (i = primeira; i.prox != ultima; i = i.prox);
        Object resp = ultima.item;
        ultima = i;
        i = ultima.prox = null;

        return resp;
    }

    public void imprime() {
        System.out.print("[ ");
        for (CCelula i = primeira; i != null; i = i.prox) {
            System.out.print(i.item + " ");
        }
        System.out.println("] ");
    }

    public boolean contem(Object elemento) {
        boolean resp = false;

        for (CCelula i = primeira.prox; i != null; i = i.prox) {
            if (i.item == elemento) {
                resp = true;
                i = ultima;
            }
        }

        return resp;
    }
}

public class Ex32 {
    public static void main(String args[]) throws Exception {
        CListaSimples lista = new CListaSimples();
        Object x1, x2;

        lista.insereComeco(3);
        lista.insereComeco(2);
        lista.insereComeco(1);
        lista.insereComeco(0);

        System.out.print("Apos insercoes no comeco (3, 2, 1, 0): ");
        lista.imprime();

        x1 = lista.removeComeco();
        x2 = lista.removeComeco();

        System.out.print("Apos remocoes dos elementos "+x1+", "+x2+" : ");
        lista.imprime();

        lista.insereFim(4);
        lista.insereFim(5);
        lista.insereFim(6);
        lista.insereFim(7);

        System.out.print("Apos insercoes no fim (4, 5, 6, 7): ");
        lista.imprime();

        x1 = lista.removeFim();
        x2 = lista.removeFim();

        System.out.print("Apos remocoes dos elementos "+x1+", "+x2+" : ");
        lista.imprime();

        Object elemento = 4;
        if (lista.contem(elemento)) {
            System.out.println("Contem o elemento "+elemento+"!");
        } else {
            System.out.println("Nao contem o elemento "+elemento+"!");
        }

        elemento = 9;
        if (lista.contem(elemento)) {
            System.out.println("Contem o elemento "+elemento+"!");
        } else {
            System.out.println("Nao contem o elemento "+elemento+"!");
        }
    }
}