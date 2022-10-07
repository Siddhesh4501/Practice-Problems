/* Given an array of integers arr, sort the array by performing a series of pancake flips.

In one pancake flip we do the following steps:

Choose an integer k where 1 <= k <= arr.length.
Reverse the sub-array arr[0...k-1] (0-indexed).
*/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;


public class Pancake {

    static void reverse(int[] arr, int k )
    {
        for (int i = 0; i <= k / 2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[k - i ];
            arr[k - i ] = temp;
        }
    }

    static int findgreat(int[] arr, int n)
    {
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            if(arr[i] > arr[ans])
            {
                ans = i;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        //int[] arr = {6,9,13,4,3,15,1,8,2,7,5};
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int[] arr = new int[num];
        for (int i = 0; i < num; i++) {
            arr[i] = in.nextInt();
        }
        ArrayList<Integer> ar = new ArrayList<Integer>();
        int ans = 0;
        for (int i = arr.length-1; i > 0; i--) {
            int n = findgreat(arr,i);
            if(n == i)
            {
                continue;
            }
            else {
                ar.add(n);
                reverse(arr, n);
                reverse(arr, i);
                ar.add(i);
                ans+=2;
            }
        }

        System.out.println(Arrays.toString(arr));

    }

}
