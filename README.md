# CPP Introduction:

    1. Low level Programming
    2. Speed of Execution
    3. Derived from C
    4. Richer Library than C
    5. Object Oriented Programming

# Application:

1. Chrome, Firefox, Most of the Operating System(s) are written in C or C++.
2. Adobe Products, Device Drivers.

# First CPP Program:

    ```
    #include<iostream>
    using namespace std;

    int main(){
      cout<<"Hello World"; //Insertion Operator
      return 0;
    }
    ```
# Basic I/O in CPP:

    1. cout -> std O/P stream.
    2. cin -> std I/P stream.
    3. cerr -> std unbuffered error stream.
    4. clog -> std buffered I/P stream.
    5. endl -> New line => flushed the buffer while '\n' simply puts a new line.

# Errors in CPP:

    1. Syntax Errors
    2. Semantic Errors
    3. Linker Errors
    4. Runtime Errors
    5. Logical Errors

# Associativity & Precedence:

<!-- Image -->

# Operator in CPP:

    1. Arithmetic Operator
    2. Relational Operator
    3. Logical Operator
    4. Assignment Operator

# Loops in CPP:

    1. To do something repeatedly.
    2. To iterate through containers like arrays, list, etc.
    3. To run something forever like wen servers or other system.

# For Loop:

    Iterating through an array, list or any other containers, we generally prefer for loop.

# While Loop:

    1. Complex Logic Implementation(easily possible).
    2. Web servers.
    3. Game (Something coming Infinitely).

# Jump Statements:

    1. break
    2. continue
    3. return
    4. goto

# Functions in CPP:

1. Functions is a block of code that take I/P and gives O/P however I/O are optional.
2. Functions calls are happens in Last In First Out (LIFO) order.
3. We can use return Statement with void also in normal function which return a data type
we write something after return. But in void we can use return semi-colon to stop the
execution at that point and return.

# Application of Functions:

    1. Avoid code Redundary.
    2. Make code modular.
    3. Abstraction (for e.g. In Library functions, we do not have to worry about how they work).

# More on Functions in CPP:

    1. Inline function.
    2. Function Overloading.
    3. Default Argument.

# Advantages of Arrays:

    1. Random Access.
    2. Cache Friendliness.

# Limitation of Arrays:

    We need to know the size before we create them. So, in CPP we use Vector from STL Library.

# Pointers:

1. & when used before a variable name (while not declaring it) given address of the variable.

    ```
    int main(){                   
      int x = 10;
      cout<<(&x);
      return 0;
    }
    ```
    | Operator    			| Precedence   		|Address      |
    | :----------: 			| :-----------: 	|:-----------:|
    | x                 | 10    			    |0x1234       |

2. *(Dereference) When used before an address (or address variable, i.e, pointer) gives the value of the address.
    ```
    int main(){                   
      int x = 10;
      cout<<(*(&x));
      return 0;
    }
    ```

3. SYNTAX: int *ptr; or int* ptr; //Creating Pointer

    ```
    int main(){                   
      int x = 10, int* ptr = &x;
      cout<<(*ptr)<<" ";
      cout<<ptr<<" ";
      return 0;
    }
    ```
    | Variable    			| Value   		 |Address      |
    | :----------: 			| :-----------:|:-----------:|
    | ptr               | 0x1234    	 |0x1238       |

# Application of Pointer:

    1. Dynamic Memory Allocation.
    2. Implementation of Data Structure like Linked List, Tree, BST, etc.
    3. To do System Level Programming.
    4. To return multiple values.

# Structure Alignment:
1. Data types (Including int, float, double...) have alignment requirements.
2. A structure has alignment requirements same as its largest number's requirements.
<!-- Image -->
4. We Should try to declare variable in increasing order or decreasing order in their size to get optional size of structure.

# Reasons for Alignment:
1. Physical memory is accessed in the form of word.
2. Without Alignment, it is inefficient to store variable that span accross multiple words.
<!-- Image -->
3. If we remove alignment, then a 64-bits CPU would require two cycles to read d1.
<!-- Image  -->
4. Application of Union: Type Punning

# Dynamic Memory Allocation:
![image](https://drive.google.com/uc?export=view&id=1IhpZkOZ-4d8mziDXa1rgxNFdBplECMn5)

# More on new:
1. It is an operator.
2. It return the pointer to the memory allocated.
3. Always used for dynamic memory allocation.
4. Calls constructs for objects of class/struct.
5. Can Initialize value also.

# 3 Types of Memory Allocation:
1. Automatic => Stack.
2. Static => Data => Throughout Program.
3. Dynamic => Heap.

# Exception Handling:
1. Divide by Zero.
2. No Heap memory available.
3. Accessing array elements outside the allowed index range.
4. Pop from an empty Stack.

# Try, throw & Catch:
    ```
    try{
      //The code that may throw exception.
    }
    ```
    throw: used to throw exception.
    catch: one or more catch blocks are used to handle the exception.

# Stack Unwinding in Exception handling:

Stack Unwinding is a concept which says that a functions through an exception and if this function doesn't handle the exception then the control goes to the caller and if the caller also doesn't handle the exception then control goes to the caller of the caller and we keep on searching the handler for the exception in the function called stack until we find the handler and once we find the handler and once we find the handler, the handler get controlled and then out program continue after the handler.

# NOTE:
- As a general practice it is strongly recommended to use user defined exception only or non-primitive exceptions only.
- CPP has some own pre-defined exceptions classes also.
- In Java, the compiler not allow to throw primitive data-type as exception.

# Exception Class in CPP:

All Standard Library Exceptions like bad.alloc(thrown by new operator which there is any error during allocating Dynamic Memory), bad.cast, etc. inbuilt from exception class directly or indirectly.

# Smart Pointer
### Problem with Normal Pointers?
Memory leak! If we dynamically allocate memory and we don't deallocate the memory compiler doesn't give any error or warning and as a programmer its our responsibilty to insure that whatever dynamically allocated memory we have we deallocate it. If we forget to deallocate the memory then our program has memory leak program. And this became very big problem like given below.
```
void fun(){
  int *ptr = new
}

int main()
{
  while(true)
  {
    fun();
  }
}
```

### Smart Pointers:
Smart Pointers try to solve this type of memory leak issue by wrapping a given pointer to a class object.

#### Template smart pointer (can be used for any type).
