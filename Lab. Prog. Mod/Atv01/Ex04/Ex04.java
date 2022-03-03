public class Ex04 {
    public static void main(String args[]) {

        Verifica v = new Verifica();

        if (v.condicao(800)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.condicao(400)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.condicao(700)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.condicao(40)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }

        System.out.println("\n");

        if (v.newCondicao(800)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.newCondicao(400)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.newCondicao(700)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
        if (v.newCondicao(40)) {
            System.out.println("É divisível!");
        } else {
            System.out.println("Não é divisível!");
        }
    }
}

class Verifica {
    boolean condicao(int n) {

        boolean resposta;

        if (n % 4 == 0) {
            if (n % 100 == 0) {
                if (n % 400 == 0) {
                    resposta = true;
                } else {
                    resposta = false;
                }
            } else {
                resposta = true;
            }
        } else {
            resposta = false;
        }

        return resposta;
    }

    boolean newCondicao(int n) {

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