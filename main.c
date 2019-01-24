//# Header File
# include <stdio.h>


//# Main Function
int main()
{
      int x, y, z;

        printf("Enter two numbers x and y :\n" );
        scanf("%d%d", &x, &y);

        z = x + y;

        printf("Sum of x and y is :%d", z);

        if (z>0)
            {

            printf("x is greater than 0");
            }
        else
            printf("x is less than equal to 0");



    return 0;

}

