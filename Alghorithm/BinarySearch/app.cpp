#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int midd = 0;
    int left = 0;
    int right = size;
    
    while(true){
        midd = (left +  right)/2;

        if(key < arr[midd])
            right = midd - 1;
        else if (key > arr[midd])
            left = midd + 1;
        else 
            return midd;

        if(left > right)
            return -1;

    }

    return 0;
}

int	main()
{
    int arr[] = {11,22,33,44,55,66};
    auto result = BinarySearch(arr, 6, 22);
    cout<< result << endl;
    return 0;
}
