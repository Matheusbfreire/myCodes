package main;

import java.util.LinkedList;

import app.Aluno;
import app.Turma;

public class MainAlunosETurmas {
	public static void main(String[] args) {
		Turma turma = new Turma("ingles", 2, 2, 1);
		Aluno aluno = new Aluno("Nando", false, 10, turma);
		LinkedList<Aluno> lista = new LinkedList<>();
		
		aluno.adicionarNotas(20, 25, 10, 5);
		aluno.realizarMatricula(turma);
		
		aluno = new Aluno("Matheus", false, 10, turma);
		aluno.adicionarNotas(20, 25, 10, 15);
		aluno.realizarMatricula(turma);
		
		aluno = new Aluno();
		aluno.realizarMatricula(turma);
		aluno.adicionarNotas(20, 25, 10, 5);
		
		lista = turma.getListaAlunos();
		
		for (int i=0; i<lista.size(); i++) {
			System.out.println(lista.get(i).getNome());
		}
		
		System.out.println(String.format("\n%.2f", turma.mediaDosAlunos()));
		System.out.println(String.format("%.2f\n",turma.mediaDeFrequencia()));
		
		turma.ordenaNomeAlunos();
		
		lista = turma.getListaAlunos();
		
		for (int i=0; i<lista.size(); i++) {
			System.out.println(lista.get(i).getNome());
		}
		
		System.out.println("\n" + turma.gerarRelatorio());
		
		System.out.println(turma.alunoComMelhorDesempenho());
		
		System.out.println(turma.getCodigoTurma() + " " + turma.getMateria());
	}
}
