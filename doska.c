#include <stdio.h>

int main()
{
    int i, j;
    char mas[8][10] = {
    {'|','s','k','l','c','f','l','k','s','|'},
    {'|','p','p','p','p','p','p','p','p','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|','P','P','P','P','P','P','P','P','|'},
    {'|','S','K','L','F','C','L','K','S','|'},
	};
	
	for (i=0; i<8; i++){
		for (j=0; j<10; j++){
			printf("%c", mas[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}
