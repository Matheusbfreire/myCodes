package app;

import java.util.LinkedList;

public class Turma {
	private String materia;
	private int codigoTurma;
	private int nivel;
	private int diaAula;
	private int turno;
	private static int numeroMaximoDeAulas = 20;
	private LinkedList<Aluno> listaAlunos = new LinkedList<>();
	
	private void init(String materia, int nivel, int diaAula, int turno) {
		this.materia = materia;
		this.nivel = nivel;
		this.diaAula = diaAula;
		this.turno = turno;
		this.gerarCodigo();
	}
	
	public Turma() {
		this.init("", 0, 0, 0);
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

	public int getCodigoTurma() {
		return codigoTurma;
	}

	public void setCodigoTurma(int codigoTurma) {
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

	public static int getNumeroMaximoDeAulas() {
		return numeroMaximoDeAulas;
	}

	public static void setNumeroMaximoDeAulas(int numeroMaximoDeAulas) {
		Turma.numeroMaximoDeAulas = numeroMaximoDeAulas;
	}

	public LinkedList<Aluno> getListaAlunos() {
		return listaAlunos;
	}

	public void setListaAlunos(LinkedList<Aluno> listaAlunos) {
		this.listaAlunos = listaAlunos;
	}

	public void adicionaAluno(Aluno a) {
		if (listaAlunos.size() < 20) {
			listaAlunos.add(a);
			this.ordenaNomeAlunos();
		}
	}
	
	public void gerarCodigo() {
		this.codigoTurma = ((this.nivel * 100) + (this.diaAula * 10) + this.turno);
	}
	
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
			soma += this.listaAlunos.get(i).frequencia();
		}
		
		return (soma/this.listaAlunos.size());
	}
	
	public String gerarRelatorio() {
		String relatorio= "";

		relatorio += String.format("| %-9s | %-25s | %-10s | %-6s | %-9s |\n", "Matricula", "Nome", "Nota Final", "Faltas", "Status");
		for (int i=0; i<this.listaAlunos.size(); i++) {
			relatorio += String.format("| %-9d | %-25s | %-10.2f | %-6d | %-9s |\n", this.listaAlunos.get(i).getMatricula(), this.listaAlunos.get(i).getNome(), this.listaAlunos.get(i).somaDasNotas(), this.listaAlunos.get(i).getFaltas(), this.listaAlunos.get(i).aprovado());
		}
		
		return relatorio;
	}
	
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
	
	public String alunoComMelhorDesempenho() {
		double desempenhoAtual = 0;
		double melhorDesempenho = 0;
		String resp = "---------------------------\nAluno com Melhor Desempenho\n---------------------------\n";
		
		resp += String.format("| %-9s | %-25s | %-10s | %-6s | %-9s |\n", "Matricula", "Nome", "Nota Final", "Faltas", "Status");
		
		for (int i=0; i<this.listaAlunos.size(); i++) {
			if (i == 0) {
				melhorDesempenho = this.listaAlunos.get(i).gerarDesempenho();
			} else {
				desempenhoAtual = this.listaAlunos.get(i).gerarDesempenho();
			}
			
			if (desempenhoAtual > melhorDesempenho) {
				melhorDesempenho = desempenhoAtual;
				resp += String.format("| %-9d | %-25s | %-10.2f | %-6d | %-9s |\n", this.listaAlunos.get(i).getMatricula(), this.listaAlunos.get(i).getNome(), this.listaAlunos.get(i).somaDasNotas(), this.listaAlunos.get(i).getFaltas(), this.listaAlunos.get(i).aprovado());
			}
		}
		
		return resp;
	}
}
