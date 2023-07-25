#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
            int z=1,x=1;
        for(int i=1;i<=n/2;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<2*z-1<<" ";
                z++;
            }
            cout<<endl;
        }
        for (int i=1;i<=n/2;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<2*x<<" ";
                x++;
            }
            cout<<endl;
        }
        }
        else
        {
            int z=1,x=1,a=n;
        for(int i=1;i<=n/2;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<2*z-1<<" ";
                z++;
            }
            cout<<endl;
        }
        for(int i=0;i<(n/2)+1;i++)
        {
            
            cout<<n*n-a+1<<" ";
            a=a-2;
        }
        
        for(int i=(n/2)+1;i<n;i++)
        {
           cout<<2*x<<" ";
           x++;
        }
        cout<<endl;
        for (int i=1;i<=n/2;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<2*x<<" ";
                x++;
            }
            cout<<endl;
        }
            
        }
    }
	
	return 0;
}