// Startup command: cd "C:\VScode\c++\CPP Introductory Programs\bellman_ford" && g++ bellman_ford.cpp -o bellman_ford.exe && ./bellman_ford.exe 
// Run command: g++ bellman_ford.cpp -o bellman_ford.exe && ./bellman_ford.exe 

#include<iostream>
#include<vector>
#include<climits>

class Edge{

    public:

        int v;
        int wt;

        Edge(int v, int wt){

            this->v = v;
            this->wt = wt;
        }
};

std::vector<std::vector<int>> Bellman_Ford(int V, std::vector<std::vector<Edge>> g, int src){

    int iteration = V ;
    std::vector<std::vector<int>> distance(iteration, std::vector<int>(V, INT_MAX/2));  // INT_MAX to avoid integer overflow

    distance[0][src] = 0;

    for(int i = 0; i < iteration; i++){  // V - 1 iterations

        if(i != 0){

            distance[i] = distance[i - 1];   // copying previous distance row if i != 0
        }

        for(int vertex = 0; vertex < V; vertex++){  // Inside graph g

            for(Edge path: g[vertex]){

                if(distance[i][path.v] > distance[i][vertex] + path.wt){

                    distance[i][path.v] = distance[i][vertex] + path.wt;
                }
            }
        }
    }

    return distance;
}

class DistanceTable{

    public:
        std::vector<std::vector<int>> dist_table;
        int V;

        DistanceTable(std::vector<std::vector<int>> dist_table, int V){

            this->dist_table = dist_table;
            this->V = V;
        }

        void printTable(){

            for(int i = 0; i < V; i++){

                std::cout << i << "\t";
            }

            std::cout << "\n\n";

            for(std::vector<int> iteration: this->dist_table){

                for(int dist_val: iteration){

                    std::cout << dist_val << "\t";
                }

                std::cout << "\n";
            }
        }
        
        bool has_negative_cycle(){

            return dist_table[V - 1] != dist_table[V - 2];
        }

        void print_has_negative_cycle(){

            if(this->has_negative_cycle()){

                std::cout << "\nThe graph consist of negative cycle(s)\n";
            } else{

                    std::cout << "\nThe graph doesn't consist of negative cycle\n";
                }        

            }
            

};

int main(){

    int V1, V2;
    std::vector<std::vector<Edge>> g1(V1);
    std::vector<std::vector<Edge>> g2(V1);

    // Positive cycle graph

    std::cout << "Graph with no negative cycles\n\n";

    V1 = 5;

    g1[0].push_back(Edge(1, 6));
    g1[0].push_back(Edge(2, 5));
    
    g1[1].push_back(Edge(3, -1));
    
    g1[2].push_back(Edge(1, -2));
    g1[2].push_back(Edge(3, 4));
    g1[2].push_back(Edge(4, 3));

    g1[3].push_back(Edge(4, 3));

    DistanceTable dist_table1(Bellman_Ford(V1, g1, 0), V1);

    dist_table1.printTable();

    dist_table1.print_has_negative_cycle();

    // Negative cycle graph

    std::cout << "\nGraph with negative cycle(s)\n\n";

    V2 = 3;

    g2[0].push_back(Edge(2, 4));

    g2[1].push_back(Edge(0, 3));

    g2[2].push_back(Edge(1, -10));
    
    DistanceTable dist_table2(Bellman_Ford(V2, g2, 0), V2);
    
    dist_table2.printTable();

    dist_table2.print_has_negative_cycle();

    return 0;
}