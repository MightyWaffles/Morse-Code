
#include "Arduino.h"
#include "morse.h"



void morse::A()
{
	dot(); dash(); stopL();
}

void morse::B()
{
	dash(); dot(); dot(); dot(); stopL();
}

void morse::C()
{
	dash(); dot(); dash(); dot(); stopL(); 
}

void morse::D()
{
	dash(); dot(); dot(); stopL(); 
}

void morse::E()
{
	dot(); stopL(); 
}

void morse::Fud()
{
	dot(); dot(); dash(); dot(); stopL(); 
}

void morse::G()
{
	dash(); dash(); dot(); stopL(); 
}

void morse::H()
{
	dot(); dot(); dot(); dot(); stopL(); 
}

void morse::I()
{
	dot(); dot(); stopL(); 
}

void morse::J()
{
	dot(); dash(); dash(); dash(); stopL(); 
}

void morse::K()
{
	dash(); dot(); dash(); stopL(); 
}

void morse::L()
{
	dot(); dash(); dot(); dot(); stopL(); 
}

void morse::M()
{
	dash(); dash(); stopL(); 
}

void morse::N()
{
	dash(); dot(); stopL(); 
}

void morse::O()
{
	dash(); dash(); dash(); stopL(); 
}

void morse::P()
{
	dot(); dash(); dash(); dot(); stopL(); 
}

void morse::Q()
{
	dash(); dash(); dot(); dash(); stopL(); 
}

void morse::R()
{	
	dot(); dash(); dot(); stopL(); 
}

void morse::S()
{
	dot(); dot(); dot(); stopL(); 
}

void morse::T()
{
	dash(); stopL(); 
}

void morse::U()
{
	dot(); dot(); dash(); stopL(); 
}

void morse::V()
{
	dot(); dot(); dot(); dash(); stopL(); 
}

void morse::W()
{
	dot(); dash(); dash(); stopL(); 
}

void morse::X()
{
	dash(); dot(); dot(); dash(); stopL(); 
}

void morse::Y()
{
	dash(); dot(); dash(); dash(); stopL(); 
}

void morse::Z()
{
	dash(); dash(); dot(); dot(); stopL(); 
}
