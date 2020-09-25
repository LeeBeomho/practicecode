package dp;
import java.util.*;

public class Boj11053 {
	static int[] cash;
	static int[] dp;
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		int number;
		int max=Integer.MIN_VALUE;
		number=scanner.nextInt();
		
		cash=new int[number+1];
		dp=new int[number+1];
		
		for(int i=1; i<=number; i++) {
			cash[i]=scanner.nextInt();
		}
		
		dp[0]=0;
		
		if(number>=1)
			for(int i=1; i<=number; i++) {
				dp[i]=1;
				for(int j=1; j<i; j++) {
					if(cash[j]<cash[i]&&dp[i]<=dp[j])
						dp[i]=dp[j]+1;
						
				}
			}
		
		for(int i=0; i<=number; i++)
			max=Math.max(max, dp[i]);
		
		System.out.println(max);
		
		
		scanner.close();
		return;
	}
}
