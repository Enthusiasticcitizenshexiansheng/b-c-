#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps -> data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX) {
		printf("ͨѶ¼���ˣ��޷�����\n");
	}
	else
	{
		printf("���֣�");
		scanf("%s", ps->data[ps->size].name);
		printf("���䣺");
		scanf_s("%d", &(ps->data[ps->size].age));
		printf("�Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("�绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("��ַ��");
		scanf("%s", ps->data[ps->size].add);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}



void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].add
				);
		}
	}
}






//�ڲ���װ����
static int Findname(const struct Contact* ps,char name[30])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name));
		{return i; }
	}
	return -1;
}





//ɾ��
void DelContact(struct Contact* ps) 
{

	char name[30];
	printf("ɾ˭����");
	scanf("%s", name);
	//����
	//�����±� �� -1
	int pos = Findname(ps, name);

	if (pos==-1)
	{
		printf("������Ҫɾ������");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
}	ps->size--;
		printf("ɾ���ɹ�");
	}

}



//3����
void SearchContact(const struct Contact* ps)
{
	char name[30];
	printf("�����˵����֣�");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if(pos==-1)
	{
		printf("�����������");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].add
			);
		}

	}


}






//�޸�
void xiugai(struct Contact* ps) {
	char name[30];
	printf("�޸��˵����֣�");
	scanf("%s", name);
	int pos =Findname(ps, name);
	if(pos==-1)
	{
		printf("�����������");
	}
	else
	{
		printf("���֣�");
		scanf("%s", ps->data[pos].name);
		printf("���䣺");
		scanf_s("%d", &(ps->data[pos].age));
		printf("�Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("�绰��");
		scanf("%s", ps->data[pos].tele);
		printf("��ַ��");
		scanf("%s", ps->data[pos].add);

		ps->size++;
		printf("�޸ĳɹ�\n");
	}
}