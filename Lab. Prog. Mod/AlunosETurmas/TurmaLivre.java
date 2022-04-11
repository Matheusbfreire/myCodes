package app;

public class TurmaLivre extends Turma {
	@Override
	public void gerarCodigo() {
		this.codigoTurma = String.format("%d" + "L",(this.nivel * 100) + (this.diaAula * 10) + this.turno);
	}
	
	@Override
	public void adicionaAluno(Aluno aluno) {
		listaAlunos.add(aluno);
		this.ordenaNomeAlunos();
	}
	
	@Override
	public void alterarFrequencia(Aluno aluno) {
		aluno.setFrequencia(aluno.getFrequencia() + 1);
	}
	
	@Override
	public String gerarRelatorioDeAlunos() {
		String relatorio= "";

		relatorio += String.format("| %-25s | %-9s |\n", "Nome", "Status");
		for (int i=0; i<this.listaAlunos.size(); i++) {
			if (this.listaAlunos.get(i).isAprovado()) {
				relatorio += String.format("| %-25s | APROVADO |\n", this.listaAlunos.get(i).getNome());
			} else {
				relatorio += String.format("| %-25s | REPROVADO |\n", this.listaAlunos.get(i).getNome());
			}
		}
		
		return relatorio;
	}
}
