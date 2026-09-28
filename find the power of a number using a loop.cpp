
#include <iostream>
using namespace std;

int main()
{
  int a,n,i,p=1;
  cin>>a>>n;

  for(i=1;i<=n;i++)
  {
      p=p*a;
  }

  cout<<p;

  return 0;
}
