int ms = 500;

void setup()
{
    // Function call occurs when machine is started
    // Used to initialize variables, pin modes and libraries
    pinMode(LED_BUILTIN, OUTPUT); // LED_BUILTIN = pin number 13
}

void loop()
{
    // Function to actively control board
    digitalWrite(LED_BUILTIN, HIGH);
    delay(ms);

    digitalWrite(LED_BUILTIN, LOW);
    delay(ms);
}