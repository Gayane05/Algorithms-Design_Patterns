#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void InsertionSort(T arr[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; j > 0; --j)
		{
			if (arr[j] < arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
	}
}


void InsertionSort(std::vector<int>& arr)
{
	
	for (int i = 0; i < arr.size(); ++i)
	{
		for (int j = i; j > 0; --j)
		{
			if (arr[j] < arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
	}

}

int main()
{
	int array[5] ={ 3, 45, 7, 9, 16};
	std::vector<int> arr {3, 45, 7, 2, 9, 16};

	InsertionSort(array, 5);
	InsertionSort(arr);

	return 0;
}