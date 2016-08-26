#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#define ll long long int
#define MOD 1000000007

#define check (a > 0 && a <= n && b > 0 && b <= n && mark[a][b] == 0 && g[a][b] == 1)

int n, g[1001][1001], mark[1001][1001];

int get_ans();
int dfs(pair<int, int>);

int main()
{
	//freopen("input", "rb", "stdin");
	//freopen("output", "w", "stdout");

	int i, j;
	cin >> n;

	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			cin >> g[i][j];
		}
	}

	cout << get_ans() << endl;

	return 0;
}

int get_ans()
{
	int m = 0, k;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (mark[i][j] == 0 && g[i][j] == 1) {
				k = dfs(make_pair(i, j));
				if (k > m) {
					m = k;
				}
			}
		}
	}

	return m;
}

int dfs(pair<int, int> x)
{
	int a, b, i, j, cnt = 1;
	i = x.first;
	j = x.second;
	mark[i][j] = 1;

	a = i; b = j - 1;
	if check {
		cnt += dfs(make_pair(a, b));
	}
	a = i; b = j + 1;
	if check {
		cnt += dfs(make_pair(a, b));
	}
	a = i - 1; b = j;
	if check {
		cnt += dfs(make_pair(a, b));
	}
	a = i + 1; b = j;
	if check {
		cnt += dfs(make_pair(a, b));
	}

	return cnt;
}
