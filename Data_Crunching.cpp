/* Crunches data from different TSV files and aggregates them to output file using C program */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2,*f3,*f4;        // declaring the file pointers
	char ch;
	f1=fopen("ip_1m.tsv","r");              // reading the TSV files
	f2=fopen("user_email_hash.1m.tsv","r");
	f3=fopen("plain_32m.tsv","r");
	
	f4=fopen("output_34m.tsv","w");   // write to the different TSV file
	
	while(1)       // Crunching data from 1st TSV file into output TSV file
	{
		ch=fgetc(f1);
		if(ch==EOF)
		break;
		fputc(ch,f4);
	}
	fclose(f1);
	
	while(1)      // Crunching data of 2nd TSV file into output TSV file
	{
		ch=fgetc(f2);
		if(ch==EOF)
		break;
		fputc(ch,f4);
	}
	fclose(f2);
	
	while(1)     // Crunching data of 3rd TSV file into output TSV file
	{
		ch=fgetc(f3);
		if(ch==EOF)
		break;
		fputc(ch,f4);
	}
	fclose(f3);    // closes the operation
	fclose(f4);
	printf("\nData Crunching done successfully\n");
	return(0);
}
