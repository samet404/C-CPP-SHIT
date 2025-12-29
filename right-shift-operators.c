#include <stdio.h>

// https://www.geeksforgeeks.org/cpp/left-shift-right-shift-operators-c-cpp/

int main() {
  
    // a = 21(00010101)
    unsigned char a = 21;

    // The result is 00101010
    printf("a << 1 = %d\n", (a << 2));
  
  	// The result is 00000101
  	printf("a >> 2 = %d", (a >> 2));

    return 0;
}
