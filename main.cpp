#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  
  for(int i=1; i<=n; i++)
    if( n%i==0)
        cout << i << " ";

  int suma=0;    
  for(int i=1; i<n; i++)
    if(n%i==0)
        suma=suma+i;
  
  cout <<"\n\n";
  
  if(suma==n)
    cout << "Liczba doskonala" << endl;
  else
   cout << "To nie jest liczba doskonala" << endl;
  
  return 0;
  
}
