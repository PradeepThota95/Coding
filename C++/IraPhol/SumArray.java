class SumArray {
	public static void main(String[] args) {
		int[] data = {1, 2, 3, 4, 5, 6};
		int sum  = 0;

		for(int i = 0; i < 6; ++ i)
			sum += data[i];

		System.out.println("Sum of array : " + sum);
	}
}
