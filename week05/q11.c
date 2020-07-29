#include "Graph.h"

bool isEulerPath (Graph g, Edge e[], int nE) {
    if (nE != g->nE) return false;

    for (int i = 0; i < nE; i++) {
        Edge e1 = e[i];
        if(i != 0) {
            if (e1.v != e[i-1].w) return false;
        }
        for (int j = i+1; j < nE;j++) {
            Edge e2 = e[j];
            if (e1.v == e2.v && e2.w == e2.w)
                return false; 
        }
    }

    return true;
}