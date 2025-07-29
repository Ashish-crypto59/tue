class Solution {
    public int climbStairs(int n) {
       int[] arr = new int[n + 1];
        return findTotal(n,arr);
    }

    public int findTotal(int index,int arr[]){
        if(index == 0 || index == 1) return 1;
        if(arr[index] != 0) return arr[index];

        arr[index] = findTotal(index - 1,arr) + findTotal(index - 2,arr);

        return arr[index]; 
    }
}