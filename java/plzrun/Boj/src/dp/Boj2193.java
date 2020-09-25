package dp;
import java.util.Scanner;

public class Boj2193 {
	static int number;
	static long[] cache;

	public static long solve(int curr) {
		if (curr == number||curr==number-1)
			return 1;
		if(curr==number-2)
			return 1;
		
		if (cache[curr] != 0)
			return cache[curr];
		
		
			cache[curr] += solve(curr + 1);
		if (curr <= number - 2)
			cache[curr] += solve(curr + 2);

		
		return cache[curr];
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		number = scanner.nextInt();

		cache = new long[number + 1];

		System.out.println(solve(0));
		scanner.close();
		return;
	}
}
