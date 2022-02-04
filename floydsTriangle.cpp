#include<iostream>
using namespace std;
 
int main(void){ 
    int a;
    cout<< "Enter a number: ";
   
    cin>>a;
    for (int i = 1, k = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}