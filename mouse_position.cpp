#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
	// 死循环
	while (1) 
	{
		POINT pt = {0,0};
		GetCursorPos(&pt);
		printf("x=%d,y=%d\n", pt.x,pt.y);
		Sleep(3000);
	}
	
	//system("pasue");
	return 0;
}