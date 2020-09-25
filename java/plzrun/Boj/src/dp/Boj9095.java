package dp;

import java.util.*;

public class Boj9095 {
	static int number;
	static int[] cache;

	public static int solve(int curr) {
		if (curr == number)
			return 1;

		
		if (cache[curr] != 0)
			return cache[curr];

		cache[curr] += solve(curr + 1);
		if (curr <= number - 2)
			cache[curr] += solve(curr + 2);
		if (curr <= number - 3)
			cache[curr] += solve(curr + 3);

		return cache[curr];
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int caseNumber;
		int[] result;
		caseNumber=scanner.nextInt();
		
		result=new int[caseNumber];
		
		for(int i=0; i<caseNumber; i++) {
		number = scanner.nextInt();
		
		cache = new int[number + 1];
		
		result[i]=solve(0);
		}
		
		for(int i=0; i<caseNumber; i++)
			System.out.println(result[i]);
		
		scanner.close();
		return;
	}
}