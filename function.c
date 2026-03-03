
#include<stdio.h>
my_fun1(int a, int b, int c );

int main()
{
    my_fun1(10, 20, 30);
    int valueA = 50,valueB = 50; 
    my_fun1(valueA,valueB,30);
    
    
}
my_fun1(int a, int b, int c )
{
    int sum = a + b + c;
    printf("The sum is: %d\n", sum);
    return 0;

}