#include<stdio.h>


////1.�� �� �ر��ļ� fopen fclose  ������д��
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen( "te.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////2���ȴ��������� ��д��
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		Sleep(10000);
//		printf("wdwqddqwd");
//	}return 0;
//}




////3.ָ�� ָ��open���򲻿����ش�����Ϣ
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////4 �����͸��� ԭ�ļ� w  a׷��  bֻ
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("te.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////5. �ļ�˳���д fgetc�� fputc�ų���д
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("tse.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//д�ļ� д��
//	fputc('c',pf);
//	fputc('w', pf);
//	//�� fgetc
//	printf("%c ", fgetc(pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <string.h>
////���� ��Ļ���� 
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}




int main()
{
	FILE* fp;
	char c[] = "runool";
	char a[40];

	fp = fopen("w.text", "w+");
	//д��
	fwrite(c, strlen(c) + 1, 1, fp);       //cд��fp��
	
	fseek(fp, 0, SEEK_SET);//��ͷ

	fread(a, strlen(c) + 1, 1, fp);
	//д������ �ܴ�С Ԫ�ش�С ָ��
	
	
	printf("%s\n", a);
	printf("%s\n", a);
	fclose(fp);

	return 0;
}