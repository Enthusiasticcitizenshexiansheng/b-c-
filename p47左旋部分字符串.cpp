#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "assert.h" 

////1.���������� ����Ƚ�
//void move(char* arr,int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//ȡһ���ַ�
//		char tmp = *arr;
//		//����ǰ��һλ
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//	//ȡ���ַ������
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	move(arr,2);
//	printf("%s\n", arr);
//		return 0;
//}





////2.������ת�� ��ba cdef  | ba fedc | cdefab
//
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);	
//	assert(right != NULL);
//	int i = 0;
//while(right>left)
//{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//}
//
//}
//void leftxuan(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr+k, arr+ len - 1);
//	reverse(arr, arr+len-1);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	leftxuan(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}



//3.�Ƚϴ�a�ʹ�b������ ����b��a��ת�����ġ�

void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	int i = 0;
	while (right > left)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
void leftxuan(char* arr, int k)
{
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}

int bijiao(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		leftxuan(s1, 1);
		int ret = strcmp(s1, s2);//�Ƚ������Ƿ��ͬ
		if (ret == 0)
			return 1;
	}
			return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = bijiao(arr1, arr2);
	if(ret==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}