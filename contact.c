#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


InitContact(struct Contact* p) {

	memset(p->data, 0, sizeof(p->data));
	p->size = 0;
}






void AddContact(struct Contact* p)
{
if(p->size ==MAX)
{
	printf("ͨѶ¼��");
}else
{
	printf("���������֣�");
	scanf_s("%s", p->data[p->size].name);
	printf("���������䣺");
	scanf_s("%d", p->data[p->size].age);
	printf("�������Ա�");
	scanf_s("%s", p->data[p->size].sex);
	printf("�������ַ��");
	scanf_s("%s", p->data[p->size].dizhi);
	p->size++;
	printf("����ɹ�");
}
}


void showContact(const struct Contact* p)
{
	if(p->size==0)
	{
		printf("�յ�ͨѶ¼");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-8s\n", "����", "����", "�Ա�", "��ַ");
		for (i = 0; i < p->size; i++)
		{
			printf("%-20s\t%-4s\t%-5s\t%-8s\n", 
				p->data[i].name,
				p->data[i].age,
				p->data[i].sex
		, p->data[i].dizhi);
		}
	}



		
}