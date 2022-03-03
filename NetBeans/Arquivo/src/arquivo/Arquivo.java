package arquivo;

import java.io.*;
import java.nio.charset.Charset;

public class Arquivo {
    public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in, Charset.forName("ISO-8859-1")));
    
    public static void writeFile (int x) throws Exception {
        
        
        RandomAccessFile file;
        file = new RandomAccessFile("file.txt", "rw");
        for (int i=0;i<x;i++) {
            file.writeDouble(Double.parseDouble(in.readLine()));
        }
        file.close();
    }
    
    public static void readFile (int x) throws Exception{
        RandomAccessFile file;
        file = new RandomAccessFile("file.txt", "r");
        for (int i=x-1;i>=0;i--) {
            file.seek(i*8);
            double n = file.readDouble();
            if (n-(int)n==0) {
                System.out.println((int)n);
            }else {
                System.out.println(n);
            }
        }
        file.close();
    }
    
    public static void main(String[] args) throws Exception {
        int x = Integer.valueOf(in.readLine());
        
        writeFile(x);
        readFile(x);
    }
    
}
