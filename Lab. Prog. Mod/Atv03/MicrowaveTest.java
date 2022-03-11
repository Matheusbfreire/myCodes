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

	@Test
	public void timerTest() {
		microwave.setTimer(1, 10);
		
		assertEquals(1, microwave.minutes);
		assertEquals(10, microwave.seconds);
	}
	
	@Test
	public void pausingTimerTest() {
		microwave.pauseTimer();
		
		assertTrue(microwave.paused);
	}
	
	@Test
	public void reesetingTimerTest() {
		microwave.reesetTimer();
		
		assertEquals(0, microwave.minutes);
		assertEquals(0, microwave.seconds);
	}
	
	@Test
	public void turningTheMicrowaveOffTest() {
		microwave.turnOff();
		
		assertFalse(microwave.on);
	}
	
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
