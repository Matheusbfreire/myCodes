package lista01ex02;

public class Elevador {
    private int nvlAt=0;
    private int ttlAnd;
    private int cap;
    private int qntPes=0;
    
    public void setNvlAt(int nvlAt) {
        this.nvlAt = nvlAt;
    }
    
    public int getNvlAt() {
        return nvlAt;
    }
    
    public void setTtlAnd(int ttlAnd) {
        this.ttlAnd = ttlAnd;
    }
    
    public int getTtlAnd() {
        return ttlAnd;
    }
    
    public void setCap(int cap) {
        this.cap = cap;
    }
    
    public int getCap() {
        return cap;
    }
    
    public void setQntPes(int qntPes) {
        this.qntPes = qntPes;
    }
    
    public int getQntPes() {
        return qntPes;
    }
    
    public void inicializa(int cap, int ttlAnd) {
        setCap(cap);
        setTtlAnd(ttlAnd);
    }
    
    public void entra() {
        if (qntPes<cap) {
            qntPes++;
        } else {
            System.out.println("\nCapacidade máxima atingida!");
        }
    }
    
    public void sai(){
        if (qntPes>0) {
            qntPes--;
        } else {
            System.out.println("\nJá não há ninguém no elevador!");
        }
    }
    
    public void sobe() {
        if (nvlAt<ttlAnd) {
            nvlAt++;
        } else {
            System.out.println("\nVocê já está no último andar!");
        }
    }
    
    public void desce() {
        if (nvlAt>0) {
            nvlAt--;
        } else {
            System.out.println("\nVocê já está no Térreo!");
        }
    }
    
    public void mostrarDados() {
        System.out.println("Andar atual: "+nvlAt);
        System.out.println("Quantidade de pessoas no elevador: "+qntPes);
        System.out.println("Total de andares: "+ttlAnd);
        System.out.println("Capacidade máxima: "+cap);
    }
    
}
