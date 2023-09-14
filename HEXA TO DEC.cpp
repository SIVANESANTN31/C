#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{

	char s[32];
	printf("enter the hexadecimal number: ");
	scanf("%s",&s);
	int decimalnumber, i;
	
	int cnt;
	
	int digit;

	cnt = 0;
	decimalnumber = 0;
	
	for (i = (strlen(s) - 1); i >= 0; i--) {
		
		switch (s[i]) {
		case 'A':
			digit = 10;
			break;
		case 'B':
			digit = 11;
			break;
		case 'C':
			digit = 12;
			
			break;
		case 'D':
			digit = 13;
			break;
		case 'E':
			digit = 14;
			break;
		case 'F':
			digit = 15;
			break;
		default:
			digit = s[i] - 0x30;
		}
		
		decimalnumber = decimalnumber + (digit)*pow((double)16, (double)cnt);
		cnt++;
	}
	printf("Decimal number is: %d", decimalnumber);
	return 0;
}

