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
	switch(_letter){
		case 'A':
			pattern = 0;
			break;
		case 'B':
			pattern = 1;
			break;
		case 'C':
			pattern = 2;
			break;
		case 'D':
			pattern = 3;
			break;
		case 'E':
			pattern = 4;
			break;
		case 'F':
			pattern = 5;
			break;
		case 'G':
			pattern = 6;
			break;
		case 'H':
			pattern = 7;
			break;
		case 'I':
			pattern = 8;
			break;
		case 'J':
			pattern = 9;
			break;
		case 'K':
			pattern = 10;
			break;
		case 'L':
			pattern = 11;
			break;
		case 'M':
			pattern = 12;
			break;
		case 'N':
			pattern = 13;
			break;
		case 'O':
			pattern = 14;
			break;
		case 'P':
			pattern = 15;
			break;
		case 'Q':
			pattern = 16;
			break;
		case 'R':
			pattern = 17;
			break;
		case 'S':
			pattern = 18;
			break;
		case 'T':
			pattern = 19;
			break;
		case 'U':
			pattern = 20;
			break;
		case 'V':
			pattern = 21;
			break;
		case 'W':
			pattern = 22;
			break;
		case 'X':
			pattern = 23;
			break;
		case 'Y':
			pattern = 24;
			break;
		case 'Z':
			pattern = 25;
			break;
		}
}



