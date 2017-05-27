/* unfinished */

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

/* Calculating the number of connected components in a graph */

class AdjacencyMatrix
{
    private:
        int n;
        int **adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        /*
         * Adding Edge to Graph
         */ 
        void add_edge(int origin, int destin)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {   
                cout<<"Invalid edge!\n";
            }
            else
            {
                adj[origin - 1][destin - 1] = 1;
            }
        }
        /*
         * Print the graph
         */ 
        void display()
        {
            int i,j;
            for(i = 0;i < n;i++)
            {
                for(j = 0; j < n; j++)
                    cout<<adj[i][j]<<"  ";
                cout<<endl;
            }
        }
        
};

int main(){
	int n,m,i, origin, dest;
	int g[50][50]; /* Adjacency matrix implementation */
	cin >> n >> m; /* n is no more than 50, so a O(n^3) algorithm is possible */
	AdjacencyMatrix am(n);
	for (i = 1; i <= m; i++){
		cin >> origin >> dest;
		am.add_edge(origin, dest);
	}
	/* Finished init graph, now onto dfs */

}