#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h> 

template <typename T>
void ShuffleSort(std::vector<T>& arr)
{
	for (int i = 1; i < arr.size(); ++i)
	{
		srand(time(NULL));
		int r = rand() % i; // Between 0 and i. [0,9)
		std::swap(arr[i], arr[r]);
	}
}

int main()
{
	std::vector<int> nums{ 4, 6, 23, 8, 1, 25 };
	ShuffleSort(nums);

	return 0;
}

