package dp;
import java.util.Scanner;

public class Boj9465 {
	static int number;
	static int dp[][], cash[][];
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		int caseNumber;
		
		caseNumber=scanner.nextInt();
			for(int i=0; i<caseNumber; i++) {
				number=scanner.nextInt();
				
				cash=new int[2][number+1];
				dp=new int[2][number+1];
				
				for(int j=0; j<2; j++) 
					for(int k=1; k<=number; k++)
						cash[j][k]=scanner.nextInt();
				
				dp[0][1]=cash[0][1];
				dp[1][1]=cash[1][1];
				
				for(int k=2; k<=number; k++) {
					dp[0][k]=Math.max(dp[1][k-1], dp[1][k-2])+cash[0][k];
					dp[1][k]=Math.max(dp[0][k-1], dp[0][k-2])+cash[1][k];
				}
				
				System.out.println(Math.max(dp[0][number], dp[1][number]));
			}
		
		scanner.close();
		return;
		
	}

}
