import java.util.Scanner;

class A49Q4
{
    public static boolean chkSparse(int[][] mat, int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;
        boolean bFlag = false;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
               if(mat[i][j] == 0)
               {
                    iCnt++;
               }
            }
        }

        if(iCnt > (iRow * iCol) / 2)
        {
            bFlag = true;
        }

        return bFlag;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0, no1 = 0, no2 = 0;
        boolean bRet = false;

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

        bRet = chkSparse(arr,no1,no2);

        if(bRet == true)
        {
            System.out.println("It is a sparse matrix");
        }
        else
        {
            System.out.println("It is not a sparse matrix");
        }
    }
}