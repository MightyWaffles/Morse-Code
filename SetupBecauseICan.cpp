
#include "Arduino.h"
#include "morse.h"



void morse::AndStuff(int TheNewPin)
{

	_Wordstring = "";
	_fromSerial = "";
	Serial.write("");
	Serial.begin(9600);

//-------------------------\\
	_pin = TheNewPin;
	pinMode(_pin, OUTPUT);
//--------------------------\\

	if(Serial.available())
	{	
		while(Serial.available())
		{
			_fromSerial = _fromSerial + (char)(Serial.read());    
		}

		_Wordstring = _fromSerial;
		Serial.print("You wrote: ");
		Serial.println(_fromSerial);
		_fromSerial = "";

	}	

	CheckLetters(_Wordstring);
}
