#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//int main()
//{
//	char a[] = "112.1.3.4.1@321 ";
//	const char* b = "@.";
//	char* ret = strtok(a, b);
//	printf("%s\n",ret);
//	 ret = strtok(NULL, b);
//	 printf("%s", ret);
//	return 0;
//}


////strtok�ָ���
//int main()
//{
//	char a[] = "112.1.3.4.1@321 ";
//	const char* b = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(a,b); ret != NULL; ret = strtok(NULL, b))
//		//��Ҫ��for���е���ѭ����
//	{
//printf("%s ", ret);
//	}
//	
//	return 0;
//}


////2��strerror(������)
//int main()
//{
//	char* p = strerror(errno);printf("1=%s\n", p);
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("2=%s\n",strerror(errno));
//	}
//	return 0;
//}


#include<ctype.h>


////2��islower�ж�Сд
////tolower(arr[i]);//ת��ΪСд
int main()
{	int i = 0;
	//char p = 'd';
	//int ret = islower(p);//��������
	////islower�ж�Сд
	//printf("%d\n", ret);



	char arr[] = "I AM student";

	while (arr[i])
	{
		if (isupper(arr[i]))//��д
		{
			arr[i] = tolower(arr[i]);//Сд
		}i++;
	}
	printf("%s \n",arr);
	return 0;
}