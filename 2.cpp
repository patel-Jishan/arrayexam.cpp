#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter the number of rows size: ";
    cin>>row;
    cout<<"Enter the number of columns size: ";
    cin>>cols;
    int arr[row][cols];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];


        }
    }
    int max=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"The maximum element in array is :"<<max<<endl;
    
}