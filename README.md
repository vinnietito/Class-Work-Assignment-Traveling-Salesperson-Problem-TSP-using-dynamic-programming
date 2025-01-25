
# Class-Work-Assignment-Traveling-Salesperson-Problem-TSP-using-dynamic-programming
 C program to solve the Traveling Salesperson Problem (TSP) using dynamic programming

 Group Members:
     1. VINCENT KIMANTHI NJUGUNA - SCT221-0690/2022
     2. GERISHON KIHATO - SCT221-0219/2022
     3. Stephen Omondi Charles - SCT221-0277/2022

Explanation:
1. Graph: graph[N][N] represents the distance matrix for the cities.
2. Dynamic Programming Table (dp): dp[pos][mask] stores the minimum cost to visit all cities starting at pos with mask representing the visited cities.
3. Recursive Function: The tsp function recursively computes the minimum cost by visiting unvisited cities.
mask uses bitwise operations to track visited cities.
4. Base Case: When all cities are visited, return the distance to the starting city.
5. Initialization: dp is initialized with -1 to indicate that no subproblem has been solved yet.
6. Result: The shortest distance is printed.
