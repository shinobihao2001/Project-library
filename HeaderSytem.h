#pragma once

struct SytemFile {
	int AmountOfUser=0;
};

struct Admin {
	char username[50] = "VoHoaiViet01";
	char password[50] = "VietMap456132";
};


void ReadSytemFile(SytemFile &file);

void WriteSytemFile(SytemFile file);