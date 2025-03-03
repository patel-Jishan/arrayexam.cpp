#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<"a["<<i<<"]=";



    }
    cout<<"Negative number in array is :";
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            cout<<arr[i]<<",";
        }
    }
    cout<<endl;
}
