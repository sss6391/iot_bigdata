#include <stdio.h>
#pragma warning (disable:4996)

void main(){
 	int villa[4][2];
	int popu, i, j;

	/*가구별 거주인원 입력 받기*/
	for(i=0;i < 4; i++){
		for(j=0; j < 2; j++){
			//인덱스를 논리적으로 표현(출력)하기 위해서는
			//각각의 인덱스에 1을 더해야 한다.
			//Why? 인덱스는 0부터 시작하기 때문이다.
			printf("%d층 %d호 인구수: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
/*
	for(i=0; i < 4; i++){
		popu=0;
		popu = popu + villa[i][0];
		popu = popu + villa[i][1];
		printf("%d층 인구수: %d \n", i+1, popu);
	}
	*/
	/*빌라의 층별 인구수 출력하기*/
	for(i=0; i < 4; i++){
		popu=0;
		for(j=0; j <2; j++){
			popu = popu + villa[i][j];
		}
			printf("%d층 인구수: %d \n", i+1, popu);
	}
}

