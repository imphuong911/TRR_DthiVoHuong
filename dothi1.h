#define MAX 100

// doc ma tran ke tu file va luu vao mang
void docMaTran(FILE *fin, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fscanf(fin,"%d",&A[i][j]);
        }    
    }
}

// doc danh sach ke tu file va chuyen vao mang
void docDsKe(FILE *fin, int A[MAX][MAX], int n)
{
	char buf[MAX];
	int c, i=-1;
	while(fgets(buf, MAX, fin)!=NULL)
	{
		i++;
		for(int j=0; j<sizeof(buf); j++)
		{
			int c = buf[j]-'0';
			if(c>0)
			{
				A[i][c-1]=1;
				A[c-1][i]=1;
			}		
		}
			
	}
}

void docDsCanh(FILE *fin, int A[MAX][MAX], int n)
{
	int r, c;
    for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fscanf(fin,"%d %d", &r, &c);
    		A[r-1][c-1]=1;
    		A[c-1][r-1]=1;
     	}
    }
}

void inMatran(FILE *fout, int A[MAX][MAX], int n)
{
	fprintf(fout,"%s \n", "Ma tran ke");
	for(int i=0; i<n; i++)
    {	
    	for(int j=0; j<n; j++)	
    	{	
    		fprintf(fout, "%d ", A[i][j]);
        } 
		fprintf(fout, "%s", "\n");  
    }
}

void inDsKe(FILE *fout, int A[MAX][MAX], int n)
{
	int T[MAX], k=0, m;
	for(int i=0; i<n; i++)
    {	
        m=k;
    	for(int j=0; j<n; j++)	
    	{	
    		if(A[i][j]==1) // ke voi dinh (i+1) la dinh (j+1)
    		{ 
    			T[k]=j+1; 
    			k++; // dem so dinh ke 
			}
        }

        for(int l=m; l<k; l++)
        {
        	fprintf(fout,"%d ",T[l]);
		}
		fprintf(fout,"\n");    
    }
}

void inDsCanh(FILE *fout, int A[MAX][MAX], int n)
{
	for(int i=0; i<n; i++)
    {	
    	for(int j=i; j<n; j++)	
    	{	
    		if(A[i][j]==1)
    		{
    			fprintf(fout,"%d %d",i+1,j+1);
    			fprintf(fout,"\n");
			}
        }    
    }
}

void inBacCuaDinh(FILE *fout, int A[MAX][MAX], int n)
{
	fprintf(fout,"%s \n", "Bac cua dinh");
    for(int i=0; i<n; i++)
    {	
    	int sum=0;
    	for(int j=0; j<n; j++)	
    	{	
    		sum+=A[i][j];
        }    
        fprintf(fout, "%d: %d \n", i+1, sum);
    }
}
