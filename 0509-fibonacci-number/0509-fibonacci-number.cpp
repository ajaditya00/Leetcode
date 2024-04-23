int fab(int n){
    if(n<=1) return n;
    int last=fab(n-1);
    int slast=fab(n-2);
    return last+slast;
}
class Solution {
public:
    int fib(int n) {
        return fab(n);
    }
    
};