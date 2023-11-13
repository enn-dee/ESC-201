/* calculates the sum of the digits of positive numbers in the given array. It uses the digiSum function to calculate the digit sum of a number. The main function iterates through the array, adds the digit sum of positive numbers, and finally prints the result.*/

#include <stdio.h>
int digiSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{

    int sum = 0;
    int nums[] = {12, -1, 14, -15};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > 0)
        {
            sum += digiSum(nums[i]);
        }
    }
    printf("+ve nums sum: %d", sum);
    return 0;
}
