import java.util.Scanner;

class CCelulaDicionario {
    public Object key, value;
    public CCelulaDicionario prox;

    public CCelulaDicionario() {
        this.key = this.value = this.prox = null;
    }

    public CCelulaDicionario(Object chave, Object valor) {
        this.key = chave;
        this.value = valor;
        this.prox = null;
    }

    public CCelulaDicionario(Object chave, Object valor, CCelulaDicionario proxima) {
        this.key = chave;
        this.value = valor;
        this.prox = proxima;
    }
}

class CDicionario {
    private CCelulaDicionario primeira, ultima;

    public CDicionario() {
        primeira = new CCelulaDicionario();
        ultima = primeira;
    }

    public boolean vazio() {
        return primeira == ultima;
    }

    public void adiciona(Object chave, Object valor) {
        ultima.prox = new CCelulaDicionario(chave, valor);
        ultima = ultima.prox;
    }

    public Object recebeValor(Object chave) {
        Object rep = null;
        for (CCelulaDicionario i = primeira.prox; i != null; i = i.prox) {
            if ((i.key).equals(chave)) {
                rep = i.value;
                i = ultima;
            }
        }
        return rep;
    }
}

class Ex31 {
    public static void main(String args[]) throws Exception {
        Scanner ler = new Scanner(System.in);

        CDicionario dic = new CDicionario();
        
        System.out.println("Adicionando itens no dicionario!\n");
        dic.adiciona("UUU", "Fenilalanina");
        dic.adiciona("UUC", "Fenilalanina");
        dic.adiciona("UUA", "Leucina");
        dic.adiciona("UUG", "Leucina");
        dic.adiciona("CUU", "Leucina");
        dic.adiciona("CUC", "Leucina");
        dic.adiciona("CUA", "Leucina");
        dic.adiciona("CUG", "Leucina");
        dic.adiciona("AUU", "Isoleucina");
        dic.adiciona("AUC", "Isoleucina");
        dic.adiciona("AUA", "Isoleucina");
        dic.adiciona("AUG", "Metionina");
        dic.adiciona("GUU", "Valina");
        dic.adiciona("GUC", "Valina");
        dic.adiciona("GUA", "Valina");
        dic.adiciona("GUG", "Valina");
        dic.adiciona("UCU", "Serina");
        dic.adiciona("UCC", "Serina");
        dic.adiciona("UCA", "Serina");
        dic.adiciona("UCG", "Serina");
        dic.adiciona("CCU", "Prolina");
        dic.adiciona("CCC", "Prolina");
        dic.adiciona("CCA", "Prolina");
        dic.adiciona("CCG", "Prolina");
        dic.adiciona("ACU", "Treonina");
        dic.adiciona("ACC", "Treonina");
        dic.adiciona("ACA", "Treonina");
        dic.adiciona("ACG", "Treonina");
        dic.adiciona("GCU", "Alanina");
        dic.adiciona("GCC", "Alanina");
        dic.adiciona("GCA", "Alanina");
        dic.adiciona("GCG", "Alanina");
        dic.adiciona("UAU", "Tirosina");
        dic.adiciona("UAC", "Tirosina");
        dic.adiciona("UAA", "Parada");
        dic.adiciona("UAG", "Parada");
        dic.adiciona("CAU", "Histidina");
        dic.adiciona("CAC", "Histidina");
        dic.adiciona("CAA", "Glutamina");
        dic.adiciona("CAG", "Glutamina");
        dic.adiciona("AAU", "Asparagina");
        dic.adiciona("AAC", "Asparagina");
        dic.adiciona("AAA", "Lisina");
        dic.adiciona("AAG", "Lisina");
        dic.adiciona("GAU", "Aspartato");
        dic.adiciona("GAC", "Aspartato");
        dic.adiciona("GAA", "Glutamato");
        dic.adiciona("GAG", "Glutamato");
        dic.adiciona("UGU", "Cisteina");
        dic.adiciona("UGC", "Cisteina");
        dic.adiciona("UGA", "Parada");
        dic.adiciona("UGG", "Triptofano");
        dic.adiciona("CGU", "Arginina");
        dic.adiciona("CGC", "Arginina");
        dic.adiciona("CGA", "Arginina");
        dic.adiciona("CGG", "Arginina");
        dic.adiciona("AGU", "Serina");
        dic.adiciona("AGC", "Serina");
        dic.adiciona("AGA", "Arginina");
        dic.adiciona("AGG", "Arginina");
        dic.adiciona("GGU", "Glicina");
        dic.adiciona("GGC", "Glicina");
        dic.adiciona("GGA", "Glicina");
        dic.adiciona("GGG", "Glicina");
        if (dic.vazio()) {
            throw new Exception("Erro ao criar dicionario!\n");
        } else {
            System.out.println("Dicionario criado com sucesso!\n");
        }

        String resp="";
        System.out.println("Digite uma trinca de nucleotideos para consulta:\n(Digite FIM para parar a execussao)");
        resp = ler.nextLine();
        if (!((resp).equals("FIM"))) {
            System.out.println(dic.recebeValor(resp));
        }
        while (!((resp).equals("FIM"))) {
            System.out.println("Digite uma trinca de nucleotideos para consulta:\n(Digite FIM para parar a execussao)");
            resp = ler.nextLine();
            if (!((resp).equals("FIM"))) {
                System.out.println(dic.recebeValor(resp));
            }
        }

        ler.close();
    }
}
