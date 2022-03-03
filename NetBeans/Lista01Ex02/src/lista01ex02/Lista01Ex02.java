package lista01ex02;

import java.io.IOException;
import java.util.Scanner;

public class Lista01Ex02 {
    
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        
        Elevador el = new Elevador();
        
        int esc;
        
        el.inicializa(10, 20);
        
        System.out.println("Dados iniciais:");
        el.mostrarDados();
        System.out.println("\n0. Finalizar programa;\n1. Entrar;\n2. Sair;\n3. Subir;\n4. Descer;\n5. Mostrar dados;");
        esc = ler.nextInt();
        while (esc!=0) {
            switch (esc) {
                case 1 -> {
                    el.entra();
                }
                case 2 -> {
                    el.sai();
                }
                case 3 -> {
                    el.sobe();
                }
                case 4 -> {
                    el.desce();
                }
                case 5 -> {
                    el.mostrarDados();
                }
                default -> {
                    System.out.println("Opção não existe, tente novamente!");
                }
            }
            System.out.println("\n0. Finalizar programa;\n1. Entrar;\n2. Sair;\n3. Subir;\n4. Descer;\n5. Mostrar dados;");
            esc = ler.nextInt();
        }
    }
    
}
