int minimumAbsoluteDifference(int arr_count, int* arr) 
{
qsort(arr, arr_count, sizeof(int), compare);
    int minAbsDiff = INT_MAX;
    for(int i=1; i<arr_count; i++)
    {
        int currentAbsDiff = abs(arr[i]-arr[i-1]);
        if(currentAbsDiff < minAbsDiff)
        {
            minAbsDiff = currentAbsDiff ; 
        }
    }
    return minAbsDiff;
}
