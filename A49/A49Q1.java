import java.util.Scanner;

class A49Q1
{
    public static void transpose(int[][] mat, int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0; i < iCol; i++)
        {
            for(j = 0; j < iRow; j++)
            {
                System.out.print(mat[j][i]+ "\t");
            }
            System.out.println();
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

        transpose(arr,no1,no2);
    }
}