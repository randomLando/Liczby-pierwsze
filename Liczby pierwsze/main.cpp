#include <iostream>
using namespace std;
int main()
{
  int n, i, m=0, f=0;
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"zlozona"<<endl;
          f=1;
          break;
      }
  }
  if (f==0)
      cout << "pierwsza"<<endl;
  return 0;
}
