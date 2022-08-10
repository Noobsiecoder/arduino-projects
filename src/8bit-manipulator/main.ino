#include <math.h>

int pinNumber[4] = {11, 9, 5, 3};
int arr[4] = {0, 0, 0, 0};

void setup()
{
    // Function call occurs when machine is started
    // Used to initialize variables, pin modes and libraries
    pinMode(pinNumber[0], OUTPUT);
    pinMode(pinNumber[1], OUTPUT);
    pinMode(pinNumber[2], OUTPUT);
    pinMode(pinNumber[3], OUTPUT);
}

void displayLED(int index, int value)
{
    if (value == 1)
    {
        digitalWrite(pinNumber[index], HIGH);
    }
    else
    {
        digitalWrite(pinNumber[index], LOW);
    }
    delay(5);
}

void loop()
{
    // Function to actively control board
    for (int i = 1; i < pow(4, 2); i++)
    {
        int temp = i;
        int index = 3;
        while (temp > 0 && index > -1)
        {
            arr[index--] = temp % 2;
            temp /= 2;
        }

        for (int j = 0; j < 4; j++)
            displayLED(j, arr[j]);
        delay(750);
    }

    for (int j = 0; j < 4; j++)
    {
        displayLED(j, 0);
        arr[j] = 0;
    }
    delay(1000);
}
