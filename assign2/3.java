/*
* Copyright Rohit Das (C) 2017
* To calculate min. no. of stops for a car to refuel
*/
import java.io.*;
 
class Solution_MinStop{
	public static final int MOD = 1000000007;
 
	public static void main(String[] args) 
		                    throws java.io.IOException {
		BufferedReader rd = new BufferedReader(
		                    new InputStreamReader(System.in));
		PrintWriter wr = new PrintWriter(System.out);
		System.out.println("Enter no. of stops and max. units of 
		                   dist. to travel:");
		String[] tokens = rd.readLine().split(" ");
		int n = Integer.parseInt(tokens[0]);
		int m = Integer.parseInt(tokens[1]);
		System.out.println("Enter the destinations:");
		int[] array = new int[n];
		for (int i = 0; i < n; i++) 
			array[i] = Integer.parseInt(rd.readLine());		
		int dp[] = new int[n];   int arr[] = new int[n];
		long counter = 0;
		int k = 0;  	int j = 0;
		dp[0] = 1;
		for (int i = 1; i < n; i++) {
			while (array[i] - array[j] > m) {
				counter -= dp[j];	j++;
			}
			arr[i] = arr[j] + 1;
			while (arr[k] == arr[j]) {
				counter += dp[k];	k++;
			}
			dp[i] += counter % MOD;
		}
		wr.println((arr[n-1]-1) + " " + dp[n-1]);
		wr.close();
	}
}