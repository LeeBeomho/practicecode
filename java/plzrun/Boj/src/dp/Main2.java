package dp;

import java.util.*;

public class Main2 {
	static int number;
	static Integer[] cache;

	public static int solve(int curr) {
		if (curr == number)
			return 1;

		int ret = cache[curr];

		if (ret != 0)
			return ret;

		ret += solve(curr + 1);
		if (curr <= number - 2)
			ret += solve(curr + 2) * 2;

		ret %= 10007;

		return ret;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		number = scanner.nextInt();

		cache = new Integer[number + 1];

		System.out.println(solve(0));
		scanner.close();
		return;
	}
}