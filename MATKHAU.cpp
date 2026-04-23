#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  freopen("MATKHAU.inp","r",stdin);
  /* freopen("MATKHAU.out","w",stdout); */
  int db,mb,yb;
  int dm,mm,ym;
  cin >> db >> mb >> yb;
  cin >> dm >> mm >> ym;
  ll sum1=db+mb+yb;
  ll sum2=dm+mm+ym;
  ll bcnn=(sum1*sum2)/__gcd(sum1,sum2);
  cout << "Nm@" << to_string(bcnn);
  return 0;
}
