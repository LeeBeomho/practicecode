package dp;
import java.util.*;

public class Boj11055 {
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
		
		if(number>=1) {
			for(int i=1; i<=number; i++) {
				dp[i]=cash[i];
				for(int j=1; j<i; j++) {
					if(cash[j]<cash[i])
						dp[i]=Math.max(dp[j]+cash[i], dp[i]);
				}
				
			}
			
		}
		for(int i=1; i<=number; i++)
			if(max<dp[i])
				max=dp[i];
		System.out.println(max);
		
		
		scanner.close();
		return;
	}
}
