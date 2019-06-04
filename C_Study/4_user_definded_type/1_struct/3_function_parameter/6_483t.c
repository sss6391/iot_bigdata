#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;


// Call by Refernce type1: 인자에 대한 주소값을 넘겨줌
// 장점: 인자에 대한 메모리 카피 작업이 일어나지 않아서
//			프로그램 속도, 메모리 사용 효율을 높일 수 있다.

Point AddPoint1(Point *pos1, Point *pos2) {
	Point pos = { pos1->xpos + pos2->xpos, pos1->ypos + pos2->ypos };
	return pos;
}

// Call by Refernce type2: 인자 및 반환 값까지도 매개변수로 처리하여 넘겨줌
// 장점: 호출하는 쪽에서 반환 값에 대한 메모리 카피가 일어나지 않아
//			프로그램 속도, 메모리 사용 효율을 높일 수 있다.

void AddPoint2(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (*pos1).xpos + (*pos2).xpos;
	pos3->ypos = (*pos1).ypos + (*pos2).ypos;
}

// Call by Refernce type3: type2와 동일하며 추가적으로 반환값을 정의하며 해당 반환값은
//	오로지 함수가 정상적으로 수행했는지에 대한 에러코드를 리턴함 (실무에서 많이 사용)
// ex) 0: 정상수행, 1: 인자 값의 문제 2: Segmantation Fault ...

int AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = pos1->xpos + pos2->xpos;
	pos3->ypos = pos1->ypos + pos2->ypos;
	
	return 0;
	// 오류값 반환
}

void MinPoint(Point *pos1, Point *pos2, Point *pos3) {
	pos3->xpos = pos1->xpos - pos2->xpos;
	pos3->ypos = pos1->xpos - pos2->ypos;
}

void main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	AddPoint(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	MinPoint(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
}
