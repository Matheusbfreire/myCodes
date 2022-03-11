package microwavesrc;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class MicrowaveTest {
	
	Microwave microwave;
	
	@BeforeEach
	public void init() {
		microwave = new Microwave();
	}
	/*
	 * Testa se o método timer está setando as variáveis minutes e seconds.
	 */
	@Test
	public void timerTest() {
		microwave.setTimer(1, 10);
		
		assertEquals(1, microwave.minutes);
		assertEquals(10, microwave.seconds);
	}
	/*
	 * Testa se o método pauseTimer está pausando o timer do microondas.
	 */
	@Test
	public void pausingTimerTest() {
		microwave.pauseTimer();
		
		assertTrue(microwave.paused);
	}
	/*
	 * Testa se o método reesetTimer está resetando as variáveis minutes e seconds.
	 */
	@Test
	public void reesetingTimerTest() {
		microwave.reesetTimer();
		
		assertEquals(0, microwave.minutes);
		assertEquals(0, microwave.seconds);
	}
	/*
	 * Testa se o método turnOff está desligando o microondas.
	 */
	@Test
	public void turningTheMicrowaveOffTest() {
		microwave.turnOff();
		
		assertFalse(microwave.on);
	}
	/*
	 * Testa se o método turnOn está ligando o microondas somente se a porta estiver fechada.
	 */
	@Test
	public void turningTheMicrowaveOnIfTheDoorIsClosedTest() throws Exception {
		microwave.closeTheDoor();
		microwave.turnOn();

		assertFalse(microwave.doorOpen);
		assertTrue(microwave.on);
		assertFalse(microwave.paused);
		
		try {
			microwave.turnOff();
			microwave.openTheDoor();
			microwave.turnOn();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
	/*
	 * Testa se o método openTheDoor está abrindo a porta somente se o microondas estiver fechado.
	 */
	@Test
	public void openingTheDoorIfTheMicrowaveIsOff() throws Exception {
		microwave.openTheDoor();

		assertFalse(microwave.on);
		assertTrue(microwave.doorOpen);
		
		try {
			microwave.closeTheDoor();
			microwave.turnOn();
			microwave.openTheDoor();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
	/*
	 * Testa se o método passASecond está atualizando o tempo do microondas e sinalizando
	 * essa passagem de tempo.
	 */
	@Test
	public void updatingTimerTest() throws Exception {
			microwave.setTimer(1, 10);
			microwave.passASecond();
			
			assertEquals(1, microwave.minutes);
			assertEquals(9, microwave.seconds);
			
			microwave.setTimer(1, 0);
			microwave.passASecond();
			
			assertEquals(0, microwave.minutes);
			assertEquals(59, microwave.seconds);

		try {
			microwave.reesetTimer();
			microwave.passASecond();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
	
}
