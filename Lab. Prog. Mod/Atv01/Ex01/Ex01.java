public class Ex01 {
    public static void main(String[] args) {
        CalcBonus b = new CalcBonus();

        System.out.println(b.bonus());
        System.out.println(b.newBonus());
    }
}

class CalcBonus {
    private double vendas[] = new double[100];

    public CalcBonus() {
        int c = 2000;

        for (int i = 0; i <= 11; i++) {
            vendas[i] = c;
            c += 100;
        }
    }

    public double bonus() {
        double vt;
        double b = 0;

        vt = vendas[0] + vendas[1] + vendas[2] + vendas[3];
        vt += vendas[4] + vendas[5] + vendas[6] + vendas[7];
        vt += vendas[8] + vendas[9] + vendas[10] + vendas[11];

        if (vt >= 24000 && vt < 36000)
            b = 0.1;
        else if (vt >= 36000 && vt < 50000)
            b = 0.2;
        else if (vt >= 50000)
            b = 0.35;

        return vt * b;
    }

    public double newBonus() {
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
}