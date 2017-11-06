/*
* Copyright Rohit Das (C) 2017
* To read last n characters from a file (used a.txt)
*/
#include <stdio.h>
#include <stdlib.h>
 
int main() {
   FILE *fp;   char ch;
   int num;   long length; 
   printf("Enter the value of num : ");
   scanf("%d", &num); 
   fp = fopen("a.txt", "r");		//open the file
   if (fp == NULL) {
      puts("cannot open this file");   exit(1);
   } 
   fseek(fp, 0, SEEK_END);	//set fp to end of file
   length = ftell(fp);
   fseek(fp, (length - num - 1), SEEK_SET);//2 because of EOF 
   do {
      ch = fgetc(fp);   putchar(ch);
   } while (ch != EOF);
   printf("\n");
   fclose(fp);   return(0);
}
