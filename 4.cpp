#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>cols;
    int arr[row][cols];
cout<<"Enter the elements of the array:"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j];
        cout<<"a["<<i<<"]["<<j<<"]=";

    }
}
int rowsize,columnsize;
cout<<" Enter the Row element:"<<endl;
cin>>rowsize;
for(int i=0;i<row;i++){
    rowsize +=row;
    cout<<"a["<<i<<"]["<<rowsize<<"]="<<endl;;

}
cout<<"Enter the column element:"<<endl;
cin>>columnsize;
for(int j=0;j<cols;j++){
    columnsize +=cols;
    cout<<"a["<<j<<"]["<<columnsize<<"]="<<endl;
}



}
