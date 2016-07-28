/*
  Alpha.cpp - Library for creating letters in five dot marquee text.
  Created by Matthew Hebert, June 22, 2016.
  Released into the public domain.
*/


#include "Arduino.h"
#include "Alpha.h"
#include "Letters.h"


Alpha::Alpha()
{
}

int Alpha::letterPattern(char _letter)
{
	Serial.print(_letter);
	Serial.print('\t');
	switch(_letter){
		case 'A':
			pattern = 0;
			return pattern;
			break;
		case 'B':
			pattern = 1;
			return pattern;
			break;
		case 'C':
			pattern = 2;
			return pattern;
			break;
		case 'D':
			pattern = 3;
			return pattern;
			break;
		case 'E':
			pattern = 4;
			return pattern;
			break;
		case 'F':
			pattern = 5;
			return pattern;
			break;
		case 'G':
			pattern = 6;
			return pattern;
			break;
		case 'H':
			pattern = 7;
			return pattern;
			break;
		case 'I':
			pattern = 8;
			return pattern;
			break;
		case 'J':
			pattern = 9;
			return pattern;
			break;
		case 'K':
			pattern = 10;
			return pattern;
			break;
		case 'L':
			pattern = 11;
			return pattern;
			break;
		case 'M':
			pattern = 12;
			return pattern;
			break;
		case 'N':
			pattern = 13;
			return pattern;
			break;
		case 'O':
			pattern = 14;
			return pattern;
			break;
		case 'P':
			pattern = 15;
			return pattern;
			break;
		case 'Q':
			pattern = 16;
			return pattern;
			break;
		case 'R':
			pattern = 17;
			return pattern;
			break;
		case 'S':
			pattern = 18;
			return pattern;
			break;
		case 'T':
			pattern = 19;
			return pattern;
			break;
		case 'U':
			pattern = 20;
			return pattern;
			break;
		case 'V':
			pattern = 21;
			return pattern;
			break;
		case 'W':
			pattern = 22;
			return pattern;
			break;
		case 'X':
			pattern = 23;
			return pattern;
			break;
		case 'Y':
			pattern = 24;
			return pattern;
			break;
		case 'Z':
			pattern = 25;
			return pattern;
			break;
		}
}



