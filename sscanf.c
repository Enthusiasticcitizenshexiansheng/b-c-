#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//p��ͷ���Ƿ������� sp����һ����


//int main()
//{
//	FILE*pf=fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//
//	////д��
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	
//
//
//	//��ȡ
//	int ch= fgetc(pf);
//	printf("%c", ch);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//2����һ�� fgets
//
//int main()
//{
//	char buf[400] = { 0 };
//	FILE* PF = fopen("test.txt", "r");
//	if (PF == NULL)
//	{
//		return 0;
//	}
//
//
//	/*fgets(buf, 400, PF);
//	
//	printf("%s", buf);*/
//	
//	fgets(buf, 400, PF);
//	puts(buf);  //�Զ�����
//	
//	
//	fclose(PF);
//	PF = NULL;
//	return 0;
//}
//
//









////3��дһ�� fputs
//int main()
//{
//	char buf[400] = { 0 };
//	FILE* PF = fopen("test.txt", "w");
//	if (PF == NULL)
//	{
//		return 0;
//	}
//
//
//	fputs("nihao ", PF);
//	fputs("word", PF);
//
//	fclose(PF);
//	PF = NULL;
//	return 0;
//}
//



////4�����̶�ȡ����
//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 400, stdin);
//	fputs(buf, stdout);
//	return 0;
//}









////5����ʽ��д�ļ�
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//
//
//
//int main()
//{
//	struct S s = { 120, 2.34f ,"we"};
//	FILE* pf = fopen("test.txt", "w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//
//	fprintf(pf,"%d %f %s",s.e,s.wa,s.q);
//	
//	fclose(pf);
//	pf = NULL;
//	//printf("%s",pf);
//	return 0;
//}







//
////��ʽ����ȡ
////5����ʽ��д�ļ�
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//
////int main()
////{
////	struct S s = {0};
////	FILE* pf = fopen("test.txt", "r");
////	if (pf == NULL)
////	{
////		return 0;
////	}
////
////	fscanf(pf, "%d %f %s", &(s.e), &(s.wa), s.q);
////	printf("%d %f %s",s.e,s.wa, s.q);
////	fclose(pf);
////	pf = NULL;
////	return 0;
////}
//
////��׼������� �ڽṹ����ۺ�����
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin,"%d %f %s", &(s.e), &(s.wa), s.q);
//	fprintf(stdout, "%d %f %s", s.e, s.wa, s.q);
//}










////7.sprintf����һ����
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//int main()
//{
//	struct S s = { 100,12.1f,"asaasasas" }; 
//	char buf[400] = { 0 };
//	sprintf(buf,"%d %2f %s",s.e,s.wa,s.q);
//	printf("%s", buf);
//
//}






//8.sprintf����һ����
struct S
{
	int e;
	float wa;
	char q[16];
};
int main()
{
	struct S s = { 100,12.1f,"asaasasas" };
		char buf[400] = { 0 };
		sprintf(buf,"%d %2f %s",s.e,s.wa,s.q);
	struct S tmp= { 0 };
	
	
	sscanf_s(buf, "%d %f %s",&(tmp.e),&(tmp.wa),tmp.q,20);

	printf("%f", tmp.wa);
	return 0;
}