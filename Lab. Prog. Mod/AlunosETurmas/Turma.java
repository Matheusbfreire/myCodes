package app;

import java.util.LinkedList;

public abstract class Turma {
	protected String materia;
	protected String codigoTurma;
	protected int nivel;
	protected int diaAula;
	protected int turno;
	protected static final int numeroMaximoDeAulas = 20;
	protected LinkedList<Aluno> listaAlunos = new LinkedList<>();
	
	private void init(String materia, int nivel, int diaAula, int turno) {
		this.materia = materia;
		this.nivel = nivel;
		this.diaAula = diaAula;
		this.turno = turno;
		this.gerarCodigo();
	}
	
	public Turma() {
		this.init("matematica", 1, 1, 1);
	}
	
	public Turma(String materia, int nivel, int diaAula, int turno) {
		this.init(materia, nivel, diaAula, turno);
	}
	
	public String getMateria() {
		return materia;
	}

	public void setMateria(String materia) {
		this.materia = materia;
	}

	public String getCodigoTurma() {
		return codigoTurma;
	}

	public void setCodigoTurma(String codigoTurma) {
		this.codigoTurma = codigoTurma;
	}

	public int getNivel() {
		return nivel;
	}

	public void setNivel(int nivel) {
		this.nivel = nivel;
	}

	public int getDiaAula() {
		return diaAula;
	}

	public void setDiaAula(int diaAula) {
		this.diaAula = diaAula;
	}

	public int getTurno() {
		return turno;
	}

	public void setTurno(int turno) {
		this.turno = turno;
	}

	public static final int getNumeroMaximoDeAulas() {
		return numeroMaximoDeAulas;
	}

	public LinkedList<Aluno> getListaAlunos() {
		return listaAlunos;
	}

	public void setListaAlunos(LinkedList<Aluno> listaAlunos) {
		this.listaAlunos = listaAlunos;
	}

	abstract void adicionaAluno(Aluno aluno);
	
	abstract void gerarCodigo();
	
	public double mediaDosAlunos() {
		double soma = 0;
		
		for (int i=0; i<this.listaAlunos.size(); i++) {
			soma += this.listaAlunos.get(i).somaDasNotas();
		}
		
		return (soma/this.listaAlunos.size());
	}
	
	public double mediaDeFrequencia() {
		double soma = 0;
		
		for (int i=0; i<this.listaAlunos.size(); i++) {
			soma += this.listaAlunos.get(i).getFrequencia();
		}
		
		return (soma/this.listaAlunos.size());
	}
	
	public abstract String gerarRelatorioDeAlunos();
	
	public void ordenaNomeAlunos() {
		int tamanho = this.listaAlunos.size();
		String nome = "";
		String comparador = "";
		Aluno aluno;
		Aluno newAluno;
		
		for (int i=0; i<tamanho; i++) {
			nome = this.listaAlunos.get(i).getNome();
			for (int z=0; z<tamanho; z++) {
				comparador = this.listaAlunos.get(z).getNome();
				if (comparador.compareTo(nome) > 0) {
					aluno = this.listaAlunos.get(i);
					newAluno = this.listaAlunos.get(z);
					this.listaAlunos.remove(i);
					this.listaAlunos.add(i, newAluno);
					this.listaAlunos.remove(z);
					this.listaAlunos.add(z, aluno);
				}
			}
		}
	}
	
	public abstract void alterarFrequencia(Aluno aluno);
}
