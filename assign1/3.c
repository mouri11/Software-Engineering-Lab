/*
* Copyright Rohit Das (C) 2017
* To check if a matrix is Magic Square
*/
#include<stdio.h>
#include<stdlib.h>

void input();   void init();   void getdata();   void validate();   
void validmat();   int leftdia();  int rightdia();   int rowsum();   
int colsum();

//global vars
int arr[100][100],size;

//functions	
void input(){
	int num=0;
	printf("Enter magic square size: \n");	scanf("%d",&size);
	init(size,num);
	printf("enter the elements: \n");	getdata(size);	
}

void init(int size,int num)
{
	int i,j;
	for(i=0;i<size;i++)    for(j=0;j<size;j++)    arr[i][j]=num;
}

void getdata(int size)
{
	int i,j,num;
	for(i=0;i<size;i++){
    		for(j=0;j<size;j++){
        		scanf("%d",&num);	arr[i][j]=num;
    		}
	}
}

void validate()
{
    int i,j,k;    int ar[size*2+2];
    int arsize=(size*2+2);
    for(i=0;i<(size*2+2);i++)    ar[i]=0;
    for(i=0;i<size;i++)    ar[i]=rowsum(arr,i);
    for(j=0;j<size;j++)    ar[j+i]=colsum(arr,j);
    ar[j+i]=leftdia();    ar[j+i+1]=rightdia();
	for (i = 0;i < size; i++) {
		for (j = 0;j < size; j++) printf("%d ",arr[i][j]);
		printf("\n");
	}
    validmat(ar,arsize);     
}

void validmat(int ar[],int arsize)//validation
{
    int i,valid=0;
    for(i=0;i<arsize-1;i++)
    {
        if(ar[i]==ar[i+1])    valid=1;
        else    valid=0;
    }
    if(valid==1)    printf("This matrix is a magic square.\n");
    else   printf("This matrix is not a magic square.\n");
}

int leftdia()   //left diagonal sum
{
    int i,sum=0;
    for(i=0;i<size;i++)    sum=sum+arr[i][i];
    return sum;
}

int rightdia()  //right diagonal sum
{
    int i,sum=0;
    for(i=0;i<size;i++)    sum=sum+arr[i][size-1-i];
    return sum;
}

int rowsum(int arr[100][100],int index) //calculates row sum
{
    int i,x=0;
    for(i=0;i<size;i++)    x=x+arr[index][i];
    return x;
}

int colsum(int arr[100][100],int index)//calculates sum of the columns
{
    int i,x=0;
    for(i=0;i<size;i++)    x=x+arr[i][index];
    return x;
}

int main()
{
	input();    validate();
	return 0;
}
