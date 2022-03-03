package lista01ex03;

public class Televisao {
    private int canal=1;
    private int vol;
    private boolean lig=false;
    
    public void ligarTv() {
        lig = true;
    }
    
    public void desligarTv() {
        lig = false;
    }
    
    public void aumentarCanal() {
        if (lig) {
            if (canal < 20 && canal >= 1) {
                canal++;
            } else {
                canal = 1;
            }
        } else {
            System.out.println("\nLigue a TV primeiro!");
        }
    }
    
    public void diminuirCanal() {
        if (lig) {
            if (canal <= 20 && canal > 1) {
                canal--;
            } else {
                canal = 20;
            }
        } else {
            System.out.println("\nLigue a TV primeiro!");
        }
    }
    
    public void aumentarVol() {
        if (lig) {
            if (vol < 10 && vol >= 0) {
                vol++;
            } else {
                System.out.println("\nVolume já está no máximo!");
            }
        } else {
            System.out.println("\nLigue a TV primeiro!");
        }
    }
    
    public void diminuirVol() {
        if (lig) {
            if (vol <= 10 && vol > 0) {
                vol--;
            } else {
                System.out.println("\nVolume já está no mínimo!");
            }
        } else {
            System.out.println("\nLigue a TV primeiro!");
        }
    }
    
    public void selectCanal(int num) {
        if (lig) {
            if (num >= 1 && num <= 20) {
                canal = num;
            } else {
                System.out.println("\nCanal não existente!");
            }
        } else {
            System.out.println("\nLigue a TV primeiro!");
        }
    }
    
    public void mostrarDados() {
        System.out.println("\nCanal atual: "+canal);
        System.out.println("Volume atual: "+vol);
        System.out.println("Tv ligada: "+lig);
    }
}
