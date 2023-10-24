class Solution {
public:
    bool isPerfectSquare(int num) {
       
       for(long  i=0; i<=num/2; i++){
          
           if(num== i*i ){
              return true;
           }
            if(num==1){
               return true;
           }
           else{
               
           }
       } return false;
    }
};