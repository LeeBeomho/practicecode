package dp;
import java.util.*;

public class Boj2156_2 {
	static int number;
	static int[] cash;
	static int[] dp;
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		number=scanner.nextInt();
		
		cash=new int[number+1];
		dp=new int[number+1];
		
		for(int i=1; i<=number; i++) {
			cash[i]=scanner.nextInt();
		}
		dp[0]=0;
		if(number>=1)
			dp[1]=cash[1];
		if(number>=2)
			dp[2]=cash[1]+cash[2];
		
		if(number>=3)
		for(int i=3; i<=number; i++) {
			dp[i]=Math.max(dp[i-1], 
					Math.max(dp[i-2]+cash[i], 
							dp[i-3]+cash[i-1]+cash[i]));
		}
		
		System.out.println(dp[number]);
		
		scanner.close();
		return;
	}
}
