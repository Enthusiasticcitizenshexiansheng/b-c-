#include<stdio.h>

////p77-1 1.Ԥ������ż�ָ��__FILE__λ��
////#define MX 100
//#define str "hehe"  //�ú���
//
//
//int main()
//{
//	//printf("%d\n", MX);
//	//printf("%s\n", __FILE__);//��ַ
//
//
//	int i = 0;
//	FILE* pf = fopen("text.txt", "w");
//	fprintf(pf, "file %s   line %d    data %s   time %s",
//		__FILE__, __LINE__, __DATE__, __TIME__);//λ�� ��  ���� ʱ�� ���� ���ǰ
//	printf("%s  ", __FUNCTION__);
//	printf("%s", str);
//
//	//printf("%s", __STDC__);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//
////2.�궨�����滻
//#define doubl(x) ((x)*(x))
//#define jia(y) ((y)+(y))
//int main()
//{
//	int a = 10;
//	printf("%d \n", 2 * doubl(a));
//
//	int b = 8;
//	int z = jia(b) * 2;
//	printf("%d ", z);
//	return 0;
//}


////p78-1 ���е��ض����� ���ᱻ�滻
//#define kuaikan 2000
//
//int main()
//{
//	printf(" kuaikan �û�������%d(kuaikan���Ʋ��ᱻ�滻)", kuaikan);
//
//	return 0;
//}



////p78-2 �����滻�ַ����е��ض�����
//
//#define PRIN(X) printf("the vale "  #X  " is %d",X)
//int main()
//{
//	int a = 15;
//	PRIN(a);
//	return 0;
//}




//p78-3 �ں궨�壨define���� ## �ɺϲ�����

#define HECHEN(A,B)  A##B
int main()
{
	int class5 = 65;
	printf("class5 renshu wei :%d ", HECHEN(class, 5));
	return 0;
}