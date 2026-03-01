class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int start = 0;
        while(arr[start] != 0) start++;
        for(int end=start+1; end < arr.size(); end++) {
            if(arr[end] == 0) continue;
            swap(arr[start++], arr[end]);
        }
    }
};