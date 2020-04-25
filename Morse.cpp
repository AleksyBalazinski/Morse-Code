#include "pch.h"
#include <iostream> 
#include <string>
#include <windows.h>

using namespace std;
/*MORSE CODE INFO:  The dot duration is the basic unit of time measurement in Morse code transmission. The duration of a dash is three times the duration 
of a dot. Each dot or dash within a character is followed by period of signal absence, called a space, equal to the dot duration. The letters of a word 
are separated by a space of duration equal to three dots, and the words are separated by a space equal to seven dots
Let's set a dot (one unit) equal to 500ms. Thus dash is 1500ms. Break within one letter is 500ms. Break between letters is 1500ms. Break between words ("_")
is 3500ms*/

void dot(double speed)
{
	Beep(432, 500/speed);
}
void dash(double speed)
{
	Beep(432, 1500/speed);
}
void breakWithinLetter(double speed)
{
	Sleep(500/speed);
}
void breakBetweenLetters(double speed)
{
	Sleep(1500/speed);
}
void breakBetweenWords(double speed)
{
	Sleep(3500/speed);
}
int main()
{
	cout << "Write your message (use _ as space!)\n";
	string message;
	cin >> message;
	cout << "What you've written is: " << message <<"\n";
	cout << "length of that is: " << message.length() << "\n";
	string letter;
	double speed;
	cout << "One unit is by default equal to 500ms you can\n" << "How times faster do you want it to be? (answ>1 - faster; answr<1 - slower)\n";
	cin >> speed;
	for (int i = 0; i < message.length(); i++)   
	{
		letter = message.substr(i, 1);
		cout << letter << "\n";
		if (letter == "a")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "b")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "c")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "d")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "e")
		{
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "f")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "g")
		{
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "h")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "i")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "j")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "k")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "l")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "m")
		{
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "n")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "o")
		{
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "p")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "q")
		{
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "r")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "s")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "t")
		{
			dash(speed);
			breakWithinLetter(speed);
		}
		if (letter == "u")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "v")
		{
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "w")
		{
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "x")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "y")
		{
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "z")
		{
			dash(speed);
			breakWithinLetter(speed);
			dash(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakWithinLetter(speed);
			dot(speed);
			breakBetweenLetters(speed);
		}
		if (letter == "_")
		{
			breakBetweenWords(speed);
		}
	}

}
