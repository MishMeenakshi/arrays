#include<stdlib.h>
#include<iostream>
using namespace std;
int pal(int a )
{ int rem,rev=0;

 int temp; temp=a; 
  while(a!=0)
  {
  rem=a%10;
  rev=(rev*10)+rem;
  a=a/10;
  }
  if(temp==rev)
   return 1;
   else
   return 0;
}

int main()
{   int t,n,p,i;
    cout<<"enter the number of test cases :"<<endl;
    cin>>t;
    while(t!=0)
    { cout<<"enter any number you wish:"<<endl;
      cin>>n;
      if(n*10<=90)
      {
        cout<<"nearest palindrome is :"<<n<<endl;    }
        else 
    {
          p=pal(n);
        if(p==1) {cout<<"nearest palindrome is :"<<n<<endl; goto l1;}
        else
    {
        for(i=0;i<=n;i++)
    {     n=n-1;
        p=pal(n);
            if(p==1) {cout<<"nearest palindrome is :"<<n<<endl; goto l1;}
                else {
                n=n+2;
             p=pal(n);
            if(p==1) {
			{cout<<"nearest palindrome is :"<<n<<endl; goto l1;}
            }
            else{
			n=n-2;
             continue;}
    }
        }
            }
    l1:  t--;

}  }return 0;
 }
