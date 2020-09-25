package dp;

import java.util.*;

public class Boj10844 {
	static int number;
	static int[][] cache;
	static int result=0;

	public static int solve(int curr, int index) {
		if (curr == number) {
			cache[curr][index]=1;
			return cache[curr][index];
		}
		
		if (cache[curr][index] != 0)
			return cache[curr][index];
		
		if(index!=0)
			cache[curr][index] += solve(curr + 1, index-1);
		if (index!=9)
			cache[curr][index] += solve(curr + 1, index+1);

		cache[curr][index] %= 10007;

		return cache[curr][index];
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		number = scanner.nextInt();

		cache = new int[number + 1][10];
		
		solve(number, 0);
		
		if(number==1) {
			for(int i=1; i<10; i++) {
				result+=cache[0][i];
			}
		}
		else {
			for(int i=0; i<10; i++) {
				result+=cache[0][i];
			}
		}
		
		for(int i=0; i<=number; i++) {
			for(int j=0; j<10; j++) {
				System.out.print(cache[i][j]+" ");
			}
			System.out.println();
		}
		
		
		
	
		System.out.println(result);
		scanner.close();
		return;
	}
}