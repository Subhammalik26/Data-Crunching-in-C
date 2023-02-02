# Data-Crunching-in-C
# Approach :
Solved the Data Crunching problem in C by using standard library function in File Handling method.

# Code :
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


# Input Files Screenshot :

![Input_Files](https://user-images.githubusercontent.com/99710364/216257138-6493941f-64c8-41aa-a0af-b106bcdcb688.png)

# Output Command Promt Screenshot :

![Output_1](https://user-images.githubusercontent.com/99710364/216257358-fb903a1d-95f5-4c5e-9eeb-afaf160ba20a.png)

# New Output File Creation Screenshot :

![Output_File](https://user-images.githubusercontent.com/99710364/216257548-4770727e-3f1a-4c21-b5c1-23348dba898d.png)

# Output File Data Screenshot :

![Output_File_Data_1](https://user-images.githubusercontent.com/99710364/216257886-7d87b3e7-b36b-400f-a2cd-a74fc8914094.png)
![Output_File_Data_2](https://user-images.githubusercontent.com/99710364/216257897-132206fc-24e8-4d0a-b078-b6e3101d8ec0.png)
![Output_File_Data_3](https://user-images.githubusercontent.com/99710364/216257902-d07c0ace-4000-433a-8f22-c3e20867dab4.png)
![Output_File_Data_4](https://user-images.githubusercontent.com/99710364/216257910-083c8c55-f79b-402d-96c8-ba99ac855064.png)
![Output_File_Data_5](https://user-images.githubusercontent.com/99710364/216257915-b07a8a81-26dc-4ba5-946c-38dd127749a3.png)
![Output_File_Data_6](https://user-images.githubusercontent.com/99710364/216257918-c23298cc-a7ce-4ff5-8527-5d963986c8a4.png)







