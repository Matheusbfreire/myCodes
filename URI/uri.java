import java.util.*;

class uri {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        String a="";
        
        a = ler.next();
        
        aliteracao(a);
    }
    
    public static int aliteracao (String a) {
        Scanner ler = new Scanner(System.in);
        
        String b="";
        
        b = ler.next();
        
        System.out.println(a+" "+b);
        
        return 0;
    }
    
}
