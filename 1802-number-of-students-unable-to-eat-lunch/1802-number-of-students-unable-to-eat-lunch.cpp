class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i=0;
        int cnt=0;
        while(q.size()>0 && cnt!=q.size()){
            if(q.front()==sandwiches[i]){
                cnt=0;
                q.pop();
                i++;
            }else{
                q.push(q.front());
                q.pop();
                cnt++;
            }
        }
        return q.size();
    }
};