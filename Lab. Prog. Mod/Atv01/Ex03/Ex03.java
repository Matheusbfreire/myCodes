import java.util.*;

public class Ex03 {
    public static void main(String[] args) {
        Somatorio s = new Somatorio();

        s.operacao();
        s.newOperacao();
    }
}

class Somatorio {

    Scanner ler = new Scanner(System.in);

    public void operacao() {

        double valor = 0;
        int opcao = 0;

        while (opcao == 0){
            System.out.println("Digite um numero");
            int a = ler.nextInt();
            System.out.println("Digite um numero");
            int b = ler.nextInt();
            valor += a + b;
            System.out.println("0 para continuar, 1 para parar");
            opcao = ler.nextInt();
        }

        System.out.println("Resultado = " + valor);
    }

    public void newOperacao() {

        double valor = 0;
        int opcao = 0;
        /* Na leitura do teclado, coloquei para a variável valor somar
         * o que for digitado, dessa forma não foi mais necessário as
         * variáveis a e b */
        while (opcao == 0){
            System.out.println("Digite um numero");
            valor += ler.nextDouble();
            System.out.println("Digite um numero");
            valor += ler.nextDouble();
            System.out.println("0 para continuar, 1 para parar");
            opcao = ler.nextInt();
        }

        System.out.println("Resultado = " + valor);
        
        ler.close();
    }
}