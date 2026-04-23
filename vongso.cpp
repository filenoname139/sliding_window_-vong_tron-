#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  freopen("vongso.inp","r",stdin);
  /* freopen("vongso.out","w",stdout); */
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  // dung thuat toan cua so truot
  ll sum=0;
  ll sum_Max=sum;
  // tinh tong cua k phan tu dau tien
  for(int i=0;i<k;i++){
    sum+=a[i];
  }
  for(int i=1;i<n;i++){
    sum+=-a[i-1]+a[(i+k-1)%n];
    sum_Max=max(sum_Max,sum);
  }
  cout << sum_Max;
  return 0;
}
