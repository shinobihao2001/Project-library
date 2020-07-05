#include "ConsoleWork.h"

struct LoginData {
	char username[50];
	char password[50];
};//xoa sau khi ghep cac file lai

void getPass(char pass[]) {
	int dem = 0;
	int c = ' ';
	while (c != 13) {
		c = _getch();
		if (c == 13) break;
		pass[dem] = c;
		dem++;
		printf("*");
	}
	pass[dem] = '\0';
}

void registerScreen() {
	system("CLS");
	reSizeConsole(1200, 2000);
	LoginData reg;
	gotoXY(50, 10);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 11);
	printf("+                  ==== DANG KY ===                  +");
	gotoXY(50, 12);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 13);
	printf("+  1-Ten Dang Nhap:                                  +");
	gotoXY(50, 14);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 15);
	printf("+  2-Mat Khau:                                       +");
	gotoXY(50, 16);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 17);
	printf("+  3-Nhap Lai Mat Khau:                              +");
	gotoXY(50, 18);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(75, 13);
	gets_s(reg.username, 50);
	int checkpass;
	char temp[50];
	do {
		gotoXY(75, 15);
		printf("                        ");
		gotoXY(75, 17);
		printf("                        ");
		gotoXY(75, 15);
		getPass(temp);
		gotoXY(75, 17);
		getPass(reg.password);
		checkpass = strcmp(reg.password, temp);
		if (checkpass != 0)
		{
			gotoXY(50, 19);
			printf("Mat khau ban nhap khong trung nhau!");
		}
	} while (checkpass != 0);
	gotoXY(0, 20);
}
//sau registe la man hinh dien thong tin user

void loginScreen() { 
	system("CLS");
	reSizeConsole(1200, 2000);
	LoginData log;
	gotoXY(50, 10);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 11);
	printf("+                 ==== DANG NHAP ===                 +");
	gotoXY(50, 12);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 13);
	printf("+  1-Ten Dang Nhap:                                  +");
	gotoXY(50, 14);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 15);
	printf("+  2-Mat Khau:                                       +");
	gotoXY(50, 16);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(70, 13);
	gets_s(log.username, 50);
	int checkpass;
	do {
		gotoXY(70, 15);
		printf("                        ");
		gotoXY(70, 15);
		getPass(log.password);
		checkpass = strcmp(log.password, "something");//thay bang mat khau doc da luu truoc do
		if (checkpass != 0)
		{
			gotoXY(50, 17);
			printf("Mat khau ban nhap khong chinh xac!");
		}
	} while (checkpass != 0);
	gotoXY(0, 20);
}
//sau login la man hinh cac chuc nang tiep theo
void startScreen() {
	system("CLS");
	reSizeConsole(1200, 2000);
	gotoXY(50, 0);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 1);
	printf("+             --- QUAN_LI_THU_VIEN ---               +");
	gotoXY(50, 2);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoXY(50, 5);
	printf("Nhan 1 - Dang Nhap");
	gotoXY(50, 6);
	printf("Nhan 2 - Dang Ky");
	Nocursortype();
	int x = _getch();
	if (x == 49) {
		loginScreen();
	}
	if (x == 50) {
		registerScreen();
	}
}
