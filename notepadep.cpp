#include<stdio.h>
int main()
{
	FILE*fp;
	fp=fopen("notepad.txt","w");
	fprintf(fp,"\nnotrpade\n\t natead");
	fclose(fp);
	return 0;
}
