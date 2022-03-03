public class respostas {
    /* Exercício 1 */
    public double bonus() {
        /*
         * Iniciei a variável para evitar erros
         * Retirei a variável b
         */
        double vt = 0;
        /* Resumi as linas de adição de vt para uma repetição do tipo for */
        for (int i = 0; i <= 11; i++) {
            vt += vendas[i];
        }
        /*
         * Sem a variável b foi possível utilizar somente a variável vt para
         * realizar os cálculos do bônus
         */
        if (vt >= 24000 && vt < 36000) {
            vt *= 0.1;
        } else if (vt >= 36000 && vt < 50000) {
            vt *= 0.2;
        } else if (vt >= 50000) {
            vt *= 0.35;
        }
        /* Sem a variável b é necessário somente a variável vt no return */
        return vt;
    }
    /* Exercício 2 */
    public boolean metodo (int d, int m, int a) {
        /* Criei uma variável para armazenar o valor a ser retornado
         * a fim de retirar os returns de dentro dos ifs, deixando
         * somente um único return no fim do método */
        boolean resp = false;
        /* Utilizei de ifs mais gerais e objetivos, reduzindo o número
         * de comparações realizadas */
        if (m < 13 && m > 0) {
            if (m == 2) { 
                if (a % 4 != 0) {
                    if (d <= 28 && d >= 1)
                        resp = true;
                    else {
                        resp = false;
                    }
                } else {
                    if (d <= 29 && d >= 1) {
                        resp = true;
                    } else {
                        resp = false;
                    }
                }
            } else {
                if (m == 4 || m == 6 || m == 9 || m == 11) {
                    if (d <= 30 && d >= 1) {
                        resp = true;
                    } else {
                        resp = false;
                    }
                } else {
                    if (d <= 31 && d >= 1) {
                        resp = true;
                    } else {
                        resp = false;
                    }
                }
            }
        } else {
            resp = false;
        }

        return resp;
    }
    /* Exercício 3 */
    public void operacao() {

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
    /* Exercício 4 */
    boolean condicao(int n) {

        boolean resposta;
        /* Reduzi o número de condicionais a serem analizadas, mantendo o resultado final */
        if ((n % 4 == 0 && n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
            resposta = true;
        } else {
            resposta = false;
        }

        return resposta;
    }
}
