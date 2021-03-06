#pragma once
#include "Graph.h"
#include "MinHeap.h"
#include "DisjointSets.h"
#include "QuickSort.h"
#include "Edge.h"
#include <vector>

using std::vector;

class MST_algorithms
{
private:
	static void initializePrim(int minWeight[], int parent[], bool vertexInMst[], int size);
	static int countMSTWeight(int EdgeWeights[], int size);


public:
	static int Prim(const WeightedGraph& graph);
	static int Kruskal(const WeightedGraph& graph, vector<Edge*>& graphEdgesArray, vector<Edge*>& Mst);
	static bool isEdgeInMst(Edge* edgeToRemove, vector<Edge*>& Mst);
};

