#include <stdio.h>
#include <stdlib.h>

/* este programa le idade, nome , e cidade */

int main(void) {
	
	short int id1,id2,id3;
	char nome1[30],nome2[30],nome3[30];
	char cidade1[30],cidade2[30],cidade3[30];

	
	printf("diga o primeiro nome\n");
	gets(nome1);
	printf("diga o segundo nome\n");
	gets(nome2);	
	printf("diga o terceiro nome \n");
	gets(nome3);
	printf("de a idade da primeira pessoa\n");
	scanf("%d",&id1);
	printf("de a idade da segunda pessoa\n");
	scanf("%d",&id2);
	printf("de idade da terceira pessoa \n");
	scanf("%d",&id3);
	printf("diga a cidade da primeira pessoa \n");
	gets(cidade1);
	printf("diga a cidade da segunda pessoa \n");
	gets(cidade2);
	printf("diga a cidade da terceira pessoa \n");
	gets(cidade3);
	
	
	
	
	
	
	
	
	return 0;
}
