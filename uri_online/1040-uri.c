#include <stdio.h>

int main(){

	double num1, num2, num3, num4, media, exame;
	scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
	media = (num1*2 + num2*3 + num3*4 + num4 * 1) / (2 + 3 + 4 + 1);
	printf("Media: %.1lf\n", media);


	if (media >= 7.0){

		printf("Aluno aprovado.\n");

	}
	else{

		if (media < 5.0){

			printf("Aluno reprovado.\n");

		}
		else{

			printf("Aluno em exame.\n");
			scanf("%lf", &exame);
			printf("Nota do exame: %.1lf\n", exame);
			media = (media + exame)/2;
			if (media >= 5.0){

				printf("Aluno aprovado.\n");

			}
			else{

				printf("Aluno reprovado.\n");

			}

		printf("Media final: %.1lf\n", media);

		}
	}
}