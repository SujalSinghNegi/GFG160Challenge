// Second Largest
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        if(arr.size()==1) return -1;
        int n= arr.size();
        int m= *max_element(arr.begin(), arr.end());
        int mm=-1;
        for(int i=0; i<n; i++){
            if(arr[i]==m)continue;
            mm= max(mm, arr[i]);
        }
        return mm;
    }
};