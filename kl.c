#include <windows.h>
#include <stdio.h>

LRESULT hook_proc(int code, WPARAM wParam, LPARAM lParam) {

	// Log keyboard events
	printf("a key has been pressed\n");

}


int main() {

	HHOOK hhook = SetWindowsHookExA(WH_KEYBOARD_LL, hook_proc, NULL, 0);
	if (hhook == NULL) 
		printf("hhook wasn't installed");
	printf("hook was installed correctly");

}
