#include<stdio.h>

//fseek ��λ  rewind ������ʼλ feof �ļ�������־


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//
//	//��λ�ļ�ָ�� 
//	fseek(pf, -2, SEEK_END);
//	fgetc(pf);
//	int pos = ftell(pf);
//
//	printf("%d ", pos);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}






//// rewind ������ʼλ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgetc(pf);
//	rewind(pf);
//	int pos = ftell(pf);
//
//	printf("%d ", pos);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}







//feof �ļ�������־
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}

	int ch = 0;
	while ((ch=fgetc(pf))!=EOF)
	{
		putchar(ch);
	}
	if(ferror(pf))
	{
		printf("error");
	}
	else if(feof(pf))
	{ 
		printf("wenjian jiesu\n");
	}
	
	fclose(pf);
	pf = NULL;
	return 0;
}
