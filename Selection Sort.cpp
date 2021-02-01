#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void SelectionSort(std::vector<T>& vec)
{
	
	for (int i = 1; i < vec.size() - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < vec.size(); ++j)
		{
			if (vec[j] < vec[min])
			{
				min = j;
			}
			std::swap(vec[j], vec[min]);
		}
	}
}

int main()
{
	std::vector<char> nums { 'c', 't', 'f', 'g', 'j' };

	SelectionSort(nums);

	return 0;
}
