package dp;

import java.util.*;

public class Main {
	static int number;
	static int[] cache;

	public static int solve(int curr) {
		if (curr == number)
			return 1;

		
		if (cache[curr] != 0)
			return cache[curr];

		cache[curr] += solve(curr + 1);
		if (curr <= number - 2)
			cache[curr] += solve(curr + 2) * 2;

		cache[curr] %= 10007;

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