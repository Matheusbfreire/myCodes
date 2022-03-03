package leiturahtml;

import java.io.*;
import java.net.*;
import java.util.*;
import java.nio.charset.*;

public class HTML {
  public static PrintStream out = null;

  public static void main(String[] args) throws Exception {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in, Charset.forName("UTF-8")));
    HTML.out = new PrintStream(System.out, true, "UTF-8");

    String nome;
    String link;

    while (!((nome = in.readLine()).equals("FIM"))) {
      link = in .readLine();
      URL url = new URL(link);
      getPage(url, nome);
    }

    HTML.out.close();

    in.close();
  }

  public static void getPage(URL url, String nome) throws Exception {
    BufferedReader in = new BufferedReader(new InputStreamReader(url.openStream()));

    int a = 0, e = 0, i = 0, o = 0, u = 0, aa = 0, ee = 0, ii = 0, oo = 0, uu = 0, aaa = 0, eee = 0, iii = 0, ooo = 0, uuu = 0, aaaa = 0, eeee = 0, iiii = 0, oooo = 0, uuuu = 0, aaaaa = 0, ooooo = 0, cons = 0, br = 0, table = 0;

    String site;

    while ((site = in.readLine()) != null) {
      for (int x = 0; x < site.length(); x++) {
        if (site.charAt(x) == 'a') {
          a++;
        } else if (site.charAt(x) == 'e') {
          e++;
        } else if (site.charAt(x) == 'i') {
          i++;
        } else if (site.charAt(x) == 'o') {
          o++;
        } else if (site.charAt(x) == 'u') {
          u++;
        } else if (site.charAt(x) == 160) {
          aa++;
        } else if (site.charAt(x) == 130) {
          ee++;
        } else if (site.charAt(x) == 161) {
          ii++;
        } else if (site.charAt(x) == 162) {
          oo++;
        } else if (site.charAt(x) == 163) {
          uu++;
        } else if (site.charAt(x) == 133) {
          aaa++;
        } else if (site.charAt(x) == 138) {
          eee++;
        } else if (site.charAt(x) == 141) {
          iii++;
        } else if (site.charAt(x) == 149) {
          ooo++;
        } else if (site.charAt(x) == 151) {
          uuu++;
        } else if (site.charAt(x) == 131) {
          aaaa++;
        } else if (site.charAt(x) == 136) {
          eeee++;
        } else if (site.charAt(x) == 140) {
          iiii++;
        } else if (site.charAt(x) == 147) {
          oooo++;
        } else if (site.charAt(x) == 150) {
          uuuu++;
        } else if (site.charAt(x) == 198) {
          aaaaa++;
        } else if (site.charAt(x) == 208) {
          ooooo++;
        } else if (site.charAt(x) >= 97 && site.charAt(x) <= 122) {
          cons++;
        } else if (site.contains("<br>")) {
          br++;
        } else if (site.contains("<table>")) {
          table++;
        }
      }
    }

    HTML.out.println("a(" + a + ") e(" + e + ") i(" + i + ") o(" + o + ") u(" + u + ") " + (char) 160 + "(" + aa + ") " + (char) 130 + "(" + ee + ") " + (char) 161 + "(" + ii + ") " + (char) 162 + "(" + oo + ") " + (char) 163 + "(" + uu + ") " + (char) 133 + "(" + aaa + ") " + (char) 138 + "(" + eee + ") " + (char) 141 + "(" + iii + ") " + (char) 149 + "(" + ooo + ") " + (char) 151 + "(" + uuu + ") " + (char) 131 + "(" + aaaaa + ") " + (char) 136 + "(" + ooooo + ") " + (char) 140 + "(" + aaaa + ") " + (char) 147 + "(" + eeee + ") " + (char) 150 + "(" + iiii + ") " + (char) 198 + "(" + oooo + ") " + (char) 208 + "(" + uuuu + ") consoante(" + cons + ") <br>(" + br + ") <table>(" + table + ") " + nome);

    in.close();
  }
}