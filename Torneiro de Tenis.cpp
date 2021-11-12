#include <stdio.h>
#include <conio.h>

int main(){
	int jog = 0;
	int vit = 0;
	char res;
	while (jog < 6){
		jog ++;
		scanf(" %c", &res);
		if(res == 'V' || res == 'v'){
			vit++;
		}
		else{

		}
	}
	if(vit>=5)
		printf("1");
	else if(vit>=3)
		printf("2");
	else if(vit>=1)
		printf("3");
	else if(vit==0)
		printf("-1");
	getch();
}
