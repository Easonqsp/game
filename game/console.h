#pragma once
#include"includes.h"
using namespace std;
HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cinfo;
void cur(bool vis) {
	cinfo.bVisible = vis;
	SetConsoleCursorInfo(fd, &cinfo);
}

void pau() {
	cout << "Press any key to continue" << endl;
	getchar();
}
void cls() {
	system("cls");
}