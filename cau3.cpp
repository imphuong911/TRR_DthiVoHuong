#include <iostream>
#include "dothi1.h"
using namespace std;
FILE *input1_1, *output1_1;
// mo file
void moFile()
{
    input1_1= fopen("input1_1.txt","r");
    output1_1= fopen("output1_1.txt","w");
    if(input1_1==NULL || output1_1==NULL)
    {
    	printf("Loi mo file!");
	}
}

// dong file
void dongFile()
{
	fclose(input1_1);
	fclose(output1_1);
}

int main()
{
	int A[MAX][MAX];
	int n=6;
	moFile();
	
	docDsKe(input1_1, A, n);
	inMatran(output1_1, A, n);
	fprintf(output1_1, "%s", "Danh sach canh\n");
	inDsCanh(output1_1, A, n);
	inBacCuaDinh(output1_1, A, n);
	
	dongFile();	
}