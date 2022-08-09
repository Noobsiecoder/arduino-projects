int redPinNum = 2;
int yellowPinNum = 3;
int greenPinNum = 4;

void setup()
{
    // Function call occurs when machine is started
    // Used to initialize variables, pin modes and libraries
    pinMode(redPinNum, OUTPUT);
    pinMode(yellowPinNum, OUTPUT);
    pinMode(greenPinNum, OUTPUT);
}

void redSignal()
{
    digitalWrite(redPinNum, HIGH);
    digitalWrite(yellowPinNum, LOW);
    digitalWrite(greenPinNum, LOW);
}

void yellowSignal()
{
    digitalWrite(redPinNum, LOW);
    digitalWrite(yellowPinNum, HIGH);
    digitalWrite(greenPinNum, LOW);
}

void greenSignal()
{
    digitalWrite(redPinNum, LOW);
    digitalWrite(yellowPinNum, LOW);
    digitalWrite(greenPinNum, HIGH);
}

void loop()
{

    // Function to actively control board
    redSignal();
    delay(2500);

    yellowSignal();
    delay(400);

    greenSignal();
    delay(3000);

    yellowSignal();
    delay(500);

    redSignal();
}