
#ifndef morse_h
#define morse_h
#include "Arduino.h"


class morse
{
	private:
		int _pin = 13;
		String _Wordstring = "";
		String _fromSerial = "";
		
	public:
		void AndStuff(int TheNewPin);
		void CheckLetters(String Wordstring);
		void AndThings();

		void dot();
		void dash();
		void stopL();
		void stopW();
		void stopS();
		void A();
		void B();
		void C();
		void D();
		void E();
		void Fud();
		void G();
		void H();
		void I();
		void J();
		void K();
		void L();
		void M();
		void N();
		void O();
		void P();
		void Q();
		void R();
		void S();
		void T();
		void U();
		void V();
		void W();
		void X();
		void Y();
		void Z();
};

#endif
