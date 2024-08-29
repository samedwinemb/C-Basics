/*Program about Datastructures*/
#include <stdio.h>
/** Data structure is a way/method of arranging data as a group
There are 5 types of data structures
1. Array - array is a collection of same data-type elements,the elements/ members of the array can be inserted and deleted at the begining and end
2. Structures - This is a user defined data-type , it has collection of any data-types
3. union - similar to structure , but the size of union is smaller than that of a structure
4. Linked list - Similar to that of array but the elements of linked list can added / deleted at any position
5. Stack - This is also similar to array but the address of stack will be linear regardless of the data type, the elements are pushed or poped in the stack
6. Queue - Similar to stack but the traversal of elements will be horizontal
7.Binary Tree-

1. array
 */
int main()
{
    char array[]={'1','2','3','4','5','6'}; // 0 1 2 3 4
    for(int i=0;i<(sizeof(array));i++) // sizeof returns no of array elements x size of the datatype
    {
       printf("%c  %d\n",array[i],&array[i]);

    }


return 0;
}
