class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        // next_permutation(arr.begin(), arr.end());
        int n= arr.size();
        int pivot =-1;
        for(int i=n-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                pivot = i-1;
                break;
            }
        }
       // cout<<pivot<<endl;
        if(pivot ==-1){
            reverse(arr.begin(), arr.end());
            return;
        }
      for(int j= n-1; j>=pivot+1; j--){
          if(arr[j]>arr[pivot]){
              swap(arr[j], arr[pivot]);
              break;
          }
      }
      // here we dont need to sort the array from pivot +1 to end
      // as we know from n-1 to pivot the array are in descending order
      // becuase the pivot is that element at whihc the descending order breaks, from that we say the arrya
      // is descending, 
      // and then we find from n-1 to pivot+1, such element which is greater that arr[pivot]
      // this means from that index to right , array is sorted and from that index to left, array is also sorted,in descending order, 
      // so we just have to reverse array to make the array sorted in ascending order to make the array now smallest to right of pivot
      // to make the just next permutation
      
      reverse(arr.begin()+pivot+1, arr.end());
      
                
    }
};