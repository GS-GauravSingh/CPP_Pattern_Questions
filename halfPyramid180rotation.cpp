#include<iostream>
using namespace std;
 
int main(void){ 
    int a;
    cout<< "Enter a number: ";
    cin>>a;
    
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < a-i-1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}