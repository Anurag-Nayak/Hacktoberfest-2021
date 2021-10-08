/*A program to check whether a number is palindrome or not.
An integer is a palindrome if the reverse of that number is equal to the original number.
Eg:- 121. Reverse of 121 is also 121. Hence, 121 is a palindrome number
*/
#include <stdio.h>
int main()
{
    int num, reverse=0, rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    int n = num;//storing the number in another variable because the number would reduce to 0 after computing
    while(n != 0)
    {
        rem = n % 10;//extracting the last digit and storing it in rem
        reverse = reverse * 10 + rem;//formula to reverse the digits of a number
        n /= 10;//reducing the number of digits by 1 from the units place by dividing the number by 10
    }
    if(reverse == num)//checking if the reversed number is the same as the number entered
        printf("%d is a palindrome number\n",num);
    else
        printf("%d is not a palindrome number\n",num);
    return 0;
}
