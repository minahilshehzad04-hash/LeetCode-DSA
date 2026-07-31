class Solution {
public:
    bool isHappy(int n) {
    
    unordered_map<int,int> mp;

    while(n!= 1){
    if(mp[n]) return false;
    mp[n] = 1;

     int sum=0;
     while(n > 0){                                                                      
        int num = n % 10;
        n = n / 10;
        sum += num * num;
     }
     n = sum;
    }
    return true;   
    }   
};