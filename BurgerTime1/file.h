#include"burgerstructure.h"
#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

int LS;

char *str1[100], str2[100];

typedef struct Highnmbr Highnmbr;
struct Highnmbr{
	char name[100];
	int nmbrs;

};


void store(){
	FILE *fp;
	Highnmbr v[3];


	fp = fopen("highscore.txt", "r+");

	int j = 0;
	while (fscanf(fp, "%s %d", v[j].name, &v[j].nmbrs) != EOF)
	{
		j++;
	}

	fclose(fp);


	int *pointer;

	LS = v[0].nmbrs;            //LS stores the lowest nmbr of the file
	pointer = &v[0].nmbrs;      //this pointer variable points to the location of lowest nmbr
	*str1 = v[0].name;          //str1 holds the name of lowest nmbrrer

	for (j = 1; j<3; j++)
	{
		if (v[j].nmbrs<LS)
		{
			LS = v[j].nmbrs;
			pointer = &v[j].nmbrs;
			*str1 = v[j].name;
		}
	}

	if (score>LS){
		*pointer = score;
		strcpy(*str1, str);
	}



	//Descending order
	Highnmbr temp[2];
	for (int i = 0; i<3; i++){
		for (j = 0; j<3 - 1; j++)
		{

			if (v[j].nmbrs<v[j + 1].nmbrs)
			{
				temp[0].nmbrs = v[j].nmbrs;
				v[j].nmbrs = v[j + 1].nmbrs;
				v[j + 1].nmbrs = temp[0].nmbrs;

				strcpy(temp[0].name, v[j].name);
				strcpy(v[j].name, v[j + 1].name);
				strcpy(v[j + 1].name, temp[0].name);
			}

		}
	}
	FILE *f = fopen("highscore.txt", "w+");

	for (j = 0; j<3; j++)
	{
		fprintf(f, "%s\t%d\n", v[j].name, v[j].nmbrs);
	}

	fclose(f);

}

#endif // FILE_H_INCLUDED