#include <stdio.h>
#include <string.h>
int main(){
	int i=0, j=0, nulo=0, brancos=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, votos, total, totalb, totaln,percentualtotal;
	float percentual1, percentual2, percentual3, percentual4, percentualbn;
	while(i==0){
		printf("Registre seu voto: \n1-Arthur\n2-Thiago\n3-Felipe\n4-Jose\n5-Voto nulo\n6-Voto em Branco\n");
		scanf("%d",&votos);
		
		if(votos==0){
			break;
		}
		switch(votos){
			
			case 1:
				n1++;
				j++;
				break;
			case 2:
				n2++;
				j++;
				break;
			case 3:
				n3++;
				j++;
				break;
			case 4:
				n4++;
				j++;
				break;
			case 5:
				n5++;
				nulo++;
				break;
			case 6:
				n6++;
				brancos++;
				break;
			default:
				printf("Voce nao escolheu nenhum canditado\n");
				break;
		}
		
	}
	
	    total=j;
		totaln=nulo;
		totalb=brancos;
		percentual1=(n1*100)/j;
		percentual2=(n2*100)/j;
		percentual3=(n3*100)/j;
		percentual4=(n4*100)/j;
		percentualtotal=j+brancos+nulo;
		percentualbn=((brancos+nulo)*100)/percentualtotal;
		printf("TOTAL DOS 4:%d\nTOTAL DOS NULOS:%d\nTOTAL DOS BRANCOS:%d\n", total, totaln, totalb);
		printf("PERCENTUAL DE ARTHUR: %.2f\nPERCENTUAL DE THIAGO: %.2f\nPERCENTUAL DE FELIPE: %.2f\nPERCENTUAL DE JOSE: %.2f\nTOTAL BARNCOS E NULOS: %.2f\n", percentual1,percentual2,percentual3,percentual4,percentualbn);
		
		if(n1>(n2+n3+n4)){
			printf("Arthur tem mais votos que os demais juntos\n");
		}
		else if(n2>(n1+n3+n4)){
			printf("Thiago tem mais votos que os demais juntos\n");
		}
		else if(n3>(n2+n1+n4)){
			printf("Felipe tem mais votos que os demais juntos\n");
		}
		else if(n4>(n2+n1+n3)){
			printf("Jose tem mais votos que os demais juntos\n");
		}
	return 0;	
}
