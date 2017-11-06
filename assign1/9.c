/*
* Copyright Rohit Das (C) 2017
* To display pattern as shown below
▲▲▲▲▲▲▲▲▲▲
▲---------▲
▲---------▲
▲---------▲
▲---------▲
▲---------▲
▲---------▲
▲---------▲
▲---------	▲
▲▲▲▲▲▲▲▲▲▲
*/
#include <locale.h>
#include <stdio.h>
#include <wchar.h>

#define DIM 10

int main(void)
{
    setlocale(LC_ALL, "");   
    for (int i = 0; i < DIM; i++) {
    	printf("%lc", (wint_t)9650);
    }
    printf("\n");
    
    for (int j = 0; j < DIM; j++) {
	    for (int i = 0; i < DIM; i++) {
	    	if (i == 0 || i == DIM -1) {
	    		printf("%lc", (wint_t)9650);
	    		if (i == DIM - 1) {
	    			printf("\n");
	    		}
	    	} else {
	    		printf("-");
	    	}
	    }
    }
    
    for (int i = 0; i < DIM; i++) {
    	printf("%lc", (wint_t)9650);
    }
    printf("\n");
    return 0;
}
