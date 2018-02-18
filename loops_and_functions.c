#include<stdio.h>
#include<stdio.h>
#include<math.h>

int recArea(int, int);
int square(int);
int power(int, int);
int powa(int, int);


int main ()
{

int x, y, z;

for ( x = 2, y = 5, z = 2; x < 5; x++, y++ )
{
z = x * y + z;
} 
printf("Variables: %s%d%s%d%s%d ", " x = ", x , ", y = ", y, ", z = ",z);
/*
======================================================================
*/

int sum = 0;
x = 1;
while ( x < 7)
{
sum += x * 2;
x++;
} 
printf("\nVariables: %s%d%s%d ", " x = ", x , ", sum= ", y);

/*
======================================================================
*/
int s, c, ans;
for ( s = 7, c = 2, ans = 0; s >2 ; s--, c++ )
{
	ans += s * c;
}
printf("\nVariables: %s%d%s%d%s%d ", " s = ", s , ", c = ", c, ", ans = ",ans);

/*
======================================================================
*/

int a = 8, total = 1;
while ( a < 1)
{
	total += a-- / 2;
}
printf("\nVariables: %s%d%s%d ", " a = ", a , ", total = ", total);

/*
======================================================================
*/

/*
create a function to calculate the area of a rectangle
Area of a rectangle = length * width
*/

int area = recArea(5,10);
printf("\nThe area of the rectangle : %d", area);

/*
======================================================================
*/
int square_root = square(5);
printf("\nThe square of number : %d", square_root);

/*
======================================================================
*/

int result = pow(4,3);
int number, pow;
printf("\nThe number 4 cubed is : %d", result);


/*
======================================================================
*/

int ans_powa = powa(5,3);
int base, exponent;
printf("\nThe number 5 cubed is : %d", ans_powa);

/*
======================================================================
*/
int side;
int square_shape = square(side);
square_shape = square(5);
printf("\nThe square with a side of 5 meters has an area of : %d", square_shape);

/*
======================================================================
*/

int flooring;
int unitCost;
unitCost = recArea(6,7);
printf("\nThe unit cost of a flooring of dimensions 6 x 7 is :%d", unitCost);




/*
======================================================================
*/

printf("\nThank you\n\n");
return 0;

}
/*
==============================functions========================================
*/

int recArea(int length, int width)
{
    return length * width;
}
int square(int number)
{
	return number * number;
}

int power(int number, int power)
{
        int result = 1;
        if ( power > 0)
               for (int n = 0; n < power; n++)
                      result *= number;
        else
               for (int n = 0; n > power; n--)
                      result /= number;
        return result;
}

int exponent,base;
int powa(int base, int exponent)
{
        int ans_powa = 1;
        if ( exponent > 0)
               for (int n = 0; n < exponent; n++)
                      ans_powa *= base;
        else
               for (int n = 0; n > exponent; n--)
                      ans_powa /= base;
        return ans_powa;
}

