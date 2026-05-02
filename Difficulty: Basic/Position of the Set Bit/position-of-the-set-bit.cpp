class Solution {
  public:
    virtual int findPosition(int n){
      int c1=0;
      int ans=-1;
      
      for(int i=0; i<32; i++){
        if(n&(1<<i)){
          c1++;
          if(c1==2) return -1;
          ans=i+1;
        } 
      }
      
      return ans;
    }
};