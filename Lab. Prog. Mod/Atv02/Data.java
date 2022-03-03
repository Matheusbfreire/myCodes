import java.util.*;

class Data {
    Scanner ler = new Scanner(System.in);

    int dia;
    int mes;
    int ano;

    public Data() {
        System.out.println("Digite o dia:");
        setDia(ler.nextInt());
        System.out.println("Digite o mes:");
        setMes(ler.nextInt());
        System.out.println("Digite o ano:");
        setAno(ler.nextInt());
        while (!(valida(this.dia, this.mes, this.ano))) {
            System.out.println("\nERRO: Data inválida!\n");
            System.out.println("Digite o dia:");
            setDia(ler.nextInt());
            System.out.println("Digite o mes:");
            setMes(ler.nextInt());
            System.out.println("Digite o ano:");
            setAno(ler.nextInt());
        }
    }

    public Data(int dia, int mes, int ano) {
        if (!valida(dia, mes, ano)){
            System.out.println("\nERRO: Data inválida!\n");
        } else {
            setDia(dia);
            setMes(mes);
            setAno(ano);
        }
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public int getDia() {
        return this.dia;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getMes() {
        return this.mes;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public int getAno() {
        return this.ano;
    }

    public boolean valida (int dia, int mes, int ano) {
        boolean resp = false;
        
        if (mes < 13 && mes > 0) {
            if (mes == 2) { 
                if (ano % 4 != 0) {
                    if (dia <= 28 && dia >= 1)
                        resp = true;
                    else {
                        resp = false;
                    }
                } else {
                    if (dia <= 29 && dia >= 1) {
                        resp = true;
                    } else {
                        resp = false;
                    }
                }
            } else {
                if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    if (dia <= 30 && dia >= 1) {
                        resp = true;
                    } else {
                        resp = false;
                    }
                } else {
                    if (dia <= 31 && dia >= 1) {
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

    public void adicionaDias(int numDias) {
        numDias += this.dia;

        if (valida(numDias, this.mes, this.ano)) {
            this.dia = numDias;
        }

        while (!valida(numDias, this.mes, this.ano)) {
            if (this.mes == 2) { 
                if (this.ano % 4 != 0) {
                    numDias -= 28;
                    this.dia = numDias;
                    setMes(this.mes + 1);
                } else {
                    numDias -= 29;
                    this.dia = numDias;
                    setMes(this.mes + 1);
                }
            } else {
                if (this.mes == 4 || this.mes == 6 || this.mes == 9 || this.mes == 11) {
                    numDias -= 30;
                    this.dia = numDias;
                    setMes(this.mes + 1);
                } else {
                    numDias -= 31;
                    this.dia = numDias;
                    if (this.mes != 12) {
                        setMes(this.mes + 1);
                    } else {
                        setMes(1);
                        setAno(ano + 1);
                    }
                }
            }
        }
    }

    public void imprimeData() {
        if (this.dia < 10) {
            System.out.print("0" + this.dia);
        } else {
            System.out.print(this.dia);
        }
        System.out.print("/");
        if (this.mes < 10) {
            System.out.print("0" + this.mes);
        } else {
            System.out.print(this.mes);
        }
        System.out.print("/");
        System.out.println(this.ano);
    }

    public Data verificaFutura(Data d1, Data d2) {
        Data d = new Data(1, 1, 0);

        if (d1.ano > d2.ano) {
            d = d1;
        } else if (d2.ano > d1.ano) {
            d = d2;
        } else if (d1.mes > d2.mes) {
            d = d1;
        } else if (d2.mes > d1.mes) {
            d = d2;
        } else if (d1.dia > d2.dia) {
            d = d1;
        } else if (d2.dia > d1.dia) {
            d = d2;
        }

        return d;
    }
}