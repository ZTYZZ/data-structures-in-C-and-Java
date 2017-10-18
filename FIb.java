
public class FIb {
	/*
	 * FIB()的递归实现
	 * 
	 */
	public static void main(String[] args) {
		System.out.println(fib2(20));
		System.out.println(fib2(43));
		System.out.println(fib2(50));
		System.out.println(fib1(20));
		System.out.println(fib1(43));
		System.out.println(fib1(50));
	}
/*
 * 第一种方法：递归，其复杂度为O(1.6^n)接近O(2^n)
 * 之所以会这么慢，根据递归跟踪就很容易得出结论
 * 有大量的重复。
 */
	public static int fib1(int n) {
		return (n > 2) ? fib1(n - 1) + fib1(n - 2) : n;
	}
	
	/*
	 * 第二种方法：迭代
	 * A:记忆：memoization
	 * B:动态规划 颠倒计算方向
	 */
	
	public static int fib2(int n) {
		int f =0;
		int g =1;//init
		while(0<n--) {
			g = g+f;
			f = g-f;
			
		}
		
		return g;
	}
	
	
}
