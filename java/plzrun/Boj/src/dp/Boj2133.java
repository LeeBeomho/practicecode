package dp;

import java.util.*;

public class Boj2133 {
	static int number;
	static int[] cache;

	public static int solve(int curr) {
		if(curr%2==1)
			return 0;
		
		if (curr == number)
			return 1;

		if (cache[curr] != 0)
			return cache[curr];

		if (curr <= number - 2)
			cache[curr] += solve(curr + 2)*3;
		for(int i=4; i<=number-curr; i+=2) {
			if(curr<=number-i)
				cache[curr]+=solve(curr+i)*2;
			else break;
		}
		
		
		return cache[curr];
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
	
		number = scanner.nextInt();
		
		cache = new int[number + 1];
		
		
		System.out.println(solve(0));
		
		scanner.close();
		return;
	}
}