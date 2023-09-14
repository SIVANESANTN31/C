#include<stdio.h>
int main()
{
	FILE*fp;
	fp=fopen("fr.txt","w");
	fprintf(fp,"try...\n");
	fclose(fp);
	return 0;
}
