
#include "Arduino.h"
#include "morse.h"



void morse::CheckLetters(String Wordstring)
{

    _Wordstring.toLowerCase();

    Wordstring = _Wordstring;

    char thisCharacter;
    for (int i = 0; i < Wordstring.length(); i++ )
    {
        thisCharacter = Wordstring[i];
        switch( thisCharacter )
        {
            case ' ':
            stopW();
            break;

            case '.':
            stopS();
            break;

            case 'a':
            A();
            break;

            case 'b':
            B();
            break;

            case 'c':
            C();
            break;

            case 'd':
            D();
            break;

            case 'e':
            E();
            break;

            case 'f':
            Fud();
            break;

            case 'g':
            G();
            break;

            case 'h':
            H();
            break;

            case 'i':
            I();
            break;

            case 'j':
            J();
            break;

            case 'k':
            K();
            break;

            case 'l':
            L();
            break;

            case 'm':
            M();
            break;

            case 'n':
            N();
            break;

            case 'o':
            O();
            break;

            case 'p':
            P();
            break;  

            case 'q':
            Q();
            break;

            case 'r':
            R();
            break;

            case 's':
            S();
            break;

            case 't':
            T();
            break;

            case 'u':
            U();
            break;

            case 'v':
            V();
            break;

            case 'w':
            W();
            break;

            case 'x':
            X();
            break;

            case 'y':
            Y();
            break;

            case 'z':
            Z();
            break;

            default:
            break;
        };
    };
}
