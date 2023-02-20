//  Program to Find the Sum of Each Row and Column of a Matrix
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter row and column of the matrix"<<endl;
    cin>>row>>column;
    int a[row][column];
    cout<<"Enter Elements into the array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>a[i][j];
        }
    }
    // Print input row
    for(int i=0;i<row;i++){
        int row_sum=0,column_sum=0;
        for(int j=0;j<column;j++){
            row_sum += a[i][j];
            column_sum += a[j][i];
        }
        cout<<"Sum of "<<i+1<<"th row is "<<row_sum<<endl;
        cout<<"Sum of "<<i+1<<"th column is "<<column_sum<<endl;
    }
    return 0;
}