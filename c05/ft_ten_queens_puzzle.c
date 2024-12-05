/*Create a function that displays all possible placements of the ten queens on a
chessboard which would contain ten columns and ten lines, without them being
able to reach each other in a single move, and returns the number of possibilities.

The sequence goes from left to right. The first digit represents the first Queen’s
position in the first column (the index starting from 0). The Nth digit represents
the Nth Queen’s position in the Nth column.

The return value must be the total number of displayed solutions.*/

#include <unistd.h>
#include <stdio.h>
/*void ft_write_nb (int n)
{


}

void ft_next_queen(void)
{
    int i;

    i = 0;
    while ( i < 10)
    {
        
    }
}*/

/*int ft_ten_queens_puzzle(void)
{
    int n;
    int k;
    int arr[10];

    n = 0;
    while ( n < 10)
    {
        k = 0; 
        while ( k < 10 )
        {
            arr[n] = k;
        }
    }
}*/

void ft_pairs(int n, int *pn, int *pks)
{
    int k;
    int m;
    int arr[7];
   // int *pks;
   // int *pn;
    
    printf("n = %d\n", n);
    k = 0;
    m = 0;
    while (k < 7)
    {
        if((k == n - 1) | (k == n) || (k == n + 1))
            m = k + 3;
        else
            m = k;
        arr[k] = m;
        printf ("arr[%d] = %d\n", k, m);
        k++;       
        m++; 
    }
    pn = &n;
    pks = &arr[0];
    printf("pn = %d\n", *pn);
    printf("pk[0] = %d\n", *pks);
    printf("pk[6] = %d\n", *(pks+6));
}       



int main(void)
{
   // int n = 9;
   // write(1, '9', 1);

    int n = 6;
    int *pn;
    int *pks;
    ft_pairs(n, pn, pks);



}