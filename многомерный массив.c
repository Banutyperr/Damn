#include <stdio.h>

int main(void){
    
void scalarMultiply (int nRaws,int nColumns,int matrix[nRaws][nColumns], int scalar);
void displayMatrix (int nRaws,int nColumns,int matrix[nRaws][nColumns]);
int sampleMatrix[3][5] =
{
{ 7, 16, 55, 13, 12 },
{ 12, 10, 52, 0, 7 },
{ -2, 1, 2, 4, 9 }
};
printf ("Original matrix:\n");
displayMatrix (3,5,sampleMatrix);

scalarMultiply (3,5,sampleMatrix, 2);
printf ("\nMultiplied by 2:\n");
displayMatrix (3,5,sampleMatrix);

scalarMultiply (3,5,sampleMatrix, -1);
printf ("\nThen multiplied by -l:\n");
displayMatrix (3,5,sampleMatrix);

}


void scalarMultiply (int nRaws,int nColumns,int matrix[nRaws][nColumns], int scalar){
    int raw,column;
    for (raw=0;raw<nRaws;++raw){
        for (column=0;column<nColumns;++column)
        matrix[raw][column] *= scalar;
        
    }
}



void displayMatrix (int nRaws,int nColumns,int matrix[nRaws][nColumns]){
    int raw,column;
    for (raw=0;raw<nRaws;++raw){
        for (column=0;column<nColumns;++column)
        printf("%3i",matrix[raw][column]);
    printf("\n");}
    
}