int diameter = -1;

// Function to find the diameter of the tree
// using Dynamic Programming
int dfs(int node, int parent, int dp1[], int dp2[], list<int>* adj)
{

    // Store the first maximum and secondmax
    int firstmax = -1;
    int secondmax = -1;

    // Traverse for all children of node
    for (auto i = adj[node].begin(); i != adj[node].end(); ++i) {
        if (*i == parent)
            continue;

        // Call DFS function again
        dfs(*i, node, dp1, dp2, adj);

        // Find first max
        if (firstmax == -1) {
            firstmax = dp1[*i];
        }
        else if (dp1[*i] >= firstmax) // Secondmaximum
        {
            secondmax = firstmax;
            firstmax = dp1[*i];
        }
        else if (dp1[*i] > secondmax) // Find secondmaximum
        {
            secondmax = dp1[*i];
        }
    }

    // Base case for every node
    dp1[node] = 1;
    if (firstmax != -1) // Add
        dp1[node] += firstmax;

    // Find dp[2]
    if (secondmax != -1)
        dp2[node] = 1 + firstmax + secondmax;

    // Return maximum of both
    return max(dp1[node], dp2[node]);
} 
