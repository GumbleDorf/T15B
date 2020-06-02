// Pre:
// - a[] is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Post:
// - return value = ∀ i ∈ {0..n-2} ( a[i] ≤ a[i+1] )
bool isSorted(int *a, int n)
{
	int counter = 0;
	while (counter < n-1) {
		if (a[counter] > a[counter+1])
			return false;
		counter++;
	}
	return true;
}

bool isSortedRecursion(int *a, int n, ...)
{
	
}