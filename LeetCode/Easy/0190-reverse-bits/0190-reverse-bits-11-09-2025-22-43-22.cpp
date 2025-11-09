class Solution {
public:
    int reverseBits(int n) {
        int bits=32,sum=0;
        for(int i=0;i<bits;i++){
            int nBit=n&1;
            sum=sum<<1|nBit;
            n>>=1;
        }
        return sum;
    }
};