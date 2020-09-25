package dp;
import java.util.*;

public class Boj10844_2 {
	static int number;
	static long[][]dp;
	static int sum;
	
	public static int solve() {
		for(int i=1; i<=9; i++) {
			dp[1][i]=1;
		}
		
		if(number>1) 
			for(int j=2; j<=number; j++) {
				for(int i=0; i<=9; i++) {
					if(i!=9) 
						dp[j][i]+=dp[j-1][i+1];
					if(i!=0)
						dp[j][i]+=dp[j-1][i-1];
					
					dp[j][i]%=1000000000;
				}
			}
		
		sum=0;
		
		for(int i=0; i<10; i++)
				sum+=dp[number][i];
		
		sum%=1000000000;
		
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		number=scanner.nextInt();
		
		dp=new long[number+1][10];
		
		System.out.println(solve());

		scanner.close();
		return;
	}
}
