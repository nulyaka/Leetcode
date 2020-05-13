class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> FB;
        
        for (int i = 1; i <= n; ++i) {
            
            if (!(i % 5) && !(i % 3)) {
                FB.push_back("FizzBuzz");
            }
            else if (!(i % 5)) {
                FB.push_back("Buzz");
            }
            else if (!(i % 3)) {
                FB.push_back("Fizz");
            }
            else {
                
                string temp;
                
                int num = i;
                
                while (num) {
                    
                    temp = char(num % 10 + '0') + temp;
                    num /= 10;
                }
                
                FB.push_back(temp);
            }
        }
        
        return FB;
    }
};
