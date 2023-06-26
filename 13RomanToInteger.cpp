class Solution {
public:
    int rti(char ch){
        int x ; 
        switch(ch){
            case 'I': x= 1; break;
            case 'V': x =  5; break;
            case 'X': x =  10; break;
            case 'L': x =  50; break;
            case 'C': x =  100; break;
            case 'D': x =  500; break;
            case 'M': x =  1000; break;
        }
        return x;
    }
    int romanToInt(string s) {
        int n = s.length();
        int sum = rti(s[n-1]);
        for(int i = n-2;i>=0;i--){
            if(rti(s[i]) < rti(s[i+1]))
                sum -= rti(s[i]);
            else 
                sum += rti(s[i]);
        }
        return sum;
        
    }
};
