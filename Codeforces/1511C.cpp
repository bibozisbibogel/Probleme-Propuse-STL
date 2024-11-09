#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define DIM 200005
#define ll long long
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<int>v;
vector<int>q;
map<int, int>poz; /// pozitia fiecarui numar in vectorul mare
vector<int>afisare;
int main() {
	FAST;
	int n, queries;
	cin >> n >> queries;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x; 
		if (poz[x]==0) {
			poz[x] = i + 1;
			v.emplace_back(x);
		}
	}
	/*
	for (int i = 0; i < v.size(); i++)
	{
		cout << poz[v[i]] << " ";
	}
	*/
	for (int i = 0; i < queries; i++)
	{
		int y;
		cin >> y;
		q.emplace_back(y);
	}
	for (auto& query : q)
	{
		int aux = query;
		afisare.emplace_back(poz[query]);
		for (int j = 1; j < 51; j++)
		{
			if (j == query)
				continue;
			if (poz[j] < poz[aux])
				poz[j]++;
		}
		poz[aux] = 1;
	}
	for (int i = 0; i < afisare.size(); i++)
		cout << afisare[i] << " ";
	return 0;
}
