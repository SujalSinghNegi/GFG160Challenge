class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int cnt=0, n= arr.size();
       for(int i=0; i<n; i++){
           if(arr[i]!=0){
               swap(arr[i], arr[cnt++]);
           }
       }
    }
};