#include <iostream>
using namespace std;

long long int binary_search(long long int arr[], int size_of_array,long long int x) {
	int low = 0;
	int high = size_of_array - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		int guss = arr[mid];

		if (guss == x)return guss;
		else if (guss < x)low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}
int main()
{
    int n = 1000;
	long long int arr[1000];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	cout << binary_search(arr, n, 4757); 

}
