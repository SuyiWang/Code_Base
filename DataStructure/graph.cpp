#include"graph.h"

adj_graph::adj_graph(std::vector<std::pair<int, int> > edges, int vnum){
	edgelist.clear();
	for(int i = 0; i < vnum; ++i)
		edgelist.push_back(std::vector<int>());

	for(auto onepair:edges){
		int u = onepair.first;
		int v = onepair.second;
		edgelist[u].push_back(v);
		edgelist[v].push_back(u);
	}
}

std::vector<int> adj_graph::getAdjacentVertex(int v){
	return edgelist[v];
}

mtrx_graph::mtrx_graph(int vnum){
	adjmatrix.clear();
	for(int i = 0; i < vnum; ++i)
		adjmatrix.push_back(std::vector<double>(vnum, 0));
}

double mtrx_graph::getWeight(int x, int y){
	return adjmatrix[x][y];
}

void mtrx_graph::setWeight(int x, int y, double w){
	adjmatrix[x][y] = w;
}