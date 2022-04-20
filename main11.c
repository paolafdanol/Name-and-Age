#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nombres[3][20];
	int edad[3];
	
	int x;
	for(x=0; x<=2; x++){
		printf("¿Cual es tu nombre?\n");
		scanf("%s", &nombres[x]);
		printf("¿Cual es tu edad?\n");
		scanf("%d", &edad[x]);
	}
	
	for(x=0; x<=2; x++){
		printf("Nombre:%s  ", &nombres[x]);
		printf("Edad:%d\n", edad[x]);
	}
		return 0;
}


	
	
	
	
/*	printf("¿Cual es tu nombre?\n");
	scanf("%s", &nom1);
	printf("¿Cual es tu edad?\n");
	scanf("%d", &ed1);
	printf("¿Cual es tu nombre?\n");
	scanf("%s", &nom2);
	printf("¿Cual es tu edad?\n");
	scanf("%d", &ed2);
	printf("¿Cual es tu nombre?\n");
	scanf("%s", &nom3);
	printf("¿Cual es tu edad?\n");
	scanf("%d", &ed3);
	printf("Nombre:%s  ", nom1);
	printf("Edad:%d\n", ed1);
	printf("Nombre:%s  ", nom2);
	printf("Edad:%d\n", ed2);
	printf("Nombre:%s  "), nom3;
	printf("Edad:%d\n", ed3);*/

