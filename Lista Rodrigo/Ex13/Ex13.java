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

class CFila {
    private CCelula primeiro;
    private CCelula ultimo;

    public CFila() {
        primeiro = new CCelula();
        ultimo = primeiro;
    }

    public void inserir(Object x) {
        ultimo.prox = new CCelula(x);
        ultimo = ultimo.prox;
    }

    public Object remover() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }

        CCelula tmp = primeiro;
        primeiro = primeiro.prox;
        Object resp = primeiro.elemento;
        tmp.prox = null;
        tmp = null;
        return resp;
    }

    public void mostrar() {
        System.out.print("[ ");

        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            System.out.print(i.elemento + " ");
        }

        System.out.println("] ");
    }

    public Object qtdeOcorrencias(Object Elemento) {
        int resp = 0;

        for (CCelula i = primeiro.prox; i != null; i = i.prox) {
            if (i.elemento == Elemento) {
                resp++;
            }
        }

        return resp;
    }
}

public class Ex13 {
    public static void main(String args[]) throws Exception {
        System.out.println("==== FILA FLEXIVEL ====");
        CFila fila = new CFila();
        Object x1, x2, x3;

        fila.inserir(5);
        fila.inserir(7);
        fila.inserir(5);
        fila.inserir(9);

        System.out.println("Apos insercoes(5, 7, 5, 9): ");
        fila.mostrar();

        int elemento = 4;
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        x1 = fila.remover();
        x2 = fila.remover();

        System.out.println("Apos remocoes (" + x1 + ", " + x2 + "):");
        fila.mostrar();

        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        fila.inserir(3);
        fila.inserir(4);

        System.out.println("Apos insercoes(3, 4): ");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        x1 = fila.remover();
        x2 = fila.remover();
        x3 = fila.remover();

        System.out.println("Apos remocoes (" + x1 + ", " + x2 + ", " + x3 + "):");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        fila.inserir(4);
        fila.inserir(5);

        System.out.println("Apos insercoes(4, 5): ");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        x1 = fila.remover();
        x2 = fila.remover();

        System.out.println("Apos remocoes (" + x1 + ", " + x2 + "):");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        fila.inserir(6);
        fila.inserir(7);

        System.out.println("Apos insercoes(6, 7): ");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));

        x1 = fila.remover();

        System.out.println("Apos remocao (" + x1 + "): ");
        fila.mostrar();
        
        System.out.println("Numero de ocorrencias do elemento "+elemento+": "+fila.qtdeOcorrencias(elemento));
    }
}