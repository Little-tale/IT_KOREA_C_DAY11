// �ڷᱸ���� �����ΰ�!
// �ڷ� - ������ (����) - ���� ���𰡸� ��ġȭ �� �� �ִ°�.
// ���� - structure - ���� (����) ���� �����ִ� ���𰡸� �԰�ȭ �Ѱ�.
// �ڷᱸ�� - ������ ���� - ������ Ư���� ���·� �԰�ȭ �Ѱ�. 

// �ڷᱸ���� �� ����� �ϴ°�!
// ������ �ս��� Ȥ�� ���ϰ� �����ϱ� ���ؼ� �̴�.

// �ڷᱸ���� �⺻������ ������� ����.

// �ڷ� ������ ���� -> ���� ���� ����ϴ� ����
	//���� , ����Ʈ, ����, ť, ����Ʈ�� , Ʈ��, �׷���, B+TRee,...
// �ٷ� �ڷᱸ��? 
	// �� ����ü ����

// ����ü
//struct MyStruct
//{
//
//};

// ������ ���� -> ������ �� ���� ����� ��
// �迭 : ������ �ڷ����� ������ �ִ�.....

// �л� ���� ����
// �л� �̸� , �л���ȣ, ���� ��~

//struct MyStruct // ����� ���� Ÿ�� �ڷ���
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
//	// ����ü ������ ���� ������ �����ϴ� ���� ���� ������
//	mystr.age = 23;
//	mystr.name = "������";
//
//
//}



#include <stdio.h>
// �̸�, Ű, �����Ը� ����  Person ���� �����
// 2���� ������ �Է� �� ����ϼ���

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
//		printf_s("�׽�Ʈ %s \n", &second.name);
//	}
//	printf_s("�̸� : %s ���� : %.1f Ű: %.1f \n", first.name, first.height, first.weight);
//	printf_s("�̸� : %s ���� : %.1f Ű: %.1f \n", first.name, first.height, first.weight);
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
//	// ���� �Ҵ� �ϴ¹�
//	Person* p = malloc(sizeof(Person));
//	(*p).name;
//}


//struct A {
//	char c;
//	// ���̿� 3����Ʈ
//	int b;
//	
//	char t;
//	// ���̿� 3����Ʈ
//};

// ���̵����͸� �ִ��� ���̱� ���� ����ü �������
// ������ ũ�Ⱑ ū���� ���� ����� �������� �Ʒ��� ������.
// �뷮�� �ִ��� ¦���� ������.

//#pragma pack(push,1) // ���������� �뷮�� ���̱� ���ؼ� �̷��� �ִ������� �˱�!
//					// ������ ���� ����� �ƴ�.
//struct A {
//	char a, b, c;
//	short d;
//
//};
//// 1,1,1, 2, �϶� �� 6����Ʈ�ΰ� 4�辿 �ƴϾ��°�.
//#pragma pack(pop)
//void main()
//{
//	sizeof(struct A); // Dummy Data -> 5����Ʈ �����ϴµ� 8����Ʈ������
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
//	(*b).a; // �����ؼ� ���λ���
//	b->a; // ȭ��ǥ ->
//
//}


// ��������� �Է��ϴ� ���α׷��� �ۼ�
// ����� �̸�(17����), �ֹι�ȣ(15����), ����(�ִ� 100��) �Է��ϰ�
// �Է��� ��� ������ ���� ����ϴ� ���α׷�
// ��������� ũ��� 24����Ʈ�� ����ÿ�

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
	printf_s("�̸� : %s �ֹι�ȣ : %ld ���� : %d", humen.name, &humen.idCard, humen.age);



}





