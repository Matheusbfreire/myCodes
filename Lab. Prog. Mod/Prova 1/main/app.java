package main;

import app.Livro;
import app.Autor;

public class app {
	public static void main(String[] args) {
		Autor autor = new Autor("Matheus");
		Livro livro1 = new Livro("Cronicas de Matheus", autor, 200, 119.99);
		Livro livro2 = new Livro("Pais de Matheus", autor, 400, 149.99);
		
		autor.incluirLivro(livro1);
		autor.incluirLivro(livro2);
		
		System.out.println("Direitos autorais de " + autor.getNome() + ": " + String.format("%.2f", app.totalDireitosAutorais(autor)));
	}
	
	public static double totalDireitosAutorais(Autor autor) {
		double soma = 0;
		
		for (int i=0; i<Autor.getPosicao(); i++) {
			soma += autor.direitoAutoral(autor.getLivros()[i]);
		}
		
		return soma;
	}
}
