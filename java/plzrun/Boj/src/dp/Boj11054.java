package dp;
import java.util.*;

public class Boj11054 {
	static int[] cash;
	static int[] dp;
	static int[] left;
	static int[] right;
	
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		int number;
		int max=Integer.MIN_VALUE;
		number=scanner.nextInt();
		
		cash=new int[number+1];
		dp=new int[number+1];
		left=new int[number+1];
		right=new int[number+1];
		
		
		for(int i=1; i<=number; i++) {
			cash[i]=scanner.nextInt();
		}
		
		left[0]=0;
		right[0]=0;
		
		if(number>=1)
			for(int i=1; i<=number; i++) {
				left[i]=1;
				right[number-i+1]=1;
				
				for(int j=1; j<i; j++) {
					if(cash[j]<cash[i]&&left[i]<=left[j])
						left[i]=left[j]+1;
				}
				
				for(int j=number; j>=number-i+1; j--) {
					if(cash[j]<cash[number-i+1]&&right[number-i+1]<=right[j])
						right[number-i+1]=right[j]+1;
				}
				
			}
		
		
		
		for(int i=1; i<=number; i++) {
			dp[i]=left[i]+right[i]-1;
			max=Math.max(max, dp[i]);
		}
			
		System.out.println(max);
		
		
		scanner.close();
		return;
	}
}
