// #include <bits/stdc++.h>
// using namespace std;

// using ull = unsigned long long;

// int main()
// {
//   int t; cin >> t;

//   while (t-- > 0) {
//     int n, m;
//     cin >> n >> m;
//     vector<ull> A, B;
//     A.reserve(n); B.reserve(m);

//     while (n-- > 0) {
//       int a; cin >> a;
//       A.emplace_back(a);
//     }

//     while (m-- > 0) {
//       int b; cin >> b;
//       B.emplace_back(b);
//     }

//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end(), greater<ull>());

//     for (int i = 0; i < A.size() && i < B.size(); i++) {
//       A[i] = B[i];
//     }

//     ull sum = 0;

//     for (int i = 0; i < A.size(); i++)
//       sum += A[i];

//     cout << sum << endl;
//   }

//   return 0;
// }

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){

	int _t;
	cin>>_t;

	rep(_,_t){
		int n,m;
		cin>>n>>m;
		vector<long long> a(n+m);
		rep(i,n+m)scanf("%lld",&a[i]);

		sort(a.begin(),a.end(), greater<long long>());

		long long ans = 0;
		rep(i,n)ans += a[i];

		cout<<ans<<endl;
	}


	return 0;
}