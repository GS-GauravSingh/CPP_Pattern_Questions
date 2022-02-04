#include<iostream>
using namespace std;
 
int main(void){ 
    int n;
    cout<<"Enter a number";
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i, k = 1; j <= n; j++, k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}