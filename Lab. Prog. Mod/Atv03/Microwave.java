package microwavesrc;

public class Microwave {
	int minutes;
	int seconds;
	boolean paused;
	boolean on;
	boolean doorOpen;
	
	public Microwave() {
		setMinutes(0);
		setSeconds(0);
		setPaused(false);
		setOn(false);
		setDoorOpen(false);
	}

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
	/* Método para setar o timer do microondas de acordo com os minutos
	 * e segundos passados por parâmetro. */
	public void setTimer(int minutes, int seconds) {
		setMinutes(minutes);
		setSeconds(seconds);
		printTimePass();
	}
	/**
	 * Método para pausar o timer do microondas.
	 */
	public void pauseTimer() {
		setPaused(true);
	}
	/**
	 * Método para reiniciar o timer do microondas.
	 */
	public void reesetTimer() {
		setSeconds(0);
		setMinutes(0);
	}
	/**
	 * Método para desligar o microondas.
	 */
	public void turnOff() {
		setOn(false);
	}
	/**
	 * Método para ligar o microondas somente se a porta estiver fechada.
	 */
	public void turnOn() throws Exception {
		if (!this.doorOpen) {
			setOn(true);
			setPaused(false);
		} else {
			throw new Exception("ERRO: Porta aberta, impossível ligar o microondas");
		}
	}
	/**
	 * Método para abrir a porta do microondas somente se ele estiver desligado.
	 */
	public void openTheDoor() throws Exception {
		if (!this.on) {
			setDoorOpen(true);
		} else {
			throw new Exception("ERRO: Microondas ligado, impossível abrir a porta");
		}
	}
	/** 
	 * Método para fechar a porta do microondas.
	 */
	public void closeTheDoor() {
		setDoorOpen(false);
	}
	/** 
	 * Método para passar 1 segundo.
	 */
	public void passASecond() throws Exception {
		if (this.seconds >= 1) {
			setSeconds(this.seconds - 1);
			printTimePass();
		} else if (this.minutes >= 1) {
			setMinutes(this.minutes - 1);
			setSeconds(59);
			printTimePass();
		} else {
			throw new Exception("ERRO: Timer zerado, impossível passar tempo.");
		}
	}
	/** 
	 * Método para sinalizar a passagem de tempo.
	 */
	public void printTimePass() {
		System.out.println(this.minutes + ":" + this.seconds);
	}
	
}
