package app;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class LivroFisicoTest {
	
	LivroFisico livro = new LivroFisico("Cronicas de Narnia", new Autor(), 200, 119.99, 9.99);

	@Test
	void testeDoPrecoDoLivroFisico() {
		assertEquals(153,58, livro.precoVenda());
	}

}
