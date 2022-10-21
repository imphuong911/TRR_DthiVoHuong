#include <iostream>
#include "dothi1.h"
using namespace std;
FILE *input1_2, *output1_2;

void moFile()
{
    input1_2= fopen("input1_2.txt","r");
    output1_2= fopen("output1_2.txt","w");
    if(input1_2==NULL || output1_2==NULL)
    {
    	printf("Loi mo file!");
	}
}

void dongFile()
{
	fclose(input1_2);
	fclose(output1_2);
}

int main()
{
	int A[MAX][MAX];
	int n=6;
	moFile();
	
	docDsCanh(input1_2, A, n);
	inMatran(output1_2, A, n);
	fprintf(output1_2, "%s", "Danh sach ke\n");
	inDsKe(output1_2, A, n);
	inBacCuaDinh(output1_2, A, n);
	
	dongFile();	
}