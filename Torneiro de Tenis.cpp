#include <stdio.h>
#include <conio.h>

int main(){
	int jog = 0;//contador de partidas
	int vit = 0;//contador de vitorias
	char res;
	while (jog < 6){
		jog ++;
		scanf(" %c", &res);//sistema lê a resultado da partida
		if(res == 'V' || res == 'v'){
			vit++;//vitorias sendo contadas
		}
		else{

		}
	}
	if(vit>=5)//classsificação por grupo dependendo do numero de vitorias
		printf("1");
	else if(vit>=3)
		printf("2");
	else if(vit>=1)
		printf("3");
	else if(vit==0)
		printf("-1");
	getch();
}
