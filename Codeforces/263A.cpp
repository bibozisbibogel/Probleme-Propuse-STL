#include <iostream>
#include <algorithm>
#include <vector>
#define DIM 200005
#define ll long long
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int linie, coloana;
int main() {
	FAST;
	vector<vector<int>>v;
	for (int i = 0; i < 5; i++)
	{
		vector<int>aux;
		for (int j = 0; j < 5; j++)
		{
			int x;
			cin >> x;
			if (x == 1)
			{
				linie = i;
				coloana = j;
			}
			aux.push_back(x);
		}
		v.push_back(aux);
	}
	int nr = 0;
	if (linie < 2)
	{
		while (linie != 2) {
			nr++;
			linie++;
		}
	}
	else
		if (linie > 2)
		{
			while (linie != 2)
			{
				nr++;
				linie--;
			}
		}
	if (coloana < 2)
	{
		while (coloana != 2)
		{
			nr++;
			coloana++;
		}
	}
	else
		if (coloana > 2)
		{
			while (coloana != 2)
			{
				nr++;
				coloana--;
			}
		}
	cout << nr;
	return 0;
}
