#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"



void menu()
{
	printf("****************************");
	printf("*****1.add      2.del************");
	printf("*****3.search    .modify********");
	printf("*****5.show     6.sort *****");
	printf("******** 0.exit   ********");
	printf("****************************");
	printf("****************************");


}






int main()
{
	int intput = 0;
	int size = 0;

	//��ͨѶ¼
	struct  PeoInfo con;

	//��ʼ��
	InitContact(&con);


	do {
		menu();
		printf("������");
		scanf_s("%d", &intput);
		switch (intput)
		{
		case 1:
			AddContact(&con);
			break;
		case 5:showContact(&con);
			break;
		default:
			break;
		}


	} while (intput);

	return 0;
}