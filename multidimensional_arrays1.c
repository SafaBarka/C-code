//it's straightford to call malloc to allocate a block of memory which can simulate an array, but with a size which we get to pick at run-time . 
//can we do the same sort of thing to simulate multidimensional arrays?
//we can ,but we will end up using pointers to pointers.

#include <stdlib.h>
#include <stdio.h>

void zeroit(int **array, int nrows, int ncolumns);
void print(int **array, int nrows, int ncolumns);
int main()
{
    int nrows = 5;
    int ncolumns = 8;
    int **array;
    //if we don't know how many columns the array will have, we will clearly allocate memory for each row(as many columns wide as we like) by calling malloc,
    //and each row will therefore be represented by a pointer. How will we keep track of those pointers?
    //there are , after all , many of them , one for each row. So we want to simulate an array of pointers, but we don't know how many rows there will be ,
    //either, so we will have to simulate that array (of pointers) with another pointer, and this will be a pointer to a pointer.

    //(array) is a (pointer-to-pointer-to-int):at the (first level), it (points to a block of pointers), (one for each row).
    //that (first-level) (pointer is the first one we allocate); it has (nrows) elements , with (each element big enough to hold a pointer-to-int), or int *.
    //if we successfully allocate it , we then fill in the pointers(all nrows of them) with a pointer (also obtained from malloc) to ncolumns number of ints, the storage for that row of the array.
    array = malloc( nrows * sizeof(int *));
    if (array == NULL)
        printf("out of memory\n");
    for (int i = 0 ; i <nrows; i++)
    {
            array[i] = malloc(ncolumns * sizeof(int));
            if (array[i] == NULL)
            {
                printf("out of memory\n");
            }
    }

    //once , we've done this , ce can(just as for the one-dimensional case) use array-like syntax to access our simulted multidimensianal array.
    // if we write array[i][j] we're asking for the i'th pointer pointed to by array, and then for the j'th int pointed to by that inner pointer.
    //(this is a prety nice result: although some completely different machinery, involving two levels of pointer dereferencing,
    //is going on behind the scenes, the simulated ,dynamically-allocated two-dimensional 'array' can still be accessed just as if it were an array of arrays.)

    //if a program uses simulated , dynamically, allocated multidimensional arrays,it becomes possible to write "heterogeneous" functions which 
    //don't have to know at compile time how big the arrays are. In other words, one function can operate on "arrays" of various sizes and shapes . The function will look something like 
    //func2(int **array, int nrows , int ncolumns){}

    zeroit(array,nrows,ncolumns);

    print(array,nrows,ncolumns);
    ///finally when it comes time to free one of these dynamically allocated multidimensional "arrays", we must remember to free each of the chunks of memory 
    //that we've allocated.(just freeing the top-level pointer, array wouldn't cut it; if we did, all the second-level pointers would be lost but not freed,
    //and would waste memory)

    for (int i = 0; i < nrows ;i++)
        free(array[i]);
    free(array);

}
//here is  function wich zeros out a pointer-t0-pinter , two dimensional "array"

void zeroit(int **array, int nrows, int ncolumns)
{
       int i , j;
       for(i = 0; i < nrows; i++)
       {
           for (j = 0 ; j < ncolumns ; j++)
           {
               array[i][j] = 0;
           }
       } 
}

// display the two dimensional array
void print(int **array, int nrows, int ncolumns)
{
    int i, j;
    i = 0 ;
    j = 0;
    while (i < nrows)
    {
        j = 0;
        while(j<ncolumns)
        {
            printf("%d ",array[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
