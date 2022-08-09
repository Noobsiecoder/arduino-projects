int pinNumber = 9; // PWM pin

void setup()
{
    // Function call occurs when machine is started
    // Used to initialize variables, pin modes and libraries
    pinMode(pinNumber, OUTPUT);
}

void loop()
{
    // Function to actively control board
    
    // analogWrite method's value ranges from 0 - 255
    // More about PWM - https://www.arduino.cc/en/Tutorial/Foundations/PWM
    for (int brightness = 0; brightness < 255; brightness++) {
        analogWrite(pinNumber, brightness);
        delay(10);
    }
    
    for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(pinNumber, brightness);
        delay(10);
    }

    delay(200);
}