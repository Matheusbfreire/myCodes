package app;

import java.util.LinkedList;

public class Aluno {
	private String nome;
	private int matricula;
	private boolean matriculado;
	private int frequencia;
	private boolean aprovado;
	private Turma turma;
	private static int contador = 0;
	private LinkedList<Atividade> atividades = new LinkedList<>();
	
	private void init(String nome) {
		this.nome = nome;
		this.matricula = ++contador;
		this.matriculado = false;
		this.aprovado = false;
	}
	
	public Aluno() {
		this.init("Fulano");
	}
	
	public Aluno(String nome) {
		this.init(nome);
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

	public int getFrequencia() {
		return frequencia;
	}

	public void setFrequencia(int frequencia) {
		this.frequencia = frequencia;
	}

	public boolean isAprovado() {
		return aprovado;
	}

	public void setAprovado(boolean aprovado) {
		this.aprovado = aprovado;
	}

	public Turma getTurma() {
		return turma;
	}

	public void setTurma(Turma turma) {
		this.turma = turma;
	}

	public static int getContador() {
		return contador;
	}

	public static void setContador(int contador) {
		Aluno.contador = contador;
	}

	public LinkedList<Atividade> getAtividades() {
		return atividades;
	}

	public void setAtividades(LinkedList<Atividade> atividades) {
		this.atividades = atividades;
	}

	public void realizarMatricula(Turma turma) {
		this.turma = turma;
		if (!matriculado) {
			turma.adicionaAluno(this);
			this.matriculado = true;
			if (turma.getClass().getSimpleName() == "TurmaPresencial") {
				this.frequencia = Turma.getNumeroMaximoDeAulas();
			} else {
				this.frequencia = 0;
			}
		}
	}
	
	public void aprovado() {
		double somaNotas = 0;
		for (int i=0; i<atividades.size(); i++) {
			if (atividades.get(i).getNota() >= 0) {
				somaNotas += atividades.get(i).getNota();
			}
		}
		if (turma.getClass().getSimpleName() == "TurmaPresencial") {
			if (somaNotas >= 60 && this.frequencia >= ((Turma.getNumeroMaximoDeAulas() * 75)/100)) {
				aprovado = true;
			}
		} else if (turma.getClass().getSimpleName() == "TurmaEad") {
			if (somaNotas >= 60) {
				aprovado = true;
			}
		} else if (turma.getClass().getSimpleName() == "TurmaLivre") {
			if (frequencia == Turma.getNumeroMaximoDeAulas()) {
				aprovado = true;
			}
		}
	}
	
	public double somaDasNotas() {
		double soma = 0;
		
		for (int i=0; i<atividades.size(); i++) {
			if (atividades.get(i).getNota() >= 0) {
				soma += atividades.get(i).getNota();
			}
		}
		
		return soma;
	}
}
