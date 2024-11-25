class Solution {
    public int[] sumEvenAfterQueries(int[] nums, int[][] queries) {
        int n=queries.length;
        int idx=0;
        int sum=0;
        int arr[]=new int[n];
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2==0) sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(nums[b]%2==0) sum-=nums[b];
            nums[b]+=a;
            if(nums[b]%2==0) sum+=nums[b];
            arr[idx]=sum;
            idx++;

        }
        return arr;
    }
}