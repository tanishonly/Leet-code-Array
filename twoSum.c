#include <stdio.h>
void findTwoSum(int num[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (num[i] + num[j] == target)
            {
                printf("Found matching pair: %d and %d\n", num[i], num[j]);
                return;
            }
        }
    }

    printf("No pair adds up to %d.\n", target);
}
int main(void)
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num) / sizeof(num[0]);
    int target;
    printf("Enter the target number: ");
    scanf("%d", &target);
    findTwoSum(num, size, target);
    return 0;
}
