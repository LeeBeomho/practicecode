package dp;
import java.util.*;

public class Boj1463 {
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		int x;
		int[] count;
		
		x=scanner.nextInt();
		
		count=new int[x+1];
		MakeOne.makeone(x, count);
		
		System.out.print(count[x]);
		
		scanner.close();
		return;
	}

}

class MakeOne{
	public static int[] makeone(int x, int[] count){
		count[0]=Integer.MAX_VALUE;
				
		for(int i=1; i<=x; i++) {
			
			if(i==1) {
				count[i]=0;
			}
			else if(i==2) {
				count[i]=1;
			}
			else if(i==3) {
				count[i]=1;
			}
			else {
			count[i]=count[i-1]+1;
			if(i%2==0)
				count[i]=Math.min(count[i], count[i/2]+1);
			if(i%3==0)
				count[i]=Math.min(count[i], count[i/3]+1);
			}
		
		}
		
		
		return count;
	}
}