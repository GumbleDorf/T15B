
#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"
#include "Graph.h"

int numReachable(Graph g, int src) {
	Queue newQ = newQueue();
	int v = GraphNumVertices(g);
	int *visited = malloc(sizeof(Vertex)*v);
	for(int i = 0; i < v; i++) {
		visited[i] = 0;
	}
	QueueJoin(newQ, src);
	visited[src] = 1;
	int count = 0;
	while (!QueueIsEmpty(newQ)) {
		Vertex dVert = QueueLeave(newQ);
		count++;
		for (int i = 0; i < v; i++) {
			if (visited[i] == 0 && GraphIsAdjacent(g,dVert,i)) {
				visited[i] = 1;
				QueueJoin(newQ, i);
			}
		}
	}
	free(visited);
	dropQueue(newQ);
	// Iterate through visited and count 1s
	return count;

	
}

