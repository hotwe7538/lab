#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 10
#define TRUE 1
#define FALSE 0

#define ADD 1
#define REMOVE 2
#define CHECK 3
#define ORDER 4
#define END 5

#define AMERICANO 1
#define CAFELATTE 2
#define JUICE 3
#define ICECREAM 4
#define CANCEL 5

#define AMERICANO_PRICE 4000
#define CAFELATTE_PRICE 4500
#define JUICE_PRICE 5000
#define ICECREAM_PRICE 5500

typedef struct
{
	char* foods[MAX_LEN];
	int idxOfFoods;
	int totalPrice;
}ItemList;

void select()
{
	puts("====== WHAT DO YOU WANT ======");
	puts("1. ���� �߰�");
	puts("2. ���� ����");
	puts("3. ���� ���� Ȯ��");
	puts("4. ���� ���� �ֹ�");
	puts("5. ���α׷� ����");
}

void showMenu()
{
	puts("====== ADD MENU ======");
	puts("1. �Ƹ޸�ī�� (4000)");
	puts("2. ī��� (4500)");
	puts("3. �ֽ� (5000)");
	puts("4. ���̽�ũ��(5500)");
	puts("5. ���� ���");
	
}

void showMenu()
{
	puts("====== ADD MENU ======");
	puts("1. �Ƹ޸�ī�� (4000)");
	puts("2. ī��� (4500)");
	puts("3. �ֽ� (5000)");
	puts("4. ���̽�ũ��(5500)");
	puts("5. ���� ���");

}
void addMenu(ItemList* itemlist)
{
	if (itemlist->idxOfFoods >= MAX_LEN) {
		puts("�� �̻� �߰��� �� �����ϴ�!");
		return; // break �ɾ��ذŶ� �Ȱ���
	}

	int choice;
	showMenu();
	printf("���� : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case AMERICANO:
		puts("�Ƹ޸�ī�� �߰�");
		itemlist->foods[(itemlist->idxOfFoods)++] = "�Ƹ޸�ī��";
		itemlist->totalPrice += AMERICANO_PRICE;
		break;
	case CAFELATTE:
		puts("ī��� �߰�");
		itemlist->foods[(itemlist->idxOfFoods)++] = "ī���";
		itemlist->totalPrice += CAFELATTE_PRICE;
		break;
	case JUICE:
		puts("�ֽ� �߰�");
		itemlist->foods[(itemlist->idxOfFoods)++] = "�ֽ�";
		itemlist->totalPrice += JUICE_PRICE;
		break;
	case ICECREAM:
		puts("���̽�ũ�� �߰�");
		itemlist->foods[(itemlist->idxOfFoods)++] = "���̽�ũ��";
		itemlist->totalPrice += ICECREAM_PRICE;
		break;
	case CANCEL:
		puts("���� ���");
		break;
	default:
		puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
		break;
	}
}

int removeItem(ItemList* itemlist, char* itemToRemove)
{
	int i, rmIdx = -1;
	for (i = 0; i < itemlist->idxOfFoods; i++)
	{
		if (strcmp(itemlist->foods[i], itemToRemove))
		{
			rmIdx = i;
			break;
		}
	}
	if (rmIdx >= 0)
	{
		for (i = rmIdx; i < itemlist->idxOfFoods; i++)
		{
			itemlist->foods[i] = itemlist->foods[i + 1];
		}
		if (rmIdx == 0 && itemlist->idxOfFoods == 1)
		{
			itemlist->foods[0] = NULL;
		}
		printf("%s �����߽��ϴ�\n", itemToRemove);
		return TRUE;
	}
	else
	{
		printf("������ ����� �����ϴ�\n");
		return FALSE;
	}
}




void removeMenu(ItemList* itemlist)
{
	if (itemlist->idxOfFoods >= MAX_LEN) {
		puts("�� �̻� ������ �� �����ϴ�!");
		return; // break �ɾ��ذŶ� �Ȱ���
	}

	int choice;
	showRemoveMenu();
	printf("���� : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case AMERICANO:
		if (removeItem(itemlist, "�Ƹ޸�ī��"))
		{
			itemlist->totalPrice -= AMERICANO_PRICE;
			(itemlist->idxOfFoods)--;
		}
		break;
	case CAFELATTE:
		if (removeItem(itemlist, "ī���"))
		{
			itemlist->totalPrice -= CAFELATTE_PRICE;
			(itemlist->idxOfFoods)--;
		}
		break;
	case JUICE:
		if (removeItem(itemlist, "�ֽ�"))
		{
			itemlist->totalPrice -= JUICE_PRICE;
			(itemlist->idxOfFoods)--;
		}
		break;
	case ICECREAM:
		if (removeItem(itemlist, "���̽�ũ��"))
		{
			itemlist->totalPrice -= ICECREAM_PRICE;
			(itemlist->idxOfFoods)--;
		}

		break;
	case CANCEL:
		puts("���� ���");
		break;
	default:
		puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
		break;
	}
}

void checkMenu(ItemList* itemlist)
{
	int i = 0;
	printf("�ֹ� ǰ�� �Ѿ��� %d ���Դϴ�! ǰ���� ������ �����ϴ�.\n ==>", itemlist->totalPrice);
	for (i = 0; i < itemlist->idxOfFoods; i++)
	{
		printf("%s", itemlist->foods[i]);
	}
	printf("\b ");
	printf(" \n");
}

int order(ItemList* itemlist)
{
	if (itemlist->idxOfFoods <= 0)
	{
		puts("�ƹ��͵� �������� �ʾ� �ֹ� �Ұ��մϴ�!");
	}

	int choice;
	checkMenu(itemlist);
	puts("������ �ֹ��Ͻðھ��?");
	printf("yes (1), no (2) : ");
	scanf("%d", &choice);
	if (choice == 1)
		return TRUE;
	else
		return FALSE;
}



int main(void)
{
	ItemList itemlist;
	itemlist.idxOfFoods = 0;
	itemlist.totalPrice = 0;
	int choice;

	select();
	printf("���� : ");
	scanf("%d",&choice)
		switch (choice)
		{
		case ADD:
			addMenu(&itemlist);
			printf("\n\n");
			break;
		case REMOVE:
			addMenu(&itemlist);
			printf("\n\n");
			break;
		case CHECK:
			checkMenu(itemlist);
			printf("\n\n");
			break;
		case ORDER:
			if (order(&itemlist))
			{
				puts("�ֹ� �Ϸ�! ���α׷��� �����մϴ�.");
				return 0;
			}
			else
			{
				puts("�ֹ� ����!");
				printf("\n\n");
			}
			break;
		case END:
			puts("���α׷��� �����մϴ�!");
			return 0;
		default:
			puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
			break;
		}

	return 0;
}


