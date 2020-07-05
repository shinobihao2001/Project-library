#include"HeaderSytem.h"
#include<iostream>

using namespace std;


void ReadSytemFile(SytemFile& file)
{
	FILE* fi=fopen("sytem.bit", "rb");
	if (fi == NULL)
	{
		file.AmountOfUser = 0;
	}
	fread(&file, sizeof(SytemFile), 1, fi);
	fclose(fi);
}

void WriteSytemFile(SytemFile file)
{
	FILE* fo = fopen("sytem.bit", "wb");
	fwrite(&file, sizeof(SytemFile), 1, fo);
	fclose(fo);
}