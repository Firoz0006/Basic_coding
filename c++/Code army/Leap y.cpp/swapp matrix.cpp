#include<iostream>
using namespace std;
void printrow(int arr[][3],int row,int col){
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    cout<<arr[i][j]<<" ";
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9};
    for(int row=0;row<3;row++)
    for(int col=0;col<3;col++)
    cout<<arr[row][col]<<" ";
    printrow(arr,3,3);

}

