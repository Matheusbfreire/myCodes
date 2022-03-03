package lista01ex01;

import java.util.Scanner;

public class Lista01Ex01 {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        String nome;
        String sexo;
        float peso;
        float altura;
        
        Pessoa comp = new Pessoa();
        Pessoa viva = new Pessoa();
        
        comp.setNome("Matheus");
        comp.setSexo("Masculino");
        comp.setPeso((float) 84.5);
        comp.setAltura((float) 1.8);
        
        System.out.println("Digite seu nome:");
        nome = ler.next();
        viva.setNome(nome);
        System.out.println("Digite o sexo:");
        sexo = ler.next();
        viva.setSexo(sexo);
        System.out.println("Digite opeso:");
        peso = ler.nextFloat();
        viva.setPeso(peso);
        System.out.println("Digite a altura:");
        altura = ler.nextFloat();
        viva.setAltura(altura);
        
        System.out.println("\nPessoa criada por leitura:");
        viva.mostraPessoa();
        System.out.println("IMC: "+viva.calculoImc());
        System.out.println("\nPessoa criada pelo computador:");
        comp.mostraPessoa();
        System.out.println("IMC: "+comp.calculoImc());
    }
    
}
