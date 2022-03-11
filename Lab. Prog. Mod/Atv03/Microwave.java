package microwavesrc;

public class Microwave {
	int minutes;
	int seconds;
	boolean paused = false;
	boolean on = false;
	boolean doorOpen = false;

	public int getMinutes() {
		return minutes;
	}

	public void setMinutes(int minutes) {
		this.minutes = minutes;
	}

	public int getSeconds() {
		return seconds;
	}

	public void setSeconds(int seconds) {
		this.seconds = seconds;
	}

	public boolean isPaused() {
		return paused;
	}

	public void setPaused(boolean paused) {
		this.paused = paused;
	}

	public boolean isOn() {
		return on;
	}

	public void setOn(boolean on) {
		this.on = on;
	}

	public boolean isDoorOpen() {
		return doorOpen;
	}

	public void setDoorOpen(boolean doorOpen) {
		this.doorOpen = doorOpen;
	}
	/* Esse método inicia o timer do microondas de acordo com os minutos
	 * e segundos passados por parâmetro. */
	public void timer(int minutes, int seconds) {
		setMinutes(minutes);
		setSeconds(seconds);
	}
	/* Esse método pausa o timer do microondas. */
	public void pause() {
		setPaused(true);
	}
	/* Esse método reinicia o timer do microondas. */
	public void reeset() {
		setSeconds(0);
		setMinutes(0);
	}
	/* Esse método desliga o microondas. */
	public void turnOff() {
		setOn(false);
	}
	/* Esse método liga o microondas somente se a porta estiver fechada. */
	public void turnOn() {
		if (!this.doorOpen) {
			setOn(true);
		} else {
			new Exception("ERRO: Porta aberta, impossível ligar o microondas");
		}
	}
	/* Esse método abre a porta do microondas somente se ele estiver desligado. */
	public void openTheDoor() {
		if (!this.on) {
			setDoorOpen(true);
		} else {
			new Exception("ERRO: Microondas ligado, impossível abrir a porta");
		}
	}
	/* Esse método fecha a porta do microondas. */
	public void closeTheDoor() {
		setDoorOpen(false);
	}
	
}
