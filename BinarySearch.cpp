//Search Element =12
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int search_element)
{
    int low = 0;            //zero Index Of the Array
    int high = size - 1;   //Last Index of the Array
   
    int mid = low + (high - low) / 2;

    // we have not used this formula middle = (low+high)/2 because it will cross the 
    //limit of maximum positive int value(2^31 – 1 ) specially when you add low and high.

    while (low <= high)
    {
        if (arr[mid] == search_element)
        {
            return mid;  
        }
        if (search_element > arr[mid])
        {
            low = mid + 1; //Right Part 
        }
        else
        {
            high = mid - 1; //Left Part
        }
         
        mid = low + (high - low) / 2;
    }
    return -1;
}
int main()
{
    int array[9] = {10,12,20,32,50,55,65,80,99};

    int result = binarysearch(array, 9, 12);       //Function Call
    cout << "Index of 12 is : " << result << endl;
 
    return 0;
}
