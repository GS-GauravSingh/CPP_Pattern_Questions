#include<iostream>
using namespace std;
 
int main(void){ 
    
    int n;
    cout<<"Enter a anumber: ";
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n ; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    return 0;
}