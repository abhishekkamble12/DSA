class Solution {
public:
    int smallestNumber(int n) {
    //  number of bits in n
    // log2(n) +1;
    // 1 left << bits ==> to give  value greater than n i.e 2^n power number
    // 1 left shift -1 ; acurate value which have all set bit
    // 2^n -1  ==> ek value eith all set bits 
    int bits= log2(n) +1;
    return (1 << bits)-1;

    }
};

class Solution {
public:
    int smallestNumber(int n) {
        // 2 *n+1;
    // n => number ehoise all bit are set 
    int res=1;
    while(res <n){
        res=2*res+1;
    }
    }
    return res;
};