#include <stdio.h>
int main()
{
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= 5; b++) {
			for (int c = 1; c <= 5; c++) {
				for (int d = 1; d <= 5; d++) {
					int e = 15 - a - b - c - d;
					if (((b == 2) + (a == 3) == 1 && \
						(b == 2) + (e == 4) == 1 && \
						(c == 1) + (d == 2) == 1 && \
						(c == 5) + (d == 3) == 1 && \
						(e == 4) + (a == 1) == 1) && \
						(a*b * c * d * e == 120)){
						printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
                     }
				}
			}
		}
	}
}