#include<stdio.h>

////��ʵ��
//#define QUIZHI(x,y) ((x)>(y)?(x):(y))
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int ret = QUIZHI(x, y);
//	printf("dadezhi %d \n", ret);
//	int a = QUIZHI(x++, y++);
//	printf("dadezhi2 %d \n",a);
//	printf("y���������Σ� %d \n", y);
//	return 0;
//}



//����ʵ��
int MAX(int x,int y) 
{
	return ((x) > (y) ? (x) : (y));
}
int main()
{
	int a = 10;
	int b = 20;
	int y = MAX(a,b);
	printf("%d ", y);
	return 0;
}















// ����������
//#define SHENQINGKONGJIAN(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//
//	int* a = (int*)malloc(10*sizeof(int));
//	int* b = SHENQINGKONGJIAN(10, int);
//	free(a);
//	free(b);
//
//	return 0;
//}