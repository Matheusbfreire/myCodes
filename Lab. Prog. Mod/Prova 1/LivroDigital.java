package app;

public class LivroDigital extends Livro {
	public LivroDigital() {
		super();
	}
	
	public LivroDigital(String titulo, Autor autor, int paginas, double precoBase) {
		super(titulo, autor, paginas, precoBase);
	}
	
	@Override
	public double precoVenda() {
		return (this.precoBase + this.direitosAutorais());
	}
	
	@Override
	protected double precoBase() {
		return this.precoBase;
	}
}
