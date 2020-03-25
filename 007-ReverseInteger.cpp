class Solution {
public:
    int reverse(int x) {
        
        signed long long reversed(0);
        
        while (x != 0) {
            
            reversed *= 10;
            reversed += x % 10;
            x /= 10;
        }
        if (reversed < pow(-2, 31) || pow(2, 31) - 1 < reversed) return 0;
        
        return reversed;
    }
};
