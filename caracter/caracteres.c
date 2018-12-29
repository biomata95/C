#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main(int argc,char *argv[]){
	char a;
	char caractere;
	a = 'a';
	printf("%c\n",toupper(a));
	a = 'A';
	printf("%c\n",tolower(a));
	printf("Digite qualquer caractere do teclado\n");
	scanf("%c",&caractere);
	if(isalnum(caractere))
		printf("Caractere alfanumerico\n\n");
	if(isalpha(caractere))
		printf("Caractere do alfabeto\n\n");
	if(iscntrl(caractere))
		printf("Caractere controle\n\n");
	if(isdigit(caractere))
		printf("Caractere digito decimal\n\n");
	if(isgraph(caractere))
		printf("Caractere representacao grafica\n\n");		
	if(islower(caractere))
		printf("Caractere minusculo\n\n");
	if(isprint(caractere))
		printf("Caractere imprimivel\n\n");
	if(ispunct(caractere))
		printf("Caractere eh um ponto\n\n");		
	if(isspace(caractere))
		printf("Caractere de espaco em branco\n\n");		
	if(isupper(caractere))
		printf("Caractere de letra maisculo\n\n");
	if(isxdigit(caractere))
		printf("Caractere de digito hexadecimal\n\n");
	return 0;
}