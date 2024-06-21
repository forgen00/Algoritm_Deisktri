#include "Algorithm.h"

int main() {
	int graph[VerticesAmount][VerticesAmount] =
	{
		{0, 53, 0, 1, 0, 0, 2, 0},
		{53, 0, 0, 13, 0, 0, 0, 8},
		{0, 0, 0, 0, 30, 0, 39, 74},
		{1, 13, 0, 0, 0, 5, 0, 0},
		{0, 0, 30, 0, 0, 0, 0, 3},
		{0, 0, 0, 5, 0, 0, 21, 0},
		{2, 0, 39, 0, 0, 21, 0, 0},
		{0, 8, 74, 0, 3, 0, 0, 0}
	};

	Algorithm_Deikstri(graph, 4);

	return 0;
}