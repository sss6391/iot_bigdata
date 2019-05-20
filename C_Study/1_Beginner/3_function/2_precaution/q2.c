#include <stdio.h>
int CelToFah(tem);
int FahToCel(tem);

void main(){
	int option;
	int tem;
	int tem2;

	while(1){
		printf("1번 입력시 화씨->섭씨, 2번 입력시 섭씨->화씨로 변환됩니다 입력: ");
		scanf("%d", &option);
		printf("바꿀 온도를 입력하세요: ");
		scanf("%d", &tem);
		if (option == 1){
			printf("입력된 화씨 %d 도는 섭씨 %d도 입니다",tem, FahToCel(tem) );
			break;
		}else if (option == 2){
			printf("입력된 섭씨 %d 도는 화씨 %d도 입니다",tem, CelToFah(tem) );
			break;
		}else{
			printf("처음선택시 1번 또는 2번을 입력하세요.\n");
			continue;
		}
	}
}

int CelToFah(int tem){
	tem = (1.8 * tem) + 32;
	return tem;
}

int FahToCel(tem){
	tem = (tem - 32) / 1.8;
	return tem;
}
