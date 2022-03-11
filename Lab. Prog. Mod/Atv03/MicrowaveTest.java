import org.junit.jupiter.api.Test;
import static org.junit.jupter.api.Assertions.*;

public class MicrowaveTest {

    @Test
    public void timer() {
        Microwave m = new Microwave();

        m.timer(10, 10);
        int minutes = m.getMinutes();
        int seconds = m.getSeconds();

        assertEquals(10, minutes);
        assertEquals(10, seconds);
    }
}
