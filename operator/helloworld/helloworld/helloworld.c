#include <stdio.h>

//#include <stdio.h> // ��ó���� ǥ��������ش�����

// ���� �ּ� ����
/* ������ �ּ� ����
*/

/// <summary>
/// hello(�Լ�) �� ���� ��� ����
/// </summary>
/// <returns></returns>
//int main() { // ������ 2�� ���� ���� �ּ�, �ݵ�� main�Լ��� �־�� �ȴ�. ������ �ǹ�, �߰�ȣ�� �Լ���� �Լ��� ���۰� ��
//	printf("Hello World !!!");	//printf�� stdio.h�� �ִ� ǥ��������Լ�(�����), ;(�����ݷ�) ������ ���� �˸�.
//	return 0;	// ���� ����, �����Լ��� ���ϰ��� �ü������ ������ ��(0�� ���α׷��� �������� ����)
//}

//#include ��
//#define �� //��ó����

//void main(void) {
//	��ɹ�;
//	��ɹ�;
//	.;
//	.;
//} ctrl+C,K

// C���α׷��� �⺻������ �Լ�
// C���� �����Ǵ� ��� ���α׷��� �ݵ��
// main()�� ������ �־�� �Ѵ�
// �ݵ�� ; �� �־�� �Ѵ�.. ������ ���� �˸�
// C���� ��.�ҹ��ڸ� �����Ѵ�
// C���� ���������� ���
// ;���� ������ ������ 2�ٷ� ���°͵� ���
// �鿩���� ���ص� ��!! �׷��� �ؾ���(����������)

// ����, ����, ������, C�ý���
// ���� : ���α׷� ��Ģ
// �����Ϸ� : C ���α׷��� ������ �´��� �˻�
// �����ϰ��� : C ���α׷� -> ��ū���� �и� -> �����ڵ�� ��ȯ
// ��ū������ : Ű����, �ĺ���, ���, ���ڿ����, ������, ������ ��

// �ĺ��� : ����ڰ� �ۼ��� �������
// ���� �빮�� ���ĺ�, ����, ������ھ�(_)
// ù �ܾ�� ���� ���ĺ�, ����� �� ����
// ��ҹ��� ����
// Ű���� ���Ұ�
// �Լ���, ������ �̶�� �� (myVariable)

// ���� (statement)
// C���α׷��� �̷�� �⺻����
// �� ������ ; �� ��

// ��ó����
// ������ �ϱ����� �ҽ������� ó���ϴ� �����Ϸ��� �� �κ�
// �����Ϸ��� ���ԵǾ� �ִ�
// �ڵ����� ����ȴ�
/*
#include <stdio.h> // �����Ϸ��� ������ �������� ã��
#include "abc.h" // ���� ������Ʈ ���������� ã��
#include "C:\test\abc.h"
#include "..\abc.h" // ���� ������ ������������ ã��
#define, #line, #prama
*/

//#include <stdio.h>
//#define APPLE 10
//#define NAME "���" // �������� ����
//
//int main() {
//	printf("%s %d \n", NAME, APPLE); // s string d decimal \n ���๮��
//		return 0;
//}

//#include <stdio.h>
//#define APPLE 10
//#define NAME "���" // �������� ����
//#define OUTPUT printf("%s %d \n", NAME, APPLE)
//
//int main() {
//	OUTPUT; // s string d decimal \n ���๮��
//	return 0;
//}

//#include <stdio.h>
//#define CALC(x,y) ((x)*(y)) // ���ڰ� �� ���� �޾� ����
//
//int main() {
//	printf("%d \n", CALC(2,4));
//	return 0;
//}

//����ó��
/*
#if ����1
����1�� ���� ��
#elif ����2
����1�� �����̰� ����2�� ���� ��
#else
����1, ����2�� ������ ��
#endif
*/

//#include <stdio.h>
//#define NUM 10
//int main() {
//#if NUM < 10
//	printf("NUM�� 10���� �۴�\n");
//#elif NUM > 10
//	printf("NUM�� 10���� ũ��\n");
//#else
//	printf("NUM�� 10 �̴�\n");
//#endif
//	return 0;
//}

//#ifdef ��ũ���̸�
//��ũ�ΰ� ���ǵǾ� ���� ��
//#else
//��ũ�ΰ� ���ǵǾ� ���� ���� ��
//#endif // �׻� �ʿ�
//
//#ifdef ��ũ���̸�
//��ũ�ΰ� ���ǵǾ� ���� ���� ��
//#else
//��ũ�ΰ� ���ǵǾ� ���� ��
//#endif // �׻� �ʿ�

//#include <stdio.h>
//#define NUM 10
//int main() {
//#ifdef NUM // TabŰ ������ endif ��Ʈ�� ����� ��
//	printf("NUM�� %d �Դϴ�\n", NUM);
//#else
//	printf("NUM�� ���ǵǾ� ���� �ʽ��ϴ�\n"); // �̹� ���ǵǾ� �־ �帴�ϰ� ����� ��
//#endif
//	return 0;
//}


// ���� ��ũ�ε�
//#include <stdio.h>
//void fun();
//int main() {
//	printf("������ ��¥ : %s \n", __DATE__);
//	printf("������ �ð� : %s \n", __TIME__);
//	printf("������ ��¥, ����, �ð� : %s \n", __TIMESTAMP__);
//	printf("���� ��ȣ : %d \n", __LINE__);
//	fun();
//	printf("���� �ҽ����� ��ġ : %s \n", __FILE__);
//}
//void fun() {
//	printf("���� �Լ� : %s \n", __FUNCTION__);
//}

