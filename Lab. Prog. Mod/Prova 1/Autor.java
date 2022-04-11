package app;

public class Autor {
	public String nome;
	private Livro[] livros = new Livro[1000];
	private static int posicao = 0;
	
	private void init(String nome) {
		this.nome = nome;
	}
	
	public Autor() {
		this.init("Fulano");
	}
	
	public Autor(String nome) {
		this.init(nome);
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Livro[] getLivros() {
		return livros;
	}

	public void setLivros(Livro[] livros) {
		this.livros = livros;
	}

	public static int getPosicao() {
		return posicao;
	}

	public static void setPosicao(int posicao) {
		Autor.posicao = posicao;
	}

	public double direitoAutoral(Livro livro) {
		return livro.direitosAutorais();
	}
	
	public void incluirLivro(Livro novo) {
		this.livros[Autor.posicao] = novo;
		Autor.posicao += 1;
	}
}
