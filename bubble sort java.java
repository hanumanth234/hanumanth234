import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i, j, n, min, swap;
        
        System.out.print("Enter the number of elements of the array: ");
        n = scanner.nextInt();
        int[] array = new int[n];
        
        System.out.println("Enter the elements of the array:");
        for (i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }
        
        for (i = 0; i < n - 1; i++) {
            min = i;
            for (j = i + 1; j < n; j++) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }
            if (min != i) {
                swap = array[i];
                array[i] = array[min];
                array[min] = swap;
            }
        }
        
        System.out.println("The sorted array:");
        for (i = 0; i < n; i++) {
            System.out.print(array[i] + "\t");
        }
    }
}
