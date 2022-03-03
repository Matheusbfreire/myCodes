package alteração.aleatória;

import java.util.*;

public class AlteraçãoAleatória {
    public static String alteraTxt(String msg) {
        String newMsg="";
        char c1;
        char c2;
        Random r = new Random();
        r.setSeed(4);
        
        c1 = (char)('a'+(Math.abs(r.nextInt())%26));
        c2 = (char)('a'+(Math.abs(r.nextInt())%26));
        for(int i=0;i<msg.length();i++) {
            if (msg.charAt(i)==c1) {
                newMsg+=c2;
            } else {
                newMsg+=msg.charAt(i);
            }
        }
        
        return newMsg;
    }
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        String msg;
        
        while (!((msg = ler.nextLine()).equals("FIM"))) {
            System.out.println(alteraTxt(msg));
        }
            
        
    }
    
}
