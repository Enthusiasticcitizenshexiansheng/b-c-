#include<stdio.h>
#include<stdlib.h>




//
////1���ڴ���䣺calloc(��������С)  �Զ���ʼΪ��
//int main()
//{
//  //malloc(10*sizeof(int))
//	int* p = calloc(10, sizeof(int));
//	 if(p==NULL)
//	 {
//		 printf("%s \n", strerror(errno));
//	 }
//
//	 else
//	 {
//		 int i = 0;
//		 for(i=0;i<10;i++)
//		 {
//			 printf("%d  ", *(p + i));
//		 }
//	 }
//
//	 free(p);
//	 p = NULL;
//
//	return 0;
//}






//2��realloc
//��̬�����ڴ��С
////int main()
////{
////	
////	int* p = (int*)malloc(20);
////	if (p == NULL)
////	{
////		printf("%s \n", strerror(errno));
////	}
////
////	else
////	{
////		int i = 0;
////		for (i = 0; i < 5; i++)
////		{
////			 *(p + i)=i;
////		}
////	}
////
////
////	int* p2 = realloc(p, 40);
////	int i = 0;
////	for(i=0;i<10;i++)
////	{
////		printf("%d ", *(p2 + i));
////	}
////	free(p);
////	p = NULL;
////
////	return 0;
////}



//
////�汾2
////int main()
////{
////	
////	int* p = (int*)malloc(20);
////	if (p == NULL)
////	{
////		//printf("%s \n", strerror(errno));
////	}
////
////	else
////	{
////		int i = 0;
////		for (i = 0; i < 5; i++)
////		{
////			 *(p + i)=i;
////		}
////	}
////
////
////
////
////
////int* p2 = realloc(p, 40);
////	int i = 0;
////
////	for (i = 5; i < 10; i++)
////	{
////		*(p + i) = i;
////	}
////
////	
////	for(i=0;i<10;i++)
////	{
////		printf("%d ", *(p2 + i));
////	}
////	free(p2);
////	p2= NULL;
////
////	return 0;
////}












//�汾3��ȫ��pΪָ��
int main()
{

	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s \n", strerror(errno));
	}

	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}


	//��ַ���
	int* ptr = realloc(p, 4000);
	if (ptr != NULL)
	{
		p = ptr;
	}//�Է����ٿռ䲻��
	
	
	int i = 0;

	for (i = 5; i < 10; i++)
	{
		*(p + i) = i;
	}


	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;

	return 0;
}



//���ֳ�������
//1�ռ䲻�� pָ��Ϊ�� ���н���
//2��̬Խ��
//3free����ջ����q  ����*q=a=10
