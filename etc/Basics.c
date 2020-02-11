#include <stdio.h>

int main() {
	int x = 5, y = 5;
	x = x ++ + ++ y;
	 y = ++x + ++y;
    printf("%d %d",x,y);
    return 0;
}
