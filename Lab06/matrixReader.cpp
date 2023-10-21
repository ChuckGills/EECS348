#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


//adds and prints matrix
void matrixAdd(int **mat1,int **mat2,int size);
//=======================================================
void matrixSub(int **mat1,int **mat2,int size);
void matrixMult(int **mat1,int **mat2,int size);

//=====================================================
int main(int argc, char const *argv[])
{
    std::ifstream file("matrix.txt");
    
    int size;
    file >> size;
    static const int globalSize=size;
    //dynamically allocates memory
    int** mat1 = new int*[size];
    int** mat2 = new int*[size];

    for (int i = 0; i < size; i++) {
        mat1[i] = new int[size];
        mat2[i] = new int[size];
    }

    int data[100];
    int count = 0;

    int number;
    while (file >> number) {
            data[count] = number;
            count++;
    }
    //builds mat1
    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            mat1[i][j]=data[3*i+j];
        }
    }
    for(int i = 0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            mat2[i][j]=data[3*i+j+9];
        }
    }
    std:: cout<< "Charlie Gillund"<<endl<<"Lab06 Matrix Manipulation"<<endl;
    std::cout<<"Matrix 1: "<<endl<<mat1[0][0]<<" "<<mat1[0][1]<<" "<<mat1[0][2]<<endl;
    std::cout<<mat1[1][0]<<" "<<mat1[1][1]<<" "<<mat1[1][2]<<endl;
    std::cout<<mat1[2][0]<<" "<<mat1[2][1]<<" "<<mat1[2][2]<<endl;

    std::cout<<"Matrix 2: "<<endl<<mat2[0][0]<<" "<<mat2[0][1]<<" "<<mat2[0][2]<<endl;
    std::cout<<mat2[1][0]<<" "<<mat2[1][1]<<" "<<mat2[1][2]<<endl;
    std::cout<<mat2[2][0]<<" "<<mat2[2][1]<<" "<<mat2[2][2]<<endl;
    
    
    file.close();
    matrixAdd(mat1,mat2,size);
    matrixSub(mat1,mat2,size);
    matrixMult(mat1,mat2,size);

    
    

   
    return 0;
}
//adds and prints matrix
void matrixAdd(int **mat1, int **mat2,int size)
{
int addmat[size][size];
//adds matrix
    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            addmat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    //prints matrix
    std::cout<<endl<<"Matrix 1 + Matrix 2: "<<endl<<setw(3)<<addmat[0][0]<<" "<<setw(3)<<addmat[0][1]<<" "<<setw(3)<<addmat[0][2]<<endl;
    std::cout<<setw(3)<<addmat[1][0]<<" "<<setw(3)<<addmat[1][1]<<" "<<setw(3)<<addmat[1][2]<<endl;
    std::cout<<setw(3)<<addmat[2][0]<<" "<<setw(3)<<addmat[2][1]<<" "<<setw(3)<<addmat[2][2]<<endl;
    
}
//=======================================================
//subtracts and prints matrix
void matrixSub(int **mat1,int **mat2,int size)
{
    int submat[size][size];
    //subtracts matrix
    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
        submat[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    //prints matrix
    std::cout<<endl<<"Matrix 1 - Matrix 2: "<<endl<<setw(3)<<submat[0][0]<<" "<<setw(3)<<submat[0][1]<<" "<<setw(3)<<submat[0][2]<<endl;
    std::cout<<setw(3)<<submat[1][0]<<" "<<setw(3)<<submat[1][1]<<" "<<setw(3)<<submat[1][2]<<endl;
    std::cout<<setw(3)<<submat[2][0]<<" "<<setw(3)<<submat[2][1]<<" "<<setw(3)<<submat[2][2]<<endl;
}
void matrixMult(int **mat1,int **mat2,int size)
{
    int multmat[size][size];
    //matrix multiplication
    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            multmat[i][j]=0;
            for(int k=0; k<size;k++)
            {
                
                multmat[i][j]=multmat[i][j]+(mat1[i][k]*mat2[k][j]);
                
            }
            
        }
    }
    //prints matrix
    std::cout<<endl<<"Matrix 1 X Matrix 2: "<<endl<<setw(3)<<multmat[0][0]<<" "<<setw(3)<<multmat[0][1]<<" "<<setw(3)<<multmat[0][2]<<endl;
    std::cout<<setw(3)<<multmat[1][0]<<" "<<setw(3)<<multmat[1][1]<<" "<<setw(3)<<multmat[1][2]<<endl;
    std::cout<<setw(3)<<multmat[2][0]<<" "<<setw(3)<<multmat[2][1]<<" "<<setw(3)<<multmat[2][2]<<endl;
  
}