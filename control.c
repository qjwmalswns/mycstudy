#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if��
//int main() {
//	int num = 0;		// ������ ���� �� �ʱ�ȭ, ��������
//
//	printf("���ڸ� �Է��ϼ��� ");
//	scanf("%d", &num);
//
//	if (num<5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ� \n");
//	}
//
//	if (num==5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5�Դϴ� \n");
//	}
//
//	if (num>5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ� \n");
//	}					// break ���� ���� ������ ���������� �ѹ��� ����
//
//	return 0;
//}

//int main() {
//	int num = 0;		// ������ ���� �� �ʱ�ȭ, ��������
//
//	printf("���ڸ� �Է��ϼ��� ");
//	scanf("%d", &num);
//
//	if (num < 5)
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ� \n");
//	}
//	
//	else 
//	{
//		if (num == 5)
//		{
//			printf("�Է��Ͻ� ���ڴ� 5�Դϴ� \n");
//		}
//		else
//		{
//			if (num > 5)
//			{
//				printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ� \n");
//			}
//		}
//	}					// ���������� ����������, ���̸� �Ʒ� ���� ����
//	return 0;
//}

//// if else if  else
//int main() {
//	int num = 0;
//
//	printf("���ڸ� �Է��Ͻÿ� \n");
//	scanf("%d", &num);
//	
//	if (num<5)
//	{
//		printf("�Է��� ���ڴ� 5���� �۽��ϴ�");
//	}
//
//	else if (num == 5)
//	{
//		printf("�Է��� ���ڴ� 5�Դϴ�");
//	}
//
//	else
//	{
//		printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ�");
//	}
//
//	return 0;
//}

//// �����ϼ�~~ ��ø if �� // if���� �δܰ������ �������Բ� ����
//int main() {
//	int pm;
//	printf("�̼����� �󵵸� �Է��Ͻÿ� : ");
//	scanf("%d", &pm);
//
//	if (pm > 0)
//	{
//		if (pm <= 30)
//		{
//			printf("�̼����� �󵵰� �����Ƿ� ����ũ ���� ����");
//		}
//		else if (pm > 30 && pm <= 80)
//		{
//			if (pm <= 80)
//			{
//				printf("�̼����� �󵵰� �����̹Ƿ� ����ũ ����");
//			}
//			else (pm <= 130)
//			{
//				printf("�̼����� �󵵰� �����̹Ƿ� ������ ����");
//			}
//		}
//	}
//}

//// switch case ��
//// ����
//switch (������)		// ���� �������� ��
//{
//case ������1:
//	����1;
//	break;
//case ������2:
//	����2;
//	break;
//	.
//	.
//	.
//default:			// � case ���� �ش����� �������
//	break;			// break ���� ����
//}

//int main() {
//	int num;
//
//	printf("�̼����� �� ���� \n");
//	printf("1 : ����\n");
//	printf("2 : ����\n");
//	printf("3 : ����\n");
//	printf("4 : �ſ쳪��\n");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("�̼����� �󵵰� ���� ����ũ �������� \n");
//		break;
//
//	case 2:
//		printf("�̼����� �󵵰� �����̴� ����ũ ���� \n");
//		break;
//
//	case 3:
//		printf("�̼����� �󵵰� ���ڴ� ��޸���ũ ���� \n");
//		break;
//
//	case 4:
//		printf("�̼����� �󵵰� �ſ� ���ڴ� �浶�� ���� \n");
//		break;
//
//	default:	// ����ó��
//		printf("��ȣ �ߺ��� �־�� \n");
//		break;
//	}				// case �������� ���ڸ� �Է��� ���� �ִ�
//}

//// �ݺ��� (while)
//while (���ǽ�)	// loop statement ���ǽ��� ���̸� ��� ���ư���, �����̸� �����ڵ�
//{
//	�ݺ��� �ڵ�;
//	��ȭ��;
//}

//int main() {
//	int weight = 80;
//	int count = 0;
//	
//	while (weight > 50) // ���ǹ� ������ ���� (���ѷ���)
//	{
//		printf("���� ���ð� ��ؼ� 1kg ���� \n");
//
//		weight--;
//		count++;
//	}
//	printf("�����մϴ�. � ���ص� �˴ϴ� \n");
//	printf("%d �� ��߽��ϴ� \n", count);
//	return 0;
//}

//// do while
//do
//{
//	�ݺ��� �ڵ�;	// ���ǽĿ� ������� ������ �ѹ� ����
//	��ȭ��;
//} while (���ǽ�);

//int main() {
//	int weight = 80;
//	int count = 0;
//	int select;
//
//	do
//	{
//		printf("���ð� ��ؼ� 1kg ���� \n");
//		
//		weight--;
//		count++;
//		
//		printf("��� �� �Ҳ���? \n");
//		printf("1 : Yes,    2 : NO (���ڸ� �Է��Ͻÿ�) \n");
//		scanf("%d", &select);
//
//		if (select == 2) break;	// do while �ݺ����� ����������
//	} while (weight > 50);
//	printf("�����մϴ� � ���ص� �� \n");
//	printf("%d �� ��߳� \n", count);
//	return 0;
//}

//// for ��
//for (�ʱ�ȭ; ���ǽ�; ������)
//{
//	�ݺ��� �ڵ�;
//}

//int main() {
//	int weight = 80;
//	int count = 0;
//
//	for (weight = 80; weight > 50; weight--)
//	{
//		printf("���ð� ��ؼ� 1kg ���� \n");
//		count++;
//	}
//	printf("�����մϴ� � ���ص� �� \n");
//	printf("%d �� ��߳� \n", count);
//	return 0;
//}

//// for ���ѷ���
//for (size_t i = 0; i < length; i++)
//{
//	printf("���ѷ��� \n");
//}
//while (1)
//{
//	printf("���ѷ��� \n");
//}

//int main() {
//	int sum = 0;
//	for (unsigned i = 0; i < 100 && sum < 2000; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//}

//int main() {
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		printf("�ܺ� ���� %d\n", i);
//		for ( j = 0; j < 3; j++)
//		{
//			printf("���� ���� %d\n", j);
//		}
//		printf("�ܺ�   �� %d \n\n", i);
//	}
//	return 0;
//}

//// ����� ������ ����
//for (i = 0, j = 0; i < 100 && j > 0; i++, j++);
//
//// �ʱ��, ���ǽ�, ������, �ݺ� ������ �Ϻθ� ���� ����
//for (; i<10; i++)
//for (i = 0; ; i++)
//for (i = 0; i < 10; )
//for (i = 0; i < 10)
//{
//	;
//}
//for (i = 0; i < 10; printf("%d\n", i++)){}

//int main() {
//	int i, j;
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for ( i = 4; i > 0; i--)
//	{
//		for ( j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// ������
//int main() {
//	int n;
//	int i = 1;
//
//	printf("��� �ϰ���� �ܼ���? : \n");
//	scanf("%d", &n);
//
//	while (i <= 9)
//	{
//		printf("%d * %d = %d \n", n, i, n * i);
//		i++;
//	}
//	return 0;
//}

// ���丮�� (�����÷ο�)
int main() {
	long fac = 1;
	int i, n;
	printf("���� �Է� : \n");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		fac = fac* i;
	}
	printf("%d! �� %d �Դϴ� \n", n, fac);
	return 0;
}