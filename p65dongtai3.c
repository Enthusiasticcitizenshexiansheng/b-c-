#include<stdio.h>
#include<stdlib.h>


////����4��free���ֶ�̬�ռ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p == NULL;
//
//	return 0;
//��




////����5������ͷ� ����NULL����������
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	free(p);
//	//p = NULL;
//	free(p);
//	return 0;
//}



////����6��δ�ͷ� �ռ�
//#include<Windows.h>
//
//int main()
//{
//
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}






////�������
//void getkongjian(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//void text(void)
//{
//	char* str = NULL;
//	getkongjian(&str);
//	strcpy(str, "hello word");
//	printf(str);
//}
//
//int main()
//{
//	text();
//	return 0;
//}



//����2��

char* getkongjian(char *p)
{
	p = (char *)malloc(100);
	return p;
}

void text(void)
{
	char *str = NULL;
	str = getkongjian(str);
	strcpy(str, "hello word");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	text();
	return 0;
}