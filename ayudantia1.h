#include <stdio.h>
#define n 100

struct Books
{
    char* name;
    char* type;
    int pages;
}; 

struct Books Library[n];

void search_name(char* a){
	int i,j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if(strcmp(Library[j].name,a)){
				fprintf("%c\n", a);
			}
		}
	}
}
