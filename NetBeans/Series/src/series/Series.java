package series;

import java.io.IOException;
import java.util.zip.*;

class Series{
    public static void main (String args[]) throws Exception {
        String source = "Trabalho Series Parte 1/series.Zip";
        String destination = "Trabalho Series Parte 1/teste/";
        
        ZipFile zipFile = new ZipFile(source);
        zipFile.extractAll(destination);
    }
}