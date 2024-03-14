import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, i, j, temp, flag;
        int[] array = new int[10]; // Assuming maximum size of the array is 10

        System.out.print("Enter the size of the array: ");
        n = scanner.nextInt();

        System.out.println("Enter the array elements: ");
        for (i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        for (i = 0; i < n - 1; i++) {
            flag = 0;
            for (j = 0; j < n - 1 - i; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0) {
                break;
            }
        }

        System.out.println("Sorted array is:");
        for (i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}
