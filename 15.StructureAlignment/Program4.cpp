#include <iostream>
// Alignment in Memory while creating a Structure
struct student
{
    int roll;
    char name[24]; // Changing char[25] to char[24]
    char dept[10];
    char address[50];
};
// }__attribute__((packed)); //Uncomment this to remove alignment and comment out above closing bracket.

int main(void)
{
    student s1;
    std::cout << sizeof(int) << std::endl;  //4
    std::cout << sizeof(char) << std::endl; //1
    std::cout << sizeof(s1) << std::endl;   //92
    return 0;
}
/*
=> So what happens is that the compiler needs to map this structure to a memory block which should have a addresss in multiple of 4.
=> Previously the total of memory was 89 byte, closest multiple of 4 is 92, so compiler added 3 byte padding 
=> But when we decrease a byte in char, total becomes 88 which is infact multiple of 4 so no need of padding here 
=> This way if you will make an array of structure every member of this array, will have a contiguous memory allocation.
=> Also try avoid using attribute packed as this has a serious constraint to platform in which it was built, this hampers interoperability of your application.