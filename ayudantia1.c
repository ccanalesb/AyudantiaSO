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
	int i;
	for (i = 0; i < n; ++i){
		if(strcmp(Library[i].name,a)){
		 	printf("%s\n", a);
		}		
	}
}

void search_type(char* a){
	int i;
	for (i = 0; i < n; i++){
		if (strcmp(Library[i].type,a)){
		 	printf("%s\n", a);	
		}
	}
}

void Print_books(){
	int i;
	for (i = 0; i < n; i++){
	 	printf("%s\n", Library[i].name);
	 	printf("%s\n", Library[i].type);
	 	printf("%i\n", Library[i].pages);
	}
}

void Print_the_book(int a){
 	printf("%s\n", Library[a].name);
 	printf("%s\n", Library[a].type);
 	printf("%i\n", Library[a].pages);
}
int main(int argc, char const *argv[])
{
	
	return 0;
}