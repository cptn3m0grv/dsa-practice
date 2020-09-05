import java.util.*;
import java.util.concurrent.TimeUnit;

class mthEleKthROt{
    public static void main(String[] args) {
        long startTime = System.nanoTime();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];

        for(int i = 0; i < size; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter the pos to find the element at after rotation: ");
        int pos_to_find = sc.nextInt();

        System.out.println("Enter the number of rot: ");
        int rot = sc.nextInt();

        int final_pos = (pos_to_find + rot - 1) % size;

        System.out.println("Here is what you are looking for: " + arr[final_pos]);

        long endTime = System.nanoTime(); 
        long durationInNano = (endTime - startTime);     
        long durationInMillis = TimeUnit.NANOSECONDS.toMillis(durationInNano);
        System.out.println("\nTime taken: " + durationInMillis);
    }
}