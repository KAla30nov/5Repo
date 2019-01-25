# include <stdio.h>


//# Main Function
int main()
{
      int x, y, z,operation;

  printf("Enter operation code : 1.add,2.sub,3,divide,4.mul :\n");
   scanf("%d",&operation);
        printf("Enter two numbers x and y :\n" );
        scanf("%d%d", &x, &y);

        //z = x + y;
        if(operation == 1){
                printf(" Enter into Add :\n" );
            z=add(x,y);
            printf("Sum of x and y is :%d", z);
        }else if(operation == 2){
            printf(" Enter into SUB :\n" );
            z=sub(x,y);
            printf("SUB of x and y is :%d", z);
        }
else if(operation == 3){
            printf(" Enter into Div :\n" );
            z=div(x,y);
            printf("Div of x and y is :%d", z);
        }


else if(operation == 4){
            printf(" Enter into Mul :\n" );
            z=mul(x,y);
            printf("Mul of x and y is :%d", z);
        }









    return 0;

}

int add(int num1, int num2)
{
    printf("add... \n");
 return (num1 + num2);

}
int sub(int num1, int num2)
{

 return  num1 - num2;

}

int div(int num1, int num2)
{

 return num1/num2;

}

int mul(int num1, int num2)
{

 return num1*num2;


}
