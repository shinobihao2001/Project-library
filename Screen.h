#pragma once
#include "ConsoleWork.h"

struct LoginData {
	char username[50];
	char password[50];
};//xoa sau khi ghep cac file lai

void getPass(char pass[]);
void registerScreen();
void loginScreen();
void startScreen();