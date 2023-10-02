class Solution {
public:
    int solve(int s,int e){
        int mid=s+(e-s)/2;
        int result = guess(mid);

        if(result ==0)
          return mid;
    
        else if(result ==-1)
          e=mid-1;
       
        else{
          s=mid+1;
        }
    return solve(s,e);;
}
    int guessNumber(int n) {
        return solve(1,n);
    }
};