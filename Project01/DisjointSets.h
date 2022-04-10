#pragma once
#include <iostream>
#include <vector>
#include "Node.h"

using std::vector;
using std::endl;
using std::cout;

class DisjointSets
{
	Node* forest;
	int treeSize;
	int maxSize;
	bool allocated;

public:
	DisjointSets();
	void CreateEmpty(int max);
	void MakeSet(int newRepresentative);

	int Find(int Node);

	void Union(int representativeSetx, int representativeSety);
	~DisjointSets();
	void print() //need to be deleted for submission
	{
		for (int i = 0; i < treeSize; i++)
		{
			cout << "node: " << i << " parent: " << forest[i].parent << " size: " << forest[i].size << endl;
		}
		cout << "finished" << endl;
	}
};

