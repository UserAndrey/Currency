#include <iostream>
#include <stdio.h>
#include <windows.h>
int main(int argc, char* argv[]) {
	SetConsoleOutputCP(1251);
	FILE *f;
	char buf[100];
	f = fopen ("C:\\Users\\User\\Desktop\\Currency.txt", "r");
	if(f==NULL) perror("Unable to open file");
	else {
		while (!feof(f)) {
			if(fgets (buf, 100, f) == NULL) break;
			fputs(buf, stdout);
		}
		fclose (f);
	}
	return 0;
}