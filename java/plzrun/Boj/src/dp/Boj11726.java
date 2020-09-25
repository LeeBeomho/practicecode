package dp;

import java.util.*;

public class Boj11726 {
	public static int[] numberOfCases(int width, int[] cases) {

		cases[0] = 0;
		cases[1] = 1;
		cases[2] = 2;

		for (int i = 0; i <= width; i++) {
			cases[i] = (cases[i - 1] + cases[i - 2]) % 10007;
		}
		return cases;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int width;
		int[] cases;

		width = scanner.nextInt();

		cases = new int[width + 1];

		numberOfCases(width, cases);
		System.out.println(cases[width]);

		scanner.close();
		return;
	}
}
