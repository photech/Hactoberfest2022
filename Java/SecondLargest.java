import java.util.Scanner;
public class SecondLargest {

  public static void main(String[] args) {
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter the size of element in the array : ");
   int n = sc.nextInt();
   int arr[] = new int[n];
   
   for(int i=0; i<n; i++){
     System.out.println("Enter value for "+(i+1)+" : ");
     arr[i]=sc.nextInt();
   }
   
   for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
       if(arr[j]<arr[i]){
         int temp = arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
       }
     }
    }
     System.out.println("After sorting : ");
     for(int i :arr){
       System.out.print(i+" ");
     }
     
     for(int i=n-2; i>=0; i--){
       if(arr[i]!=arr[i+1]){
         System.out.println("Second Largest element in array is "+arr[i]);
         break;
       }
     }
   
   
  }
}
