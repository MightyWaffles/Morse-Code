
#include "Arduino.h"
#include "morse.h"



void morse::dot()
{
    digitalWrite(_pin, HIGH);
    delay(200);
    digitalWrite(_pin, LOW);
    delay(200);
}

void morse::dash()
{
    digitalWrite(_pin, HIGH);
    delay(600);
    digitalWrite(_pin, LOW);
    delay(200);
}

void morse::stopL()
{
    digitalWrite(_pin, LOW);
    delay(200);
}

void morse::stopW()
{
    digitalWrite(_pin, LOW);
    delay(800);
}

void morse::stopS()
{
    digitalWrite(_pin, LOW);
    delay(4000);
}
