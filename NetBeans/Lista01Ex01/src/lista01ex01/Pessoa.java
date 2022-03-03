package listadeex01;

public class Pessoa {
    private String nome;
    private String sexo;
    private float peso;
    private float altura;
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public String getNome() {
        return nome;
    }
    
    public void setSexo(String sexo) {
        this.sexo = sexo;
    }
    
    public String getSexo() {
        return sexo;
    }
    
    public void setPeso(float peso) {
        this.peso = peso;
    }
    
    public float getPeso() {
        return peso;
    }
    
    public void setAltura(float altura) {
        this.altura = altura;
    }
    
    public float getAltura() {
        return altura;
    }
    
    public void mostraPessoa() {
        System.out.println("Nome: " + nome);
        System.out.println("Sexo: " + sexo);
        System.out.println("Peso: " + peso);
        System.out.println("Altura: " + altura);
    }
    
    public float calculoImc() {
        float imc = (peso)/(altura*altura);
        return imc;
    }
    
}
