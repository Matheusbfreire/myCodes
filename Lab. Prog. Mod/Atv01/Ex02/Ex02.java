import java.util.*;

public class Ex02 {
    public static void main(String[] args) {

        Scanner ler = new Scanner(System.in);

        ValidaData val = new ValidaData();

        int d = 0;
        int m = 0;
        int a = 0;
        int cont = 1;

        do {
            System.out.println("Digite o dia:");
            d = ler.nextInt();
            System.out.println("Digite o mes:");
            m = ler.nextInt();
            System.out.println("Digite o ano:");
            a = ler.nextInt();
            boolean exist = val.Metodo(d, m, a);
            boolean exist1 = val.newMetodo(d, m, a);
            if (exist) {
                System.out.println("Existe!");
            } else {
                System.out.println("Nao existe!");
            }
            if (exist1) {
                System.out.println("Existe!");
            } else {
                System.out.println("Nao existe!");
            }
            System.out.println("Deseja continuar?\n[1]SIM  [2]NAO");
            cont = ler.nextInt();
        } while (cont != 2);

        ler.close();
    }
}

class ValidaData {

    public boolean Metodo(int d, int m, int a) {
        if (m < 13 && m > 0) {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                if (d <= 31 && d >= 1) {
                    return true;
                } else {
                    return false;
                }
            } else if (m == 4 || m == 6 || m == 9 || m == 11) {
                if (d <= 30 && d >= 1) {
                    return true;
                } else {
                    return false;
                }
            } else if (m == 2 && (a % 4 != 0)) {
                if (d <= 28 && d >= 1) {
                    return true;
                } else {
                    return false;
                }
            } else if (m == 2 && (a % 100 != 0 || a % 400 == 0)) {
                if (d <= 29 && d >= 1) {
                    return true;
                } else {
                    return false;
                }
            }
        } else {
            return false;
        }
        return false;
    }

    public boolean newMetodo (int d, int m, int a) {
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
}