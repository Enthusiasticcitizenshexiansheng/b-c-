#include<stdio.h>
#include<stdlib.h>


//////�Ƿ����� ������ջ����ַ��
////char* getkongjian(void)
////{
////	char p[] = "nihao";
////	return p;
////}
////
////void test(void)
////{
////	char* str = NULL;
////	str = getkongjian();
////	printf(str);
////}//��ӡ���ֵ��pָ��Ŀռ䶪ʧ
////
////int main()
////{
////	test();
////	return 0;
////}


////2.ջ�侲̬��
//int* test()
//{
//	static int a = 10;  //��̬��
//	return &a;
//}
//int main()
//{
//	int*p =test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}
//


//
////3.���ضѿռ� ��free�ɻ���
//int* test()
//{
//	int *ptr = malloc(30);  //����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}



//
////4.û�ͷſռ�
////�Ƿ����� ������ջ����ַ��
//char* getkongjian(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	 getkongjian(&str,100);
//	 strcpy(str, "nihao");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}








//5.if�ж�ʧЧ

void test(void)
{
	char* str = (char* )malloc(30);
	strcpy(str, "nihao");
	printf(str);  free(str);

	str = NULL;
//Word�����ܿ�������ָ��str�ϡ�	
	if (str != NULL)
	{
		strcpy(str, "word");
		printf(str);
	}

}

int main()
{
	test();
	return 0;
}