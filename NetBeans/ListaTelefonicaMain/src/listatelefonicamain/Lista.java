package listatelefonicamain;

import java.util.Arrays;

public class Lista {
    private final String[] lista = new String[10];
    
    public void mostrarLista() {
        int c=0;
        for (int i=0;i<lista.length;i++) {
            if (lista[i]!=null) {
                c=i+1;
                System.out.println(c+"- "+lista[i]+";");
            }
        }
    }
    
    public void cadastraNumero (String numero) {
        int cont=0;
        for (int i=0;i<lista.length;i++) {
            if (lista[i]==null) {
                cont++;
            }
        }
        lista[10-cont] = numero;
    }
    
    public int buscarNumero (String numero) {
        int num=0;
        for (int i=0;i<lista.length;i++) {
            if (lista[i]!=null && num!=1) {
                if (Integer.parseInt(lista[i])==Integer.parseInt(numero)) {
                    num=1;
                } else {
                    num=0;
                }
            }
        }
        return num;
    }
    
    public void alterarNumero(int num, String numero) {
        lista[num-1]=numero;
    }
}
