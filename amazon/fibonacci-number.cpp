class Solution {
public:
    
    int fibRecursive(int N, vector<int>& hash) {
        
        if (hash.at(N) == -1) {
            hash.at(N) = fibRecursive(N - 1, hash) + fibRecursive(N - 2, hash);
        }
        
        return hash.at(N);
    }
    
    int fib(int N) {
        
        vector<int> hash(N + 2, -1);
        hash.at(0) = 0;
        hash.at(1) = 1;
        
        return fibRecursive(N, hash);
    }
};
