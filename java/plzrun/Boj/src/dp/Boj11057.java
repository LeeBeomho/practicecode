package dp;
import java.util.*;

public class Boj11057 {
	static int number;
	static int[][]dp;
	static int sum;
	
	public static int solve() {
		for(int i=0; i<=9; i++) {
			dp[1][i]=1;
		}
		
		if(number>1) 
			for(int j=2; j<=number; j++) {
				for(int i=0; i<=9; i++) {
					for(int w=i; w<=9; w++) {
						dp[j][i]+=dp[j-1][w];
						dp[j][i]%=10007;
					}
					
					dp[j][i]%=10007;
				}
			}
		
		sum=0;
		
		for(int i=0; i<10; i++)
				sum+=dp[number][i];
		
		sum%=10007;
		
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		number=scanner.nextInt();
		
		dp=new int[number+1][10];
		
		System.out.println(solve());

		scanner.close();
		return;
	}
}
