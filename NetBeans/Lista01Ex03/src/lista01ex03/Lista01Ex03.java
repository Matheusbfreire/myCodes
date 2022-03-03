package lista01ex03;

import java.util.Scanner;

public class Lista01Ex03 {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        Televisao tv = new Televisao();
        
        int esc;
        int num;
        
        System.out.println("0. Sair do programa;\n1. Ligar a TV;\n2. Desligar a TV;\n3. Aumentar 1 canal;\n4. Diminuir 1 canal;\n5. Diminiur volume em 1 unidade;\n6. Aumentar volume em 1 unidade;\n7. Escolher canal;\n8. Mostrar dados;");
        esc = ler.nextInt();
        while (esc!=0) {
            switch (esc) {
                case 0 -> {
                    System.out.println("\nDesligando a TV e saindo!");
                }
                case 1 -> {
                    tv.ligarTv();
                }
                case 2 -> {
                    tv.desligarTv();
                }
                case 3 -> {
                    tv.aumentarCanal();
                }
                case 4 -> {
                    tv.diminuirCanal();
                }
                case 5 -> {
                    tv.aumentarVol();
                }
                case 6 -> {
                    tv.diminuirVol();
                }
                case 7 -> {
                    System.out.println("Qual canal você quer assistir?");
                    num = ler.nextInt();
                    tv.selectCanal(num);
                }
                case 8 -> {
                    tv.mostrarDados();
                }
                default -> {
                    System.out.println("\nOpção não existente!");
                }
            }
            System.out.println("\n0. Sair do programa;\n1. Ligar a TV;\n2. Desligar a TV;\n3. Aumentar 1 canal;\n4. Diminuir 1 canal;\n5. Diminiur volume em 1 unidade;\n6. Aumentar volume em 1 unidade;\n7. Escolher canal;\n8. Mostrar dados;");
            esc = ler.nextInt();
        }
    }

}
