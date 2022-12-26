// first we will precompute how many elements are in the range 1 to 10^18 having 3 set bits 
// these cannot be more than (63)C3 so we can store them in a vector (let say pre) now for 
// getting the answer between l and r all we have to do is to get the least numbers with 3 bit 
// which is greater than r (hi) . For this we can use binary search or inbuilt function 
// i.e upper_bound of stl. we also requires the numbers greater than equal to l (lo) for this 
// we can use lower bound. once we have computed these two thing we can just subtract then i.e. hi-lo

class Solution{
public:
vector<long long>pre;
    void precompute()
    {
       for(int i=0;i<63;i++){
           for(int j=i+1;j<63;j++){
               for(int k=j+1;k<63;k++){
                   long long tmp=(1ll<<i)+(1ll<<j)+(1ll<<k);
                   pre.push_back(tmp);
               }
           }
       }
       sort(pre.begin(),pre.end());
    }
    
    long long solve(long long l, long long r){
    int hi=upper_bound(pre.begin(),pre.end(),r)-pre.begin();
    int lo=lower_bound(pre.begin(),pre.end(),l)-pre.begin();
    return hi-lo;
    }
    
};
