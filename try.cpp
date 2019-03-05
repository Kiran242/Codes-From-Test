
/***

345 should ouput 3.

How??

Here is the explanation...
3+4+5=12
12>10
again 1+2=3

**/



#include<iostream>
using namespace std;
int eval(int);
int main()
{
    
   
    int n,ans;
    
    cout<<"\nEnter number";
    cin>>n;
    
    ans=eval(n);
    
    while(ans>10)
    {
        ans=eval(ans);
    }
    
    cout<<endl<<ans;
    
    
}


 
    int eval (int n)
    {
         int res[10],dig,i=0,sum=0;
        dig=n;
    
        while(dig!=0)
    {
        res[i]=dig%10;
        dig=dig/10;
        i++;
    
    }
    
    
        for(int j=0;j<i;j++)
    {
    cout<<"  "<<res[j];
    }
    
        for(int j=0;j<i;j++)
    {
        sum=sum+res[j];
    }  
        
        return sum;
    
        
    }//eval fun defn
    
    
