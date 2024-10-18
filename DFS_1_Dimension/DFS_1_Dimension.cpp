﻿#include <iostream>
#include <vector>
using namespace std;
const int n = 6;
vector<int> adj[n];
int visited[n];


void DFS(int here)
{
	visited[here] = 1;
	cout << here << "\n";

	for (int there : adj[here])
	{
		if (visited[there] == 0)
		{
			DFS(there);
		}
	}

	cout << here << "로부터 시작된 함수 종료\n";
	return;
}


int main() {
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);
	DFS(1);
}