//int main() {
//	int num; // ������
//	float x; // �Ǽ���
//	char c;  // ������ (����� ������ ������)
//	num = 123;
//	x = 1.23;
//	c = 'A'; // '����'�� �ܵ���ǥ "���ڿ�"�� �ֵ���ǥ
//	// ���Ĺ��ڿ� ��°��� ������ ���ƾ� ��
//	printf("%d %x \n", num, num);	// 10����, 16����
//	printf("%f %e \n", x, x);		// �ε��Ҽ���, ����
//	printf("%c \n", c);				// ����
//	printf("%x \n", num);			// �ҹ���
//	printf("%X \n", num);			// �빮��
//	printf("%#x \n", num);			// #�ҹ���
//	printf("%#X \n", num);			// #�빮��
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num = 12345;
//	printf("%d \n", num);
//	printf("%d \n", num*10);
//	printf("%d \n", num*100);
//	printf("%d \n\n", num*1000);
//	
//	printf("%8d \n", num); // 8���� ��¿� ����
//	printf("%8d \n", num * 10);
//	printf("%8d \n", num * 100);
//	printf("%8d \n\n", num * 1000);
//
//	printf("%8d \n", num * 100000); // ������ ���� ŭ
//	printf("%08d \n", num); // ��ĭ��� 0���� ä��
//	return 0;
//	
//}

// ���е�
//#include <stdio.h>
//int main() {
//	float x = 12.34567;
//	printf("%f \n", x); // ���� ���е� ���� ����
//	printf("%.2f \n", x); // �Ҽ������� 2�ڸ�
//	printf("%8.2f \n", x); // ���� ���е� ����
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char name[20]; // ���ڷ� �̷���� �迭, ũ��� 20��
//	int age;
//	char gender;
//	printf("�̸�, ����, ����(M/F) ������ �Է��Ͻÿ� \n");
//	scanf("%s %d %c", name, &age, &gender); // & �ʿ�(�迭�� ����)
//	printf("�̸� : %s \n", name);
//	printf("���� : %d \n", age);
//	printf("���� : %c \n", gender);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char c;
//	int num;
//	double x;
//	printf("char���� ����Ʈ ũ�� : %d \n", sizeof(char)); // sizeof�� ����Ʈ ũ�⸦ ��Ÿ���� ������ �ܿ��ߵ�
//	printf("short���� ����Ʈ ũ�� : %d \n", sizeof(short));
//	printf("long���� ����Ʈ ũ�� : %d \n", sizeof(long));
//	printf("long long���� ����Ʈ ũ�� : %d \n", sizeof(long long));
//	printf("float���� ����Ʈ ũ�� : %d \n", sizeof(float));
//	printf("double���� ����Ʈ ũ�� : %d \n", sizeof(double));
//	printf("long double���� ����Ʈ ũ�� : %d \n", sizeof(long double));
//	printf("c�� ����Ʈ ũ�� : %d \n", sizeof(c));
//	printf("num�� ����Ʈ ũ�� : %d \n", sizeof(num));
//	printf("x�� ����Ʈ ũ�� : %d \n", sizeof(x));
//	return 0;
//}

// ������ ����� ���
// ������ �����Ϸ��� ������ ��������, �̸�
// �ݵ�� ������, ����, ������ھ�(_)
// ù���� ������, ������ھ�, ��ҹ��� ����, Ű���� �Ұ�

////// �ڵ� ����
//// ī��(Camel)ǥ��� ��Ÿ ��ó�� �ö󰬴� ������(ù��° �ܾ�� �ҹ���, �ι�° �ܾ���ʹ� �빮��)
//int manAge;	//������
//int womanAge;
//int kangMinJoon;
//int peopleAge(int man, int woman) { // �Լ���
//	return 0;
//}
//
//// �Ľ�Įǥ���
//int ManAge;
//int WomanAge;
//
//// ������ũǥ���
//int man_age;
//int woman_age;
//
//// �밡����ǥ��� : ���ڸ� �����տ� �ҹ��ڷ� �ٿ��ش�. C���� �� �Ⱦ�
//String strName;
//char ch1;
//byte bAge;

/// <summary>
/// ������ �ʱ�ȭ
/// </summary>
/// <returns></returns>
/// �ʱ�ȭ ���� ���� ������ ������ ���� ������
//int main() {
//	int price;			// ������ ����, �ʱ�ȭ�� ���� ����
//	price = 100;		// �ʱ�ȭ
//	
//	int a = 0;
//	int b = -5;
//	int c = 0;
//	printf("%d \n", price);
//	return 0;
//}

//int main() {
//
//	int amount = 0;
//	int price = 0;
//	int total_price = 0;
//
//	printf("amount = %d, price = %d \n", amount, price);
//
//	printf("����?");
//	scanf("%d", &amount);
//
//	price = 2000;
//	
//	total_price = amount * price;
//
//	printf("�հ� : %d�� \n", total_price);
//
//	return 0;
//}

// ���
// ���α׷����� ���� ������� �ʴ� ���
// ���ͷ���� (literral Constant)
// ���� ��� : 'A', '\xa
// ������ ��� : 0x12, 123u
// �Ǽ��� ��� : 3.14, 1.23��e1
// ���ڿ� ��� "hello", "A"

// ��ũ�� ���
// #define �� ���ǵ� ���

// const ���
// ---- ���� ������ �� ���� ����
// ---- const ������ �ݵ�� ���� �� �ʱ�ȭ �ؾ� �Ѵ� ���

//int main() {
//	int amount = 0, price = 0;
//	const double VAT_RATE = 0.1; // �� ���� X
//	int total_price = 0;
//	printf("����? ");
//	scanf("%d", &amount);
//	printf("�ܰ�? ");
//	scanf("%d", &price);
//	total_price = amount * price * (1 + VAT_RATE);
//	printf("�հ� : %d \n", total_price);
//	return 0;
//
//}