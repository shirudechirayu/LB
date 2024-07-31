import java.util.Scanner;

class A49Q2
{
    public static void reverseRow(int[][] mat, int iRow, int iCol)
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol / 2; j++)
            {
                temp = mat[i][j];
                mat[i][j] = mat[i][iCol-1-j];
                mat[i][iCol-1-j] = temp;
            }
        }
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0, no1 = 0, no2 = 0;

        System.out.println("Enter the number of rows:");
        no1 = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        no2 = sobj.nextInt();

        int arr[][] = new int[no1][no2];

        System.out.println("Enter the elements:");
        for(i = 0; i < no1; i++)
        {
            for(j = 0; j < no2; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Elements before reversal:");
        for(i = 0; i < no1; i++)
        {
            for(j = 0; j < no2; j++)
            {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }

        reverseRow(arr,no1,no2);

        System.out.println("Elements after reversal:");
        for(i = 0; i < no1; i++)
        {
            for(j = 0; j < no2; j++)
            {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}