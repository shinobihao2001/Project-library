#include"HeaderSytem.h"
#include<iostream>

using namespace std;

void createUserList(UserList& list)
{
	list.head = NULL;
	list.num = 0;
}

void LoadUserList(UserList& list)
{
	FILE* fi = fopen("userlist.bit", "wb");
	if (fi == NULL)
		return;
	UserNode* p;
	p = list.head;
	for (p=list.head;p;p=p->next){
		fread(p, sizeof(UserData), 1, fi);
		p = p->next;
		list.num++;
	}
	fclose(fi);
}

void AddUserNode(UserList& list, UserData x)
{
	UserNode* newNode;
	newNode = new UserNode;
	newNode->data = x;

	if (list.head == NULL)
	{
		list.head = newNode;
		list.num++;
		return;
	}

	UserNode* p;
	for (p = list.head; p; p = p->next) {
	}
	p->next = newNode;
	list.num++;	
}