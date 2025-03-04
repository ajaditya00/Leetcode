class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>>ans=new ArrayList<>();
        ans.add(new ArrayList<>());
        ans.get(0).add(1);
        if(n==1) return ans;
        ans.add(new ArrayList<>());
        ans.get(1).add(1);
        ans.get(1).add(1);
        if(n==2) return ans;
        for(int i=2;i<n;i++){
            ans.add(new ArrayList<>());
            ans.get(i).add(1);
            for(int j=1;j<i;j++){
                int a=ans.get(i-1).get(j)+ans.get(i-1).get(j-1);
                ans.get(i).add(a);
            }
            ans.get(i).add(1);
        }
        return ans;
        
    }
}