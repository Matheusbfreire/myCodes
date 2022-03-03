package tiposprimitivos;
import java.util.Scanner;
public class TiposPrimitivos {
    public static void main(String[] args) {
        Scanner digite = new Scanner(System.in);
        
        System.out.println("Nome do aluno:");
        String nome = digite.nextLine();
        System.out.println("Nota do aluno:");
        float nota = digite.nextFloat();
        System.out.printf("A nota do(a) %s é %.2f\n", nome, nota);
        
    }
    
}
