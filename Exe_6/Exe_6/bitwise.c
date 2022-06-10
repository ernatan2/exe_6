#include <stdio.h>




int pack4Chars2Int(char c1, char c2, char c3, char c4) {
	int result = 0;
	result = c4 << 3 * 8 | c3 << 2 * 8 | c2 << 1 * 8 | c1;
	return result;
}

int checkEvenParity(short input) {
	int counter = 0;
	int index = 1;
	for (int i = 0; i < 16; i++) {
		if ((input & index << i)) {
			counter++;
		}
	}
	return !(counter % 2);
}