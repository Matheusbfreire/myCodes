package app;

public class LivroFisico extends Livro {
	private static double ADIC_PAGINA = 0.07;
	private double valorEncadernacao;
	
	private void init(double valorEncadernacao) {
		this.valorEncadernacao = valorEncadernacao;
	}

	public LivroFisico() {
		super();
		this.init(0);
	}
	
	public LivroFisico(String titulo, Autor autor, int paginas, double precoBase, double valorEncadernacao) {
		super(titulo, autor, paginas, precoBase);
		this.init(valorEncadernacao);
	}
	
	public static double getADIC_PAGINA() {
		return ADIC_PAGINA;
	}

	public static void setADIC_PAGINA(double aDIC_PAGINA) {
		ADIC_PAGINA = aDIC_PAGINA;
	}

	public double getValorEncadernacao() {
		return valorEncadernacao;
	}

	public void setValorEncadernacao(double valorEncadernacao) {		
		this.valorEncadernacao = valorEncadernacao;
	}

	@Override
	public double precoVenda() {
		return (this.precoImpressao() + this.precoBase + this.direitosAutorais());
	}
	
	@Override
	protected double precoBase() {
		return this.precoBase;
	}

	private double precoImpressao() {
		return ((this.paginas * LivroFisico.ADIC_PAGINA) + this.valorEncadernacao);
	}
}
