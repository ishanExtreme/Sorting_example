#include <vector>
#include <iostream> 
/**
 * Sort the list of integers in ascending order using
 * Insertion Sort technique
 * 
 * @param array Container which is to be sorted
 * @param size integer type which stores size of the array(vector)
 * @return sorted 'array'
 * */ 
std::vector<int> sort(std::vector<int> array, int size)
{
    for(int i=1; i<size; i++)
    {
        int key = array[i];
        int j = i-1;

        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = key;
    }

    return array;

}
/**
 * Print the list of integers
 * 
 * @param array Container which is to be printed
 * @param size  integer type which stores size of the array(vector)
 * */ 
void print(std::vector<int> array, int size)
{
    for(int i=0; i<size; i++)
    {
        std::cout << array[i] << ",";
    }
    std::cout << "\n";
}

int main()
{
    int size;
    std::cout << "Enter Size:";
    std::cin >> size;
    std::vector<int> array;
    
    std::cout << "Enter Elements:\n";
    for(int i=0; i<size; i++)
    {   int elem;
        std:: cin >> elem;
        array.push_back(elem);
    }

    std::cout<<"Original Array:";
    print(array, size);

    array = sort(array, size);

    std::cout<<"Sorted Array:";
    print(array, size);

    return 0;
}