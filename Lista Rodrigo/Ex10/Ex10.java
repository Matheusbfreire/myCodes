class Deque {
    private Object[] array;
    private int primeiro;
    private int ultimo;

    public Deque() {
        this(10);
    }

    public Deque(int tamanho) {
        array = new Object[tamanho + 1];
        primeiro = ultimo = 0;
    }

    public boolean isEmpty() {
        return (primeiro == ultimo);
    }

    public int size() {
        return ultimo - primeiro;
    }

    public void pushLeft(Object x) throws Exception {
        if (((ultimo + 1) % array.length) == primeiro) {
            throw new Exception("Erro ao inserir!");
        }

        for (int i = ultimo; i > primeiro; i--) {
            array[i] = array[i - 1];
        }

        array[primeiro] = x;    
        ultimo = (ultimo + 1) % array.length;
    }

    public void pushRight(Object x) throws Exception {
        if (((ultimo + 1) % array.length) == primeiro) {
            throw new Exception("Erro ao inserir!");
        }

        array[ultimo] = x;
        ultimo = (ultimo + 1) % array.length;
    }

    public Object popLeft() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }
        
        Object resp = array[primeiro];
        primeiro = (primeiro + 1) % array.length;
        return resp;
    }

    public Object popRight() throws Exception {
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }
        
        if (ultimo == 0) {
            ultimo = array.length - 1;
        } else {
            ultimo = (ultimo - 1) % array.length;
        }
        Object resp = array[ultimo];
        return resp;
    }

    public void mostrar (){
        System.out.print("[ ");
  
        for(int i = primeiro; i != ultimo; i = ((i + 1) % array.length)) {
           System.out.print(array[i] + " ");
        }
  
        System.out.println("]");
    }
}

class Ex10 {
    public static void main(String args[]) throws Exception {
        Deque RQ = new Deque();
        for (int i = 5; i >=1; i--) {
            RQ.pushLeft(i);
            RQ.mostrar();
            System.out.println("Tamanho do array = "+RQ.size()+"\n");
        }
        for (int i = 6; i <= 10; i++) {
            RQ.pushRight(i);
            RQ.mostrar();
            System.out.println("Tamanho do array = "+RQ.size()+"\n");
        }
        for (int i = 0; i < 3; i++) {
            System.out.println("Item removido = "+RQ.popLeft());
            RQ.mostrar();
            System.out.println("Tamanho do array = "+RQ.size()+"\n");
        }
        for (int i = 0; i < 3; i++) {
            System.out.println("Item removido = "+RQ.popRight());
            RQ.mostrar();
            System.out.println("Tamanho do array = "+RQ.size()+"\n");
        }
    }
}
