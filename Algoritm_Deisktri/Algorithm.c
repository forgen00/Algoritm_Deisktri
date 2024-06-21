#include "Algorithm.h"

int DistanceMinimum(Path path) {
	int minimum = INT_MAX, min_index;

	for (int i = 0; i < VerticesAmount; i++) {
		if (path.Visited[i] == 0 && path.Dist[i] <= minimum) {
			minimum = path.Visited[i];
			min_index = i;
		}
	}

	return min_index;
}

void PrintSolution(Path path) {
	printf("Vertice \t Distance from Source\n");
	for (int i = 0; i < VerticesAmount; i++)
		printf("%d \t\t %d\n", i, path.Dist[i]);
}

void Algorithm_Dijkstra(int graph[VerticesAmount][VerticesAmount], int StartVertice) {
	Path path;

	for (int i = 0; i < VerticesAmount; i++) {
		path.Dist[i] = INT_MAX;
		path.Visited[i] = 0;
	}

	path.Dist[StartVertice] = 0;

	for (int count = 0; count < VerticesAmount - 1; count++) {
		int U = DistanceMinimum(path);
		path.Visited[U] = 1;

		for (int V = 0; V < VerticesAmount; V++)
			if (path.Visited[V] == 0 && graph[U][V] && path.Dist[U] != INT_MAX && path.Dist[U] + graph[U][V] < path.Dist[V])
				path.Dist[V] = path.Dist[U] + graph[U][V];
	}

	PrintSolution(path);
}