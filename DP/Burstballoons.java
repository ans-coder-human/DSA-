public class Burstballoons {
    
    // leetcode 312. Burst Balloons
// cut the array on a index take the value from left and right you will get the cost then for
// the current index find the cost by multiplying its left val and right val with the current val 
// and add all the cost from leftcost + current + right cost  
public static int maxCoins(int[] nums, int si,int ei,int[][] dp) {
    if(dp[si][ei]!=0) return dp[si][ei];
    int lele = si==0?1:nums[si-1];
    int rele = ei==nums.length-1?1:nums[ei+1];
    int maxCoins=0;
    for(int cut = si;cut<=ei;cut++){
        int leftcost =  cut==si?0:maxCoins(nums,si,cut-1,dp);
        int rightcost = cut==ei?0:maxCoins(nums,cut+1,ei,dp);
        
        maxCoins = Math.max(maxCoins,leftcost + lele*nums[cut]*rele + rightcost);
    }
    return dp[si][ei] = maxCoins;
}
public static int maxCoins(int[] nums) {
    int n = nums.length;
    int[][] dp = new int[n][n];
    return maxCoins(nums, 0,n-1,dp);
}
public static void main(String[] args){
    int[] nums = {3,1,5,8};
    System.out.println(maxCoins(nums));
}
}
