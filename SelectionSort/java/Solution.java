class Solution {
    public int[] sortArray(int[] nums) {
         return selectSort(nums);
    }

    public int[] selectSort(int [] nums){
         int N = nums.length;
         for(int i = 0; i < N; i++){
             int min = i;
             for(int j = i + 1; j < N;j++){
                 if(nums[min] > nums[j]){
                     int tmp = nums[min];
                     nums[min] = nums[j];
                     nums[j] = tmp;
                 }
             }
         }
         return nums;
    }

    public static void main(String[] args) {
        Solution mySolution = new Solution();
        int [] array = {5,1,1,2,0,0};
        int[] selectedArray = mySolution.sortArray(array);
        for(int i: selectedArray){
            System.out.print(i);
        }
    }
}
