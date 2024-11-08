/// solutia 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define  ll  long long
#define  endl  '\n'
#define DIM 100005
#define INF 1e9
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main() {
	FAST;
	int tests;
	cin >> tests;
	while (tests--)
	{
		int n;
		cin >> n;
		vector<int>v;
		map<int, int>poz; /// poz[numar] = pozitie
		v.clear();
		poz.clear();
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.emplace_back(x);
			poz[x] = i + 1;
		}
		sort(v.begin(), v.end());
		if (v[0] == v[1])
			cout << poz[v[n - 1]] << '\n';
		else
			cout << poz[v[0]] << '\n';
	}
	return 0;
}
