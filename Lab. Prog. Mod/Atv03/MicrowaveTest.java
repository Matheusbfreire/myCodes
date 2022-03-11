package microwavesrc;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class MicrowaveTest {

	@Test
	void timerTest() {
		Microwave m = new Microwave();
		
		m.timer(10, 10);
		
		assertEquals(10, m.minutes);
		assertEquals(10, m.seconds);
	}
	
	@Test
	void pausingTimerTest() {
		Microwave m = new Microwave();
		
		m.pause();
		
		assertTrue(m.paused);
	}
	
	@Test
	void reesetingTimerTest() {
		Microwave m = new Microwave();
		
		m.reeset();
		
		assertEquals(0, m.minutes);
		assertEquals(0, m.seconds);
	}
	
	@Test
	void turningTheMicrowaveOffTest() {
		Microwave m = new Microwave();
		
		m.turnOff();
		
		assertFalse(m.on);
	}
	
	@Test
	void turningTheMicrowaveOnIfTheDoorIsClosedTest() {
		Microwave m = new Microwave();

		m.turnOn();

		assertFalse(m.doorOpen);
		assertTrue(m.on);
	}
	
	@Test
	void openingTheDoorIfTheMicrowaveIsOff() {
		Microwave m = new Microwave();

		m.openTheDoor();

		assertFalse(m.on);
		assertTrue(m.doorOpen);
	}
	
}
