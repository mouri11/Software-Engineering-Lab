/*
* Copyright Rohit Das (C) 2017
* To compare two strings without strcmp
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char* s1, char* s2, int len1, int len2)
{
	if (len1 != len2) {
		printf("Not equal\n");
		return 1;
	}
	
	for (int i = 0; i < len1; i++) {
		if (s1[i] != s2[i]) {
			printf("Not equal\n");
			return 1;
		}
	}
	printf("Equal\n");
	return 0;
}

int main()
{
	int len1, len2;
	printf("Enter length of first string: ");
	scanf("%d", &len1);
	printf("Enter the first string: ");
	char* s1 = (char *)malloc((len1 + 1) * sizeof(char));
	scanf("%s", s1);
	printf("Enter length of second string: ");
	scanf("%d", &len2);
	printf("Enter the second string: ");
	char* s2 = (char *)malloc((len2 + 1) * sizeof(char));
	scanf("%s", s2);
	
	check(s1, s2, len1, len2);
	return 0;
}
