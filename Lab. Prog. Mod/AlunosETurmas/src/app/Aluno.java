package app;

public class Aluno {
	private String nome;
	private int matricula;
	private boolean matriculado;
	private int faltas;
	private Turma turma;
	private double[] notasAtividades = new double[4];
	private static int contador = 0;
	
	private void init(String nome, boolean matriculado, int faltas, Turma turma) {
		this.nome = nome;
		this.matricula = ++contador;
		this.matriculado = matriculado;
		this.faltas = faltas;
		this.turma = turma;
		this.adicionarNotas(-1, -1, -1, -1);
	}
	
	public Aluno() {
		this.init("Fulano", false, 0, null);
	}
	
	public Aluno(String nome, boolean matriculado, int faltas, Turma turma) {
		this.init(nome, matriculado, faltas, turma);
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getMatricula() {
		return matricula;
	}
	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	
	public boolean isMatriculado() {
		return matriculado;
	}

	public void setMatriculado(boolean matriculado) {
		this.matriculado = matriculado;
	}

	public int getFaltas() {
		return faltas;
	}

	public void setFaltas(int faltas) {
		this.faltas = faltas;
	}

	public Turma getTurma() {
		return turma;
	}

	public void setTurma(Turma turma) {
		this.turma = turma;
	}

	public double[] getNotasAtividades() {
		return notasAtividades;
	}

	public void setNotasAtividades(double[] notasAtividades) {
		this.notasAtividades = notasAtividades;
	}

	public static int getContador() {
		return contador;
	}

	public static void setContador(int contador) {
		Aluno.contador = contador;
	}

	public void realizarMatricula(Turma turma) {
		this.turma = turma;
		if (!matriculado) {
			turma.adicionaAluno(this);
			this.matriculado = true;
		}
	}
	
	public void adicionarNotas(double nota1, double nota2, double nota3, double nota4) {
		this.notasAtividades[0] = nota1;
		this.notasAtividades[1] = nota2;
		this.notasAtividades[2] = nota3;
		this.notasAtividades[3] = nota4;
	}
	
	public void adicionarNotas(double nota, int atividade) {
		switch(atividade) {
			case 1:
				this.notasAtividades[0] = nota;
				break;
			case 2:
				this.notasAtividades[1] = nota;
				break;
			case 3:
				this.notasAtividades[2] = nota;
				break;
			case 4:
				this.notasAtividades[3] = nota;
				break;
		}
	}
	
	public int frequencia() {
		return Turma.getNumeroMaximoDeAulas() - this.faltas;
	}
	
	public String aprovado() {
		boolean aprovado = false;
		double somaNotas = 0;
		String resp = "";
		for (int i=0; i<4; i++) {
			if (notasAtividades[i] >= 0) {
				somaNotas += notasAtividades[i];
			}
		}
		if (somaNotas >= 60 && this.frequencia() >= ((Turma.getNumeroMaximoDeAulas() * 75)/100)) {
			aprovado = true;
		}
		
		if (aprovado) {
			resp = "APROVADO";
		} else {
			resp = "REPROVADO";
		}
		return resp;
	}
	
	public double somaDasNotas() {
		double soma = 0;
		
		for (int i=0; i<this.notasAtividades.length; i++) {
			if (this.notasAtividades[i] > 0) {
				soma += this.notasAtividades[i];
			}
		}
		
		return soma;
	}
	
	public double gerarDesempenho() {
		int pesoNota = 80;
		int pesoFrequencia = 20;
		
		return ((this.somaDasNotas() * pesoNota) + (this.frequencia() * pesoFrequencia)) / (pesoNota + pesoFrequencia);
	}
}
