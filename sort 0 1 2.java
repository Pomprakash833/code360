import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static void sort012(int[] arr)
    {
       int i=0;
       int mid=0;
       int j =arr.length-1;
       int temp;
       while(mid<=j){
           if(arr[mid]==0){
           temp=arr[i];
           arr[i]=arr[mid];
           arr[mid]=temp;
           i++;
           mid++;
           }
           else if(arr[mid]==1){
               mid++;
           }
           else{
               temp=arr[mid];
               arr[mid]=arr[j];
               arr[j]=temp;
               j--;
           }
       }
    
    }
}
