#include<stdio.h>
#include<stdlib.h>


////1.��ϵ���� ����ռ�
//struct suzu
//{
//	int a;
//	int arr[];
//};
//
//int main()
//{
//	struct suzu* ps = (struct suzu*)malloc(sizeof(struct suzu) + 5*sizeof(int));
//	ps->a = 120;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//�Ĵ�С
//	struct suzu*p1=realloc(ps, 44);
//	if (p1 != NULL)
//	{
//		ps = p1;
//	}
//	//��ֵ��
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}





//2.��ϵ���� ��ָ��ָ��ɱ�ռ�

struct S
{
	int n;
	int* arr;

};


int main()
{
	struct S*ps =(struct S*) malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0;i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//������С
	int *ptr=realloc(ps->arr, 10*sizeof(int));
	
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 5; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr=NULL;
	free(ps);
	return 0;
}