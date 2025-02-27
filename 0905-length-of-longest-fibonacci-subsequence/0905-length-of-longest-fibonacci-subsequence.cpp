class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        unordered_map<int,int>mp;
        for(auto ele :arr){
            mp[ele]++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prev=arr[i],curr=arr[j];
                int sum=prev+curr;
                int length=2;
                while(mp.find(sum)!=mp.end()){
                    length++;
                    prev=curr;
                    curr=sum;
                    sum=prev+curr;
                    res=max(res,length);
                }
                
            }
        }
        return res;
    }
};