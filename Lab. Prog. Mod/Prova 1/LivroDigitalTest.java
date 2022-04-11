package app;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class LivroDigitalTest {

	LivroDigital livro = new LivroDigital("Cronicas de Narnia", new Autor(), 200, 119.99);

	@Test
	void testeDoPrecoDoLivroDigital() {
		assertEquals(129,59, livro.precoVenda());
	}

}
