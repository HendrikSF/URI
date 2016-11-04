#include <stdio.h>
#include <string.h>

int main ()
{
	char x1[20], x2[20], x3[20], x4[20];

	scanf("%s %s %s", x1, x2, x3);


	if(strcmp(x1,"vertebrado") == 0){
		if(strcmp(x2,"ave") == 0){
			if(strcmp(x3,"carnivoro") == 0){
				printf("aguia\n");
			} else 
				if(strcmp(x3,"onivoro") == 0){
					printf("pomba\n");
				}

				} else
					if(strcmp(x2,"mamifero") == 0){
						if(strcmp(x3,"onivoro") == 0){
							printf("homem\n");
						} else
							if(strcmp(x3,"herbivoro") == 0){
								printf("vaca\n");
							}
					}
		}

	if(strcmp(x1,"invertebrado") == 0){
		if(strcmp(x2,"inseto") == 0){
			if(strcmp(x3,"hematofago") == 0){
				printf("pulga\n");
			} else 
				if(strcmp(x3,"herbivoro") == 0){
					printf("lagarta\n");
				}
		} else 
			if(strcmp(x2,"anelideo") == 0){
				if(strcmp(x3,"hematofago") == 0){
					printf("sanguessuga\n");
				} else 
					if(strcmp(x3,"onivoro") == 0){
						printf("minhoca\n");
					}
			}
	}



	
return 0;


	}
