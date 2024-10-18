#include <iostream>
#include <vector>
using namespace std;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int rowCount, colCount, k, y, x, ret, ny, nx, t;
int a[104][104];
bool visited[104][104];


void DFS(int y, int x)
{
	visited[y][x] = 1;
	cout << y << " : " << x << "\n";

	for (int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= colCount || nx >= rowCount) continue;

		if (a[ny][nx] == 1 && !visited[ny][nx])
		{
			DFS(ny, nx);
		}
	}
	return;
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> colCount >> rowCount;

	for (int col = 0; col < colCount; col++)
	{
		for (int row = 0; row < rowCount; row++)
		{
			cin >> a[col][row];
		}
	}




	for (int col = 0; col < colCount; col++)
	{
		for (int row = 0; row < rowCount; row++)
		{
			if (a[col][row] == 1 && !visited[col][row])
			{
				cout << col << " : " << row << " dfs 시작\n";

				DFS(col, row);
				ret++;
			}

		}
	}

	cout << ret;

	return 0;

}