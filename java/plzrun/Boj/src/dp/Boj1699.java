package dp;

import java.util.*;

public class Boj1699 {
	static int number;
	static int[] cache;

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		number = scanner.nextInt();
		
		cache = new int[number + 1];
		
		int root;
		
		cache[0]=0;
		
		if(number>=1) {
		cache[1]=1;
			for(int j=2; j<=number; j++) {
				root=(int)Math.sqrt((double)j);
				cache[j]=Integer.MAX_VALUE;
				for(int i=1; i<=root; i++) {
					cache[j]=Math.min(cache[j], cache[j-(i*i)]+1);
				}
			}
		}
		
		System.out.println(cache[number]);
		
		scanner.close();
		return;
	}
}