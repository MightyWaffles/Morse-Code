
#include "Arduino.h"
#include "morse.h"



void morse::AndThings()
{
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
