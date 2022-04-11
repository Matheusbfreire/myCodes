package app;

import java.util.LinkedList;

public class TurmaPresencial extends TurmasComNotas {
	LinkedList<Atividade> atividades = new LinkedList<>();
	
	@Override
	public void gerarCodigo() {
		this.codigoTurma = String.format("%d",(this.nivel * 100) + (this.diaAula * 10) + this.turno);
	}
	
	@Override
	public void adicionaAluno(Aluno aluno) {
		if (listaAlunos.size() < 20) {
			listaAlunos.add(aluno);
			this.ordenaNomeAlunos();
		}
	}
	
	@Override
	public void alterarFrequencia(Aluno aluno) {
		aluno.setFrequencia(aluno.getFrequencia() - 1);
	}
	
	@Override
	public String gerarRelatorioDeAlunos() {
		String relatorio= "";

		relatorio += String.format("| %-25s | %-10s | %-9s |\n", "Nome", "Nota Final", "Status");
		for (int i=0; i<this.listaAlunos.size(); i++) {
			if (this.listaAlunos.get(i).isAprovado()) {
				relatorio += String.format("| %-25s | %-10.2f | APROVADO |\n", this.listaAlunos.get(i).getNome(), this.listaAlunos.get(i).somaDasNotas());
			} else {
				relatorio += String.format("| %-25s | %-10.2f | REPROVADO |\n", this.listaAlunos.get(i).getNome(), this.listaAlunos.get(i).somaDasNotas());
			}
		}
		
		return relatorio;
	}
	
	@Override
	public String gerarRelatorioDaTurma() {
		String relatorio= "";

		relatorio += String.format("| %-14s | %-19s | %-25s |\n", "Media de notas", "Media de frequencia", "Melhor aluno");
		relatorio += String.format("| %-14.2f | %-19.2f | %-25s |\n", this.mediaDosAlunos(), this.mediaDeFrequencia(), this.alunoComMelhorDesempenho().getNome());
		
		return relatorio;
	}
	
	@Override
	public double gerarDesempenho(Aluno aluno) {
		int pesoNota = 80;
		int pesoFrequencia = 20;
		
		return ((aluno.somaDasNotas() * pesoNota) + (aluno.getFrequencia() * pesoFrequencia)) / (pesoNota + pesoFrequencia);
	}
	
	@Override
	public Aluno alunoComMelhorDesempenho() {
		double desempenhoAtual = 0;
		double melhorDesempenho = 0;
		Aluno aluno = new Aluno();
		
		for (int i=0; i<this.listaAlunos.size(); i++) {
			if (i == 0) {
				aluno = this.listaAlunos.get(i);
				melhorDesempenho = gerarDesempenho(this.listaAlunos.get(i));
			} else {
				desempenhoAtual = gerarDesempenho(this.listaAlunos.get(i));
			}
			
			if (desempenhoAtual > melhorDesempenho) {
				aluno = this.listaAlunos.get(i);
				melhorDesempenho = desempenhoAtual;
			}
		}
		
		return aluno;
	}
}
