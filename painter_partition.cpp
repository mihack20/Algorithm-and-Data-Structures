int find(int mid,vector<int> &a){
    int ans=0,sum=0;
    for(int i=0;i<a.size();i++){
        if(sum+a[i]>mid){
            ans++;
            sum=a[i];
        }else{
            sum+=a[i];
        }
    }
    return ans;
}
int Solution::paint(int k, int t, vector<int> &a) {
    long long mxt = 0,m=10000003;
    for(int i=0;i<a.size();i++){
        mxt+=a[i];
    }
    long long mnt = *max_element(a.begin(),a.end());
    long long ans;
    while(mnt<=mxt){
        int mid = mnt+(mxt-mnt)/2;
        int calc = find(mid,a);
        if(calc>k){
            mnt=mid+1;
        }else{
            ans=mid;
            mxt=mid-1;
        }
    }
    return (ans*t);
}
