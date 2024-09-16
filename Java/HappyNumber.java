//23=2^2+3^2=13=1^2+3^2=10=1^2+0^2=1   1 or 4 so happy number

class HappyNumber {
  public static void main(String[] args) {
    int n = 23, sum, digit = 0;
    while (true) {
      sum = 0;
      while (n > 0) {
        digit = n % 10;
        sum = sum + digit * digit;
        n = n / 10;
      }
      n = sum;
      if (n == 1) {
        System.out.println("Happy number");
        break;
      } else if (n == 4) {
        System.out.println("Not happy Number");
        break;

      }
    }
    System.out.println(n);

  }
}