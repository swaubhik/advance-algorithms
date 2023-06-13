# C Programs

Algorithms implemented by C programming language which are as follows:

## 1. Quick Sort

C program to implement the Quick Sort algorithm

<<< @/guide/programs/c/quickSort.c

## 2. Merge Sort

C program to implement the Merge Sort algorithm

<<< @/guide/programs/c/mergeSort.c

## 3. Insertion Sort

C program to implement the Insertion Sort algorithm

<<< @/guide/programs/c/insertionSort.c

## 4. Heap Sort

C program to implement the Heap Sort algorithm

<<< @/guide/programs/c/heapSort.c

## 5. N-Queen Problem

C program to solve N-queen Problem using backtracking

<<< @/guide/programs/c/n-queen.c

## 6. Hamiltonian Cycle

A Hamiltonian cycle, also known as a Hamiltonian circuit, is a path in a graph that visits every vertex exactly once and returns to the starting vertex.

Here is a program in C that finds a Hamiltonian cycle in a graph using the backtracking approach:

<<< @/guide/programs/c/hamiltonianCycle.c

Explanation:

1. `hamCycleUtil`: This is a recursive function that tries different vertices as a next vertex in Hamiltonian cycle. It keeps moving forward and if there are no vertices left to visit and all vertices are covered then it returns true.

2. `isSafe`: This function checks if adding vertex v to the path followed so far results in a solution or not.

3. `hamCycle`: This function first initializes the path array with -1 and path[0] as 0. Then it calls `hamCycleUtil`. If hamCycleUt

## 7. Prim's Algorithm
Prim's algorithm is a greedy algorithm that finds a minimum spanning tree for a weighted undirected graph. It starts with an arbitrary vertex and adds edges that connect it to the vertices with the lowest weight until all vertices are connected.

Here is a C program that implements Prim's algorithm:

<<< @/guide/programs/c/prim.c

Explanation:

1. `minKey`: This function returns the vertex with the minimum key value, which is not yet included in the MST.

2. `primMST`: This function builds the MST by maintaining two sets of vertices: the set of vertices included in the MST and the set of vertices not yet included. Initially, all vertices are not yet included in the MST and the key values are set to a high value (INF). The minimum key vertex is then selected and added to the MST set. Its adjacent vertices are updated with the new minimum weight if a shorter edge is found. This process continues until all vertices are included in the MST.

3. The `main` function initializes a sample graph and calls the `primMST` function to build the MST, which is then printed to the console. The output shows the edges and their weights that form the minimum spanning tree.

## 8. Kruskal's Algorithm

Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a weighted undirected graph. It starts with an empty tree and adds edges one by one until it forms a tree that includes every vertex. The added edges are always the ones with the lowest weight.

Here is a C program that implements Kruskal's algorithm:

<<< @/guide/programs/c/kruskal.c

## 9. Graph Coloring
Graph coloring is the process of assigning colors to the vertices of a graph such that no two adjacent vertices have the same color. The number of colors used is referred to as the chromatic number.

Here is a C program that implements a backtracking algorithm for graph coloring:

<<< @/guide/programs/c/graphColoring.c

Explanation:

1.  `isSafe`: This function checks if it is safe to color a vertex with a given color by checking if any of its adjacent vertices have the same color.
    
2.  `graphColoringUtil`: This is the recursive function that implements the backtracking algorithm. It assigns a color to each vertex and checks if it is a feasible solution by calling itself for the next vertex. If a solution is not possible with the current assignment, it backtracks by changing the color and trying a different color for the current vertex.
    
3.  `graphColoring`: This function initializes the color array and calls the `graphColoringUtil` function. If a solution exists, it prints the assigned colors for each vertex.