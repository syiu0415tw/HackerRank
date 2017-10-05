#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n,          // Number of Variable-Length Arrays
        q,          // Number of queries
        k;          // Number of elements located at Variable-Length Arrays
    
    // Read input n and q from STDIN
    cin >> n >> q;
    // Create two-dimensional vector A
    vector<vector<int>> A(n);
    for (int i=0; i<n; i++){
        cin >> k;
        // Resize Variable-Length Array (k-element) 
        A[i].resize(k);
        for (int j=0; j<k; j++){
            cin >> A[i][j];
        }
    }
    
    int q_index_i,  // Index in A for a query
        q_index_j;  // Index in array referenced by A[i] for a query

    // Answer queries and print output to STDOUT
    for (int i=0; i<q; i++){
        cin >> q_index_i >> q_index_j;
        cout << A[q_index_i][q_index_j] << endl;
    }
        
    return 0;
}
