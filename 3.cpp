#include <iostream>
using namespace std;

int main() {
    int row, col;
    int m[10][10];
  
    cout << "Enter the array row and column size: ";
    cin>>row;
    col = row; 
  
    cout << "Enter array elements:" << endl;
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            cout <<"a["<<i<<"]["<<j<<"]=";
            cin>>m[i][j];
        }
    }
   
 cout << "The transpose matrix of an array:" << endl;
 for (int i=0; i<col;i++) {
  for (int j=0;j<row;j++) {
            cout<<m[j][i]<<" ";
        }
        cout<<endl;
    }

}