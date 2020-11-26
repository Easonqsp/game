#pragma once
#include<Windows.h>
HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cinfo;
void cur(bool vis) {
	cinfo.bVisible = vis;
	SetConsoleCursorInfo(fd, &cinfo);
}