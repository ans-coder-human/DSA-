
import java.util.*;
public class MatrixChainMultiplication {
    // Problem:-  https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1#
    public static int mcm_memo(int[] arr,int si,int ei,int[][] dp){
        if(ei-si==1){
            return dp[si][ei] =0;
        }
        if(dp[si][ei]!=-1){
            return dp[si][ei];
        }
        int minres = (int)1e9;
        for(int cut = si+1;cut<ei;cut++){
        int left = mcm_memo(arr,si,cut,dp);
        int right = mcm_memo(arr,cut,ei,dp);
        minres = Math.min(minres,left+(arr[si]*arr[cut]*arr[ei])+right);
        }
        return dp[si][ei] = minres;
    }
    public static void main(String[] args){
       int N = 5;
       int[] arr = {40, 20, 30, 10, 30};
       int[][] dp =new int[N][N];
       for(int[] d:dp){
           Arrays.fill(d,-1);
       }
    
       System.out.println(mcm_memo(arr, 0, N-1, dp));
    }
}
