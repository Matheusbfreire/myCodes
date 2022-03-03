package firstmetod;
import java.util.Scanner;
public class FirstMetod {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        Caneta bic = new Caneta();
        
        System.out.println("Digite a cor da caneta:");
        bic.setCor(ler.next());
        System.out.println("Digite a marca da caneta:");
        bic.setMarca(ler.next());
        
        System.out.println("Caneta criada:\nCor: "+bic.getCor()+"\nMarca: "+bic.getMarca());
    }
}