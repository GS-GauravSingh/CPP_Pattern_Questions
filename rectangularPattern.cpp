#include<iostream>
using namespace std;
 
int main(void){ 
    int row, column;
    cout<< "Enter (space-separated) no. of rows and columns: ";
   
    cin>>row>>column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}