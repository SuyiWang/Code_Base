#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_comparison.hpp>
#include <boost/unordered_set.hpp>
#include <boost/unordered_map.hpp>

#include "hash.h"

#include <stdio.h>
#include<string>

using namespace std;

int read_4d_points(string filename){
	FILE* fp = fopen(filename.c_str(), "r");
	int x,y,z,w;

	VertexHash vh;
	int counter = 0; 
	while(fscanf(fp, "%d%d%d%d", &x, &y, &z, &w) != EOF){
		point p;
		p.x = x; p.y = y; p.z = z; p.v = w;
		vh.InsertVertex(p, counter++);
	}
	printf("%d lines read\n", counter);
	return 0;
}

int main(int argc, char *argv[]){
	if (argc < 2)
	{
		fprintf(stdout,"Usage: %s datapath\n",argv[0]);
		return 1;
	}

	read_4d_points(argv[1]);
	return 0;
}
