/*████████████████████████████████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
█████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
█████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
█████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
█████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
*/

//// SOMETIMES YOU WIN SOMETIMES YOU LEARN :) ////
//// (1.01)^365 >> (0.99)^365 ////
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define fast  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) x.begin() , x.end()
#define rep(i , n) for(int i=0 ; i<n ; i++)
const ll M = 1e9 + 7;
const int MM =  998244353;

ll fact (ll x) {
  // factorial k liye!( less than 20)
  ll ans = 1;
  for (int i = 2 ; i <= x ; i++) {
    ans *= i;
  }

  return ans;
}

ll ncr(ll n , ll r) {
  // ncr --> n element me se r ele pick krne k ways
  ll temp = (fact(n) / (fact(r) * fact(n - r)));
  return temp;
}

ll  power(ll a, ll n)
{
  // a ki power n .
  ll res = 1;
  while (n)
  {
    if (n % 2 == 1)
      res = (res * a) % M;
    a = (a * a) % M;
    n /= 2;
  }
  return res;
}

ll lcm (ll x , ll y) {

  return (x * y) / (__gcd(x, y));
}


bool check(ll x , ll y) {
  while (x % y == 0) x /= y;

  return (x == 1);
}


void solve() {
  ll n;
  cin >> n;
  set<ll> st , done , st1;

  for (int i = 0 ; i < n ; i++) {
    ll x;
    cin >> x;
    st.insert(x);
    st1.insert(x);
  }

  if (n == 1) {
    //cout = (*(st.begin()) * 1LL * (*(st.begin()))) << endl;
    ll tm = *(st.begin());
    if (tm == 2 or (tm % 2) != 0) {
      tm *= (1LL * tm);
    } else tm = -1;

    cout << tm << endl;
    return;
  }

  ll temp = *(st.begin());

  for (auto sa : st) temp = lcm(temp * 1LL, sa * 1LL);

  while (st.size()) {
    auto it = *(st.begin());

    for (auto sa : done) {
      if (check(it, sa)) {
        cout << -1 << endl;
        return;
      }
    }

    ll copy = it;
    it *= 1LL;
    while (st.find(it) != st.end()) {
      st.erase(it);
      // it *= (1LL * copy);
      it = (it * 1LL * copy);
    }

    done.insert(copy);
  }

  ll tt = temp;

  if (st1.find(temp) != st1.end()) temp += tt;

  ll fi = temp;

  for (auto sa : st1) fi /= sa;
  if (fi != 1) {
    temp = -1;
  }
  cout << temp << endl;


}


int main() {
  fast
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

