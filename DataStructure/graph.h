/*
Graph representation

Compile:
	g++ -std=c++11 -c DataStructure/graph.cpp -o output/graph.o
Reference:
	Boost graph library
*/

#include<vector>


// graph implemented by adjacency list
class adj_graph{
private:
	std::vector<std::vector<int> > edgelist;

public:
	adj_graph(std::vector<std::pair<int, int> > edges, int vnum);
	std::vector<int> getAdjacentVertex(int v);
	// double getWeight(int v, int w);
};

// graph implemented by adjacency matrix
class mtrx_graph{
private:
	std::vector<std::vector<double> > adjmatrix;
public:
	mtrx_graph(int vnum);
	double getWeight(int x, int y);
	void setWeight(int x, int y, double weight);
};

// graph implemented by forward star

// graph implemented using boost