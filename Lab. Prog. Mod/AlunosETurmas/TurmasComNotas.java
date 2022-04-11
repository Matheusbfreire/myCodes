package app;

public abstract class TurmasComNotas extends Turma {
	public abstract String gerarRelatorioDaTurma();
	
	public abstract double gerarDesempenho(Aluno aluno);
	
	public abstract Aluno alunoComMelhorDesempenho();
}
