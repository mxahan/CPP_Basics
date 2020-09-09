# include <iostream>
using namespace std;

int gcd(int n1, int n2);

int main()
{
  int n1, n2;
  int res_gcd;

  cout << "Please enter two integers  ";

  cin >> n1 >> n2;

  res_gcd = gcd(n1, n2);
  cout<< "GCD of "<< n1 <<" and " <<n2 << " is " << res_gcd << "\n";

  return 0;

}

int gcd(int n1, int n2)
{
  if (n2!=0)
  {
    cout << n1 <<" and "<< n2 << "\n";
    return gcd (n2, n1%n2);
  }
  else
    return n1;
}
