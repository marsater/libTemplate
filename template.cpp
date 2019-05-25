#include "Arduino.h"
#include "template.h"

Template::Template(int pin)
{
    _pin = pin;
    pinMode(_pin, OUTPUT);
}

void Template::main()
{
    digitalWrite(_pin, !digitalRead(_pin));
}
