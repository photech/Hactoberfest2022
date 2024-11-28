public class grade
{
    public static void main(String args[])
    {
        int given_mark=70;
        if (given_mark>=80)
        {
            System.out.println("Grade : O");
        }
        else if(given_mark<90 && given_mark>=80)
        {
            System.out.println("Grade : E");
        }
        else if(given_mark<80 && given_mark>=70)
        {
            System.out.println("Grade : A");
        }
        else if(given_mark<70 && given_mark>=60)
        {
            System.out.println("Grade : B");
        }
        else if(given_mark<60 && given_mark>=50)
        {
            System.out.println("Grade : C");
        }
        else if(given_mark<50 && given_mark>=40)
        {
            System.out.println("Grade : D");
        }
        else
        {
            System.out.println("Grade : F");
        }
    }

}