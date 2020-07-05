#pragma once


struct Admin {
	char username[50] = "VoHoaiViet01";
	char password[50] = "VietMap456132";
};

struct Date {
	int day;
	int month;
	int year;
};

struct LoginData {
	char username[50];
	char password[50];
};

struct UserData {
	LoginData Login;
	char name[50];
	Date birth;
	char address[50];
	char CMND[50];
	int sex;//0 la nam //1 la nu
	int status;//0 la active// 1 la chua active
	int job;// 0 la quan ly // 1 la chuyen vien
};

struct UserNode {
	UserData data;
	UserNode* next;
};

struct UserList {
	UserNode* head;
	int num;
};



void createUserList(UserList& list);

void LoadUserList(UserList& list);

void AddUserNode(UserList& list, UserData x);