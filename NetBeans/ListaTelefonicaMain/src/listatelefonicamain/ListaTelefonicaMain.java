package listatelefonicamain;
import java.io.IOException;
import java.util.Scanner;
public class ListaTelefonicaMain {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        
        Lista teste = new Lista();
        
        int esc;
        String numero;
        
        System.out.println("0. Sair do programa;\n1. Adicionar número;\n2. Buscar número;\n3. Alterar número;\n4. Mostrar lista;");
        esc = ler.nextInt();
        while (esc!=0) {
            switch (esc){
                case 1 -> {
                    System.out.println("Digite o número:");
                    numero = ler.next();
                    teste.cadastraNumero(numero);
                }
                case 2 -> {
                    System.out.println("Qual o número?");
                    numero = ler.next();
                    int res = teste.buscarNumero(numero);
                    if (res == 1) {
                        System.out.println("Número encontrado!");
                    } else {
                        System.out.println("Número não encontrado!");
                    }
                }
                case 3-> {
                    teste.mostrarLista();
                    System.out.println("Qual número você quer alterar?");
                    int num = ler.nextInt();
                    System.out.println("Digite o novo número:");
                    numero = ler.next();
                    teste.alterarNumero(num, numero);
                    System.out.println("Nova lista:");
                    teste.mostrarLista();
                }
                case 4 -> {
                    teste.mostrarLista();
                }
                default -> {
                    System.out.println("Exercício não existe, tente novamente!");
                }
            }
            System.out.print("Press Enter!");
            System.in.read();
            System.out.println("\n0. Sair do programa;\n1. Adicionar número;\n2. Buscar número;\n3. Alterar número;\n4. Mostrar lista;");
            esc = ler.nextInt();
        }
    }
}