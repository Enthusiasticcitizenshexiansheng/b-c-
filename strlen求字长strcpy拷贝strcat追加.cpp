#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE��
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

////1��strlenʵ�ַ�ʽ
//int  my_strlen(char* p)
//{
//	assert(p != NULL);
//
//	int count=0;
//	while (*p != '\0')
//	{
//		count++;
//		p=p+1;
//	
//	}return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}

////2��strlen Ϊ�޷�������
//int main()
//{
//	if(strlen("abc")-strlen("abcdef")>0)
//	{
//		printf("hehe -3�ľ���ֵ������");
//	} else
//	{
//		printf("haha");
//	}
//	return 0;
//}


//
////3.���� ������
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}




//
////4.����ʵ�ַ�ʽ
//
//char* my_strcpy(char* a, char* b)
//{
//	char* ret = a;
//	assert(a && b);
//	while (*a++ = *b++)
//	{
//	};
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


 
////5.׷��
//int main()
//{
//
//	char arr1[30] = "shijie";
//	char arr2[] = " ni hao";
//	strcat(arr1, arr2);
//	printf("%s",arr1);
//
//	return 0;
//}






//6.׷��ʵ�ַ�ʽ
 char* my_strcat(char* a, const char* b)
{
	 char* ret = a;
	while ((*a) != '\0')
	{
		a++;
	}
	while (*a++ = *b++)
	{
	};
	return ret;
}

int main()
{

	char arr1[30] = "shijie";
	char arr2[] = " ni hao";
	my_strcat(arr1, arr2);
	printf("%s",arr1);

	return 0;
}

