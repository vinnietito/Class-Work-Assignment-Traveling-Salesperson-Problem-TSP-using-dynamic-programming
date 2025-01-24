#include <stdio.h>
#include <limits.h>

#define INF INT_MAX
#define N 4 // Number of cities

// Define the graph (distance matrix)
int graph[N][N] = {
    {0, 14, 21, 22},
    {14, 0, 3, 4},
    {21, 3, 0, 5},
    {22, 4, 5, 0}
};

// Function to find the minimum distance
int tsp(int mask, int pos, int dp[N][1 << N]) {
    // Base case: All cities visited, return to starting point
    if (mask == (1 << N) - 1) {
        return graph[pos][0];
    }

    // Check if the solution is already computed
    if (dp[pos][mask] != -1) {
        return dp[pos][mask];
    }

    int ans = INF;

    // Try visiting all cities
    for (int city = 0; city < N; city++) {
        if ((mask & (1 << city)) == 0) { // If city not visited
            int newAns = graph[pos][city] + tsp(mask | (1 << city), city, dp);
            ans = (ans < newAns) ? ans : newAns; // Take the minimum
        }
    }

    return dp[pos][mask] = ans;
}

int main() {
    int dp[N][1 << N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < (1 << N); j++) {
            dp[i][j] = -1; // Initialize DP table
        }
    }

    int result = tsp(1, 0, dp); // Start from city 0
    printf("The shortest distance is: %d\n", result);

    return 0;
}

