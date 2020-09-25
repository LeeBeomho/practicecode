package dp;
import java.util.*;

public class Boj2156 {
	static int number;
	static int[] dp;
	static int[] cash;
	
	static int solve(int curr, int count) {
		if(dp[curr]!=0) {
			return dp[curr];
		}
		
		if(curr==number) {
			dp[curr]=cash[curr];
			if(count!=2)
				return dp[curr];
			return 0;
		}
		if(curr==number-1) {
			dp[curr]=cash[curr]+cash[curr+1];
			if(count==0)
				return dp[curr];
			if(count==1)
				return cash[curr];
			return cash[number];
		}
		
		if(curr<number-3)
			dp[curr]=Math.max(solve(curr+1, 2), 
				Math.max(solve(curr+2, 1)+cash[curr], 
						solve(curr+3, 2)+cash[curr+1]+cash[curr]));
		
		return dp[curr];
	}
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		number=scanner.nextInt();
		
		dp=new int[number+1];
		cash=new int[number+1];
		
		for(int i=0; i<number; i++) {
			cash[i]=scanner.nextInt(); 
		}
		
		System.out.println(solve(0, 0));
		scanner.close();
		return;
	}
}


