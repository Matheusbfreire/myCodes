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

class Ex30 {
    public static void main(String args[]) throws Exception {
        Scanner ler = new Scanner(System.in);

        CDicionario dic = new CDicionario();
        
        System.out.println("Adicionando itens no dicionario!\n");
        dic.adiciona("www.google.com", "216.58.195.68");
        dic.adiciona("www.pucminas.br", "200.229.32.29");
        dic.adiciona("www.gmail.com", "142.250.191.37");
        dic.adiciona("www.youtube.com", "216.58.194.174");
        dic.adiciona("www.capes.gov.br", "200.130.18.234");
        dic.adiciona("www.yahoo.com", "98.137.11.164");
        dic.adiciona("www.microsoft.com", "104.87.6.4");
        dic.adiciona("www.twitter.com", "104.244.42.1");
        dic.adiciona("www.brasil.gov.br", "170.246.255.242");
        dic.adiciona("www.wikipedia.com", "198.35.26.98");
        dic.adiciona("www.amazon.com", "99.84.229.86");
        dic.adiciona("www.facebook.com", "157.240.22.35");
        dic.adiciona("www.whitehouse.gov", "184.50.3.122");
        dic.adiciona("www.answers.com", "151.101.40.203");
        dic.adiciona("www.uol.com.br", "184.25.56.61");
        dic.adiciona("www.hotmail.com", "204.79.197.212");
        dic.adiciona("www.cplusplus.com", "144.217.110.12");
        dic.adiciona("www.nyt.com", "151.101.41.164");
        dic.adiciona("www.apple.com", "104.86.105.16");
        if (dic.vazio()) {
            throw new Exception("Erro ao criar dicionario!\n");
        } else {
            System.out.println("Dicionario criado com sucesso!\n");
        }

        String resp="";
        System.out.println("Digite um site para consulta:\n(Digite FIM para parar a execussao)");
        resp = ler.nextLine();
        if (!((resp).equals("FIM"))) {
            System.out.println("\nIP: "+dic.recebeValor(resp)+"\n");
        }
        while (!((resp).equals("FIM"))) {
            System.out.println("Digite um site para consulta:\n(Digite FIM para parar a execussao)");
            resp = ler.nextLine();
            if (!((resp).equals("FIM"))) {
                System.out.println("\nIP: "+dic.recebeValor(resp)+"\n");
            }
        }

        ler.close();
    }
}