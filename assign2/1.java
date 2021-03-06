/*
* Copyright Rohit Das (C) 2017
* To sort an array using Quick Sort
*/
import java.util.*;

class QuickSort
{
	int partition(int arr[], int low, int high) {
		int pivot = arr[high]; 	int i = (low-1);
		for (int j=low; j<high; j++) {
			if (arr[j] <= pivot) {
				i++;
				// swap arr[i] and arr[j]
				int temp = arr[i];
				arr[i] = arr[j];	arr[j] = temp;
			}
		}
		// swap arr[i+1] and arr[high] (or pivot)
		int temp = arr[i+1];	
		arr[i+1] = arr[high];	arr[high] = temp;   	
		return i+1;
	}

	void sort(int arr[], int low, int high) {
		if (low < high) {
			int part = partition(arr, low, high);
			sort(arr, low, part-1);
			sort(arr, part+1, high);
							
		}
	}
	 
	/* A utility function to print array of size n */
	static void printArray(int arr[]) {
	    int n = arr.length;
	    for (int i=0; i<n; ++i)
		    System.out.print(arr[i]+" ");
	    System.out.println();
	}

	// Driver program
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = 20;
		System.out.println("Enter " + n + " elements:");
		int arr[] = new int[n];
	    for (int i = 0;i < n;i++) arr[i] = sc.nextInt();
	    QuickSort obj = new QuickSort();
	    obj.sort(arr, 0, n-1);
	    System.out.println("sorted array");
	    printArray(arr);
	}
}
