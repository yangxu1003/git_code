#include <stdio.h>

void Dective()
{
	char murderer;
	for (murderer = 'A'; murderer <= 'D'; murderer++) {
		if ((murderer != 'A') + (murderer == 'C')\
			+ (murderer == 'D') + (murderer != 'D') == 3) {
			printf("������%c\n", murderer);
		}
	}
}

int main()
{
	Dective();
	return 0;
}