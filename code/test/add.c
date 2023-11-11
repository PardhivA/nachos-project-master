/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
	int pid;
    result = Add(42, 23);
     PrintString("jBEFORE SLEEP ");
    pid = Exec("nstr", 0);
    Sleep(10
    );
    PrintString("AFTER SLEEP");
}
    
