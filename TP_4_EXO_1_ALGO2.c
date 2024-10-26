// EXERCICE 1

#include <stdio.h>
#include<stdlib.h>
int ** allouer ( int L, int C)
	{int i;
	 int **A;
 	 A = (int**)malloc(L*sizeof(int *));
	 if (A==NULL)
		{printf("erreur\n");
		 exit (0);}
	 for( i=0; i<L; i++)
		{A[i]= (int*)malloc(C*sizeof(int));
		 if ( A[i]==NULL)
			{printf("erreur de reservation\n");
			 exit (0);}}
	return (A);}
void liberation (int  **A, int L, int C)
	{int i;
	 for( i=0; i<L; i++)
		{free(A[i]);}
	free ( A);
	printf("\nLiberation effectuer\n");}
void lecture ( int **A, int L, int C)
	{int i, j ;
	 for (i=0 ; i<L ; i++)
		{for ( j=0 ; j<C ; j++)
			{printf("entrer l'element [%d][%d]\t", i, j);
			 scanf("%d",(A[i]+j));}}}
void affichage ( int **A, int C, int L)
	{int i, j ;
	 for (i=0 ; i<L ; i++)
		{for ( j=0 ; j<C ; j++)
			{printf(" %d\t", *(A[i]+j));}
		printf("\n");}}
int ** produit ( int **A, int **B, int L, int LC, int C)
{	int **D;
	int p,i,k,j;
	D= allouer (L,C);
	for (i=0;i<L;i++)
		{for (j=0;j<C;j++)
			{p=0;
			 for (k=0; k<LC;k++)
				{p=p+ A[i][k]*B[k][j];}
			 D[i][j]=p;}}
	return (D);}
main()
{	int **M1, **M2, **M3;
	int Lig=3, LC=2, Col=3;
	M1=allouer(Lig,Col);
	M2=allouer(Col,Lig);
	M3=allouer(Lig,Col);
	printf("----Matrice M1----\n");
	lecture(M1, Lig,Col);
	affichage(M1,Lig,Col);
	printf("----Matrice M2----\n");
	lecture(M2,Col,Lig);
	affichage(M1,Lig,Col);
	printf("----Matrice M3----\n");
	M3= produit(M1,M2,Lig,LC,Col);
	affichage(M3,Lig,Col);
	liberation(M1,Lig,Col);
	liberation(M2,Lig,Col);
	liberation(M3,Lig,Col);
	system("pause");
}
