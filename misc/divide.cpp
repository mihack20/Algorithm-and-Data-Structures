class Solution {
public:
    int divide(int num, int den) {
        int mul = 1;
        long a=num,b=den;
        if(a<0){
            mul*=-1;
            a=abs(a);
        }
        if(b<0){
            mul*=-1;
            b=abs(b);
        }
        long ans;
        if(b==1){
            ans=mul*a;
            if(ans<INT_MIN||ans>INT_MAX)return INT_MAX;
            return ans;
        }
        ans=0;
        while(a>=b){
            long tmp=b,cnt=1;
            while(tmp<<1 < a){
                tmp=tmp<<1;
                cnt=cnt<<1;
            }
            ans+=cnt;
            a-=tmp;
        }
        return mul*ans;
    }
};
