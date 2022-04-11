package app;

abstract class Livro {
	private static double PCT_DIREITOS = 0.08;
	protected String titulo;
	protected Autor autor;
	protected int paginas;
	protected double precoBase;
	protected int[] avaliacoes = new int[1000];
	private static int posicao = 0;
	
	private void init(String titulo, Autor autor, int paginas, double precoBase) {
		this.titulo = titulo;
		this.autor = autor;
		this.paginas = paginas;
		this.precoBase = precoBase;
	}
	
	public Livro() {
		this.init("Titulo", new Autor(), 0, 0);
	}
	
	public Livro(String titulo, Autor autor, int paginas, double precoBase) {
		this.init(titulo, autor, paginas, precoBase);
	}
	
	public static double getPCT_DIREITOS() {
		return PCT_DIREITOS;
	}

	public static void setPCT_DIREITOS(double pCT_DIREITOS) {
		PCT_DIREITOS = pCT_DIREITOS;
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public Autor getAutor() {
		return autor;
	}

	public void setAutor(Autor autor) {
		this.autor = autor;
	}

	public int getPaginas() {
		return paginas;
	}

	public void setPaginas(int paginas) {
		this.paginas = paginas;
	}

	public double getPrecoBase() {
		return precoBase;
	}

	public void setPrecoBase(double precoBase) {
		this.precoBase = precoBase;
	}

	public int[] getAvaliacoes() {
		return avaliacoes;
	}

	public void setAvaliacoes(int[] avaliacoes) {
		this.avaliacoes = avaliacoes;
	}

	public static int getPosicao() {
		return posicao;
	}

	public static void setPosicao(int posicao) {
		Livro.posicao = posicao;
	}

	public abstract double precoVenda();
	
	public double direitosAutorais() {
		return (this.precoBase * Livro.PCT_DIREITOS);
	}
	
	public double avaliacaoMedia() {
		double soma = 0;
		double media = 0;
		
		for (int i=0; i<Livro.posicao; i++) {
			soma += this.avaliacoes[i];
		}
		
		media = (soma / Livro.posicao);

		return media;
	}
	
	protected abstract double precoBase();
	
	public void novaAvaliacao(int nota) {
		if (nota >= 1 && nota <= 5) {
			this.avaliacoes[posicao] = nota;
			Livro.posicao += 1;
		}
	}
}
