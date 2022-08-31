#include<iostream>
using namespace std;

int main(){
    int matrixA[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int matrixB[2][3] = {{2, 3, 4},
                         {0, 1, 4}};

    int matrixC;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            matrixC = 0;
            for(int k = 0; k<2; k++){
                matrixC = matrixC + matrixA[i][k] * matrixB[k][j];
            }
            cout<<matrixC<<"\t";
        }
        cout<<endl;
    }

    return 0;
}