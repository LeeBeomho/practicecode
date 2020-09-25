package dp;

import java.util.*;

public class Boj9461 {
	static int number;
	static long[] cache;

	public static long solve(int curr) {
		if (curr == number)
			return 1;
		
		
		if (cache[curr] != 0)
			return cache[curr];
		
		if (curr <= number - 2)
			cache[curr] += solve(curr + 2);
		if (curr <= number - 3)
			cache[curr] += solve(curr + 3);
		
		
		return cache[curr];
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int caseNumber;
		long[] result;
		caseNumber=scanner.nextInt();
		
		result=new long[caseNumber];
		
		for(int i=0; i<caseNumber; i++) {
		number = scanner.nextInt();
		number++;
		
		cache = new long[number + 1];
		
		result[i]=solve(0);
		}
		
		for(int i=0; i<caseNumber; i++)
			System.out.println(result[i]);
		
		scanner.close();
		return;
	}
}