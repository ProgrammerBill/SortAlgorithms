/*************************************************************************
    > File Name: Solution.java
    > Author: bill
    > Mail: cjcbill@gmail.com 
    > Created Time: 2019年05月27日 星期一 00时24分26秒
 ************************************************************************/
class Solution {
    public int[] sortArray(int[] nums) {
         return insertionSort(nums);
    }

    public int[] insertionSort(int [] nums){
         int N = nums.length;
         for(int i = 0; i < N; i++){
             for(int j = i; j > 0 && nums[j] < nums[j-1];j--){
                     int tmp = nums[j];
                     nums[j] = nums[j-1];
                     nums[j-1] = tmp;
             }
         }
         return nums;
    }

    public static void main(String[] args) {
        Solution mySolution = new Solution();
        int [] array = {5,1,1,2,0,0};
        int[] selectedArray = mySolution.sortArray(array);
        for(int i: selectedArray){
            System.out.print(i + " ");
        }
    }
}
