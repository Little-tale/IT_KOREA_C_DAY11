// 자료구조란 무엇인가!
// 자료 - 데이터 (정보) - 내가 무언가를 수치화 할 수 있는것.
// 구조 - structure - 설계 (형태) 내가 볼수있는 무언가를 규격화 한것.
// 자료구조 - 데이터 설계 - 정보를 특정한 형태로 규격화 한것. 

// 자료구조를 왜 배워야 하는가!
// 정보를 손쉽게 혹은 편하게 관리하기 위해서 이다.

// 자료구조는 기본적으로 장단점이 존재.

// 자료 구조의 종류 -> 가장 많이 사용하는 종류
	//백터 , 리스트, 스택, 큐, 이진트리 , 트리, 그래프, B+TRee,...
// 바로 자료구조? 
	// 놉 구조체 부터

// 구조체
//struct MyStruct
//{
//
//};

// 정보를 관리 -> 유사한 것 끼리 묶어내는 것
// 배열 : 동일한 자료형만 묶을수 있다.....

// 학생 정보 관리
// 학생 이름 , 학생번호, 점수 등~

//struct MyStruct // 사용자 정의 타입 자료형
//{
//	int age;
//	char name;
//	int c;
//	float d;
//};
//
//#include <stdio.h>
//
//
//void main()
//{
//	struct MyStruct mystr;
//	// 구조체 변수의 내부 공간을 선택하는 공간 선택 연산자
//	mystr.age = 23;
//	mystr.name = "김재형";
//
//
//}



#include <stdio.h>
// 이름, 키, 몸무게를 사진  Person 형태 만들고
// 2명의 정보를 입력 및 출력하세요

//typedef struct Person
//{
//	char name[20];
//	float weight;
//	float height;
//}Person;
//
//void main()
//{
//	Person first;
//	first.name[0] = "Kim";
//	first.height = 82;
//	first.weight = 180;
//
//	Person second;
//	second.name[0] = "JAMEs";
//	second.height = 53;
//	second.weight = 162;
//	for (int i = 0; i < 4; ++i)
//	{
//		printf_s("테스트 %s \n", &second.name);
//	}
//	printf_s("이름 : %s 무게 : %.1f 키: %.1f \n", first.name, first.height, first.weight);
//	printf_s("이름 : %s 무게 : %.1f 키: %.1f \n", first.name, first.height, first.weight);
//

//}

#include <stdlib.h>

//typedef struct Person
//{
//	char name[20];
//	float weight;
//	float height;
//}Person;
//
//void main()
//{
//	// 동적 할당 하는법
//	Person* p = malloc(sizeof(Person));
//	(*p).name;
//}


//struct A {
//	char c;
//	// 사이에 3바이트
//	int b;
//	
//	char t;
//	// 사이에 3바이트
//};

// 더미데이터를 최대한 줄이기 위한 구조체 생성방법
// 변수의 크기가 큰것을 먼저 만들고 작은것을 아래로 보내라.
// 용량은 최대한 짝수로 만들어라.

//#pragma pack(push,1) // 느려지더라도 용량을 줄이기 위해서 이런게 있다정도만 알기!
//					// 지금은 좋은 방식은 아님.
//struct A {
//	char a, b, c;
//	short d;
//
//};
//// 1,1,1, 2, 일때 왜 6바이트인가 4배씩 아니었는가.
//#pragma pack(pop)
//void main()
//{
//	sizeof(struct A); // Dummy Data -> 5바이트 여야하는데 8바이트가나옴
//
//}


#include <stdlib.h>

//struct A
//{
//	int a;
//};
//
//void main()
//{
//	struct A a;
//	a.a;
//	struct A* b = &a;
//	(*b).a; // 불편해서 새로생김
//	b->a; // 화살표 ->
//
//}


// 사람정보를 입력하는 프로그램을 작성
// 사람은 이름(17글자), 주민번호(15글자), 나이(최대 100살) 입력하고
// 입력한 사람 정보를 토대로 출력하는 프로그램
// 사람정보늬 크기는 24바이트로 만드시오

#pragma pack(push,1)
typedef struct Person
{
	char name[18];
	short age;
	unsigned int idCard;
}Person;
#pragma pack (pop)
int main()
{
	sizeof(Person);
	Person humen;
	scanf_s("%s", &humen.name,17);
	
	scanf_s("%d", &humen.idCard);
	scanf_s("%d", &humen.age);
	if (humen.age > 100)
	{
		return 0;
	}
	printf_s("이름 : %s 주민번호 : %ld 나이 : %d", humen.name, &humen.idCard, humen.age);



}





