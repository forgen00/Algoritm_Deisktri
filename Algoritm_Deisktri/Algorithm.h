#pragma once

#include <stdio.h>
#include <limits.h>

#define VerticesAmount 9

typedef struct Path {
	int Dist[VerticesAmount];
	_Bool Visited[VerticesAmount];
}Path;

int DistanceMinimum(Path path);
void PrintSolution(Path path);
void Algorithm_Dijkstra(int graph[VerticesAmount][VerticesAmount], int StartVertice);