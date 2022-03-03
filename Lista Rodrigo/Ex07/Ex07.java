import java.util.Random;

class RandomQueue {
    private Object[] array;
    private int primeiro;
    private int ultimo;
    Random gerador = new Random();

    public RandomQueue() {
        this(10);
    }

    public RandomQueue(int tamanho) {
        array = new Object[tamanho + 1];
        primeiro = ultimo = 0;
    }

    public boolean isEmpty() {
        return (array.length == 0);
    }

    public void enqueue(Object x) throws Exception {
        if (((ultimo + 1) % array.length) == primeiro) {
            throw new Exception("Erro ao inserir!");
        }

        array[ultimo] = x;
        ultimo = (ultimo + 1) % array.length;
    }

    public Object dequeue() throws Exception {
        int z=11;
        Object resp=0;
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }

        while (z >= 10) {
            z = (gerador.nextInt(10) + primeiro);
            if (z < 10) {
                resp = array[z];
            }
        }
        while (resp == null) {
            z = (gerador.nextInt(10) + primeiro);
            resp = array[z];
        }
        for (int i = z; i > primeiro; i--) {
            array[i] = array[i - 1];
        }
        array[primeiro] = resp;
        primeiro = (primeiro + 1) % array.length;
        return resp;
    }

    public Object sample() throws Exception {
        int z=11;
        Object resp=0;
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }

        while (z >= 10) {
            z = (gerador.nextInt(10) + primeiro);
            if (z < 10) {
                resp = array[z];
            }
        }
        while (resp == null) {
            z = (gerador.nextInt(10) + primeiro);
            resp = array[z];
        }
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

class Ex07 {
    public static void main(String args[]) throws Exception {
        RandomQueue RQ = new RandomQueue();
        for (int i = 1; i <= 10; i++) {
            RQ.enqueue(i);
        }
        RQ.mostrar();
        System.out.println("Remove e retorna um elemento qualquer = " + RQ.dequeue());
        RQ.mostrar();
        System.out.println("Remove e retorna um elemento qualquer = " + RQ.dequeue());
        RQ.mostrar();
        System.out.println("Remove e retorna um elemento qualquer = " + RQ.dequeue());
        RQ.mostrar();
        System.out.println("Retorna um elemento sem remover = " + RQ.sample());
        RQ.mostrar();
        System.out.println("Retorna um elemento sem remover = " + RQ.sample());
        RQ.mostrar();
        System.out.println("Retorna um elemento sem remover = " + RQ.sample());
        RQ.mostrar();
    }
}