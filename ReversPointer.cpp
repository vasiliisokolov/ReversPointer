#include <iostream>



void reverse_massive(int *arr)
{
    
    int temp;
    int j = 9;
    for (int i = 0; i < 5; i++)
    {
        int temp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = temp;
        j--;
       
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    std::cout << "The array before revers:\n";

      for(int i = 0; i < 10; i++)
    {
        std::cout << *(arr+i) << " ";
    }
    std::cout << std::endl;
    
    reverse_massive(arr);
    
    std::cout << "The array after revers:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << *(arr + i) << " ";

    }
}