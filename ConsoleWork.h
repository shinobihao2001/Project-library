#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include "windows.h"
using namespace std;


int whereX();
int whereY();
void gotoXY(int x, int y);
void SetColor(WORD color);
void reSizeConsole(int width, int height);
void Nocursortype();