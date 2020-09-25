package dp;
import java.util.*;

public class Boj2579 {
	static int[] dp;
	static int[] cash;
	static int number;
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		number=scanner.nextInt();
		
		dp=new int[number+1];
		cash=new int[number+1];
		
		dp[0]=0;
		cash[0]=0;
		
		for(int i=1; i<=number; i++) {
			cash[i]=scanner.nextInt();
		}
		
		for(int i=1; i<=number; i++) {
			if(i==1)
				dp[i]=cash[i];
			if(i==2)
				dp[i]=dp[1]+cash[i];
			
			if(i>=3)
			dp[i]=Math.max(dp[i-2]+cash[i], dp[i-3]+cash[i-1]+cash[i]);
	
		}
	
		System.out.println(dp[number]);
		
		scanner.close();
		return;
	}
}
