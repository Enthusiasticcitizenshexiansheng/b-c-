#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

struct S
{
	int a;
	double b;
	char c[20];
};

////д��
//int main()
//{
//	struct S s = { 12,3.45,"as" };
//
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	
//		fwrite(&s,sizeof(struct S),1,pf);
//
//		fclose(pf);
//		pf = NULL;
//	return 0;
//}








//int main()
//{
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%d %f %s", tmp.a, tmp.b, tmp.c);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}










//��λ�ļ�ָ��
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
			{
				return 0;
			}


	//��λָ��
	fseek(pf, 1, SEEK_CUR);//end set��ͷ


	//��ȡ
	int ch = fgetc(pf)	;
	printf("%c", ch);


		fclose(pf);
	pf = NULL;
}