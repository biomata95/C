#include <stdio.h>

int eh_perfeito(int i){
	int divisor = 1;
	int somador = 0;
	while(divisor<i){
		if(i % divisor == 0)
			somador=somador+divisor;
		++divisor;
	}
	if(somador==i)
		return 1;
	else if(somador < i)
		return -1;
	else 
		return 2;
}


int main(int argc,char *argv[]){
	int n;
	float perfeitos = 0,menores = 0,maiores = 0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		if(eh_perfeito(i)==1){
			printf("Perfeito: %d\n",i);
			++perfeitos;
		}
		else if(eh_perfeito(i)==-1){
			++menores;
		}
		else{
			++maiores;
		}
	}
	printf("\n\n");
	printf("perfeitos: %.5f \n",perfeitos/n);
	printf("menores: %.5f \n",menores/n);
	printf("maiores: %.5f \n",maiores/n);
	return 0;
}