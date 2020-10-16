#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // This pointer will hold the base address of the block created
    int *ptr, *ptr1;
    int n, i;

    // Get the number of elements for the array
    n = 5;
    cout << "Enter number of Elements: " << n << endl;

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    // Dynamically allocate memory using calloc()
    ptr1 = (int *)calloc(n, sizeof(int));

    // Check if the memory has been successfully allocated by malloc or not
    if (ptr == NULL || ptr1 == NULL)
    {
        cout << "Memory not allocated.\n";
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        cout << "Memory successfully allocated using malloc.\n";

        // Free the memory
        free(ptr);
        cout << "Malloc Memory successfully freed.\n";

        // Memory has been successfully allocated
        cout << "Memory successfully allocated using calloc.\n";

        // Free the memory
        free(ptr1);
        cout << "Calloc Memory successfully freed.\n";
    }

    return 0;
}
