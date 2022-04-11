package app;

public class Atividade {
	private  double notaMaxima;
	private double nota;
	
	private void init(double nota, double notaMaxima) {
		this.notaMaxima = notaMaxima;
		this.nota = nota;
	}
	
	public Atividade() {
		this.init(0, 25);
	}
	
	public Atividade(double nota, double notaMaxima) {
		this.init(nota, notaMaxima);
	}

	public double getNotaMaxima() {
		return notaMaxima;
	}

	public void setNotaMaxima(double notaMaxima) {
		this.notaMaxima = notaMaxima;
	}

	public double getNota() {
		return nota;
	}

	public void setNota(double nota) {
		if (nota <= notaMaxima) {
			this.nota = nota;
		}
	}
}
