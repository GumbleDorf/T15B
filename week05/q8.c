#include "Graph.h"
#include "Set.h"
#include "Queue.h"

Set reachable( Graph g, Vertex v) {
    Set reachableSet = newSet();
    /* code here */
    return reachableSet;
}

Set reachable(Graph g, Vertex v)
{
	Set visited = newSet();
	Queue q = newQueue ();
	QueueJoin (q, v);
	while (QueueLength (q) > 0) {
		Vertex x = QueueLeave (q);
		if (SetMember(Set, x))
			continue;
		SetInsert(Set, x);
		for (Vertex y = 0; y < g->nV; y++) {
			if (!g->edges[x][y])
				continue;
			if (!SetMember(Set, y))
				QueueJoin (q, y);
		}
	}

    return visited;
}