#include <iostream>
#include "dothi1.h"
using namespace std;
FILE *input1, *input1_1, *input1_2;
// mo file
void moFile()
{
	input1= fopen("input1.txt","r");
    input1_1= fopen("input1_1.txt","w");
    input1_2= fopen("input1_2.txt","w");
    if(input1==NULL || input1_1==NULL || input1_2==NULL)
    {
    	printf("Loi mo file!");
	}
}

// dong file
void dongFile()
{
	fclose(input1);
	fclose(input1_1);
	fclose(input1_2);
}

int main()
{
	int A[MAX][MAX];
	int n=6;
	
	moFile();
	docMaTran(input1, A, n); 
	inDsKe(input1_1, A, n); 
	inDsCanh(input1_2, A, n);
	dongFile();	
}