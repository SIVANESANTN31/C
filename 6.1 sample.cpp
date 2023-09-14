	#include <stdio.h>  
    int	main()
	{  
	   FILE *fp;  
	   fp = fopen("C:\Users\Ugender\Documents\file.txt", "r");//opening file  
	   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
	   fclose(fp);//closing file
	   return 0;  
	}  

