//Joshua Stiller CSC 145A. Project 8
#include "JWASBinaryHeap.h"

BinaryHeap::BinaryHeap()

{
    heapSize = 10;
}
BinaryHeap::BinaryHeap(int s){
    heapSize = s
}
bool BinaryHeap::IsEmpty()
{
    // Heap is empty if only
    // heapSize = 0
    return heapSize == 0;
}

void BinaryHeap::ShiftUp(int index)
{
    // Do nothing in root
    if (index == 1)
        return;

    if (arr[index] > arr[p(index)])
    {
        // Swap Upwards
        std::swap(arr[index], arr[p(index)]);

        // Recurse until root
        ShiftUp(p(index));
    }
}

void BinaryHeap::Insert(int key)
{
    // Add a new element in vector
    if (heapSize + 1 >= sizeof(arr))
        arr[10]= {0}

    // Store the key in the vector last position
    vect[++heapSize] = key;

    // Shift upwards
    ShiftUp(heapSize);
}

void BinaryHeap::ShiftDown(int i)
{
    // For non-existing index
    // just do nothing
    if(i > heapSize)
        return;

    // Initialize swapId
    int swapId = i;

    // Compare with left child, if exists
    if (l(i) <= heapSize && arr[i] < arr[l(i)])
        swapId = l(i);

    // Compare with right child, if exists
    if (r(i) <= heapSize && arr[swapId] < arr[r(i)])
        swapId = r(i);

    // Swap with the larger of the two children
    if (swapId != i)
    {
        // Swap downwards with the larger
        // of the two children
        std::swap(arr[i], arr[swapId]);

        // Recurse until the index
        ShiftDown(swapId);
    }
}

int BinaryHeap::ExtractMax()
{
    // Maximum value is in root
    int maxVal = vect[1];

    // Swap with the last existing leaf
    std::swap(arr[1], arr[heapSize--]);

    // Fix heap property downwards
    ShiftDown(1);

    // Return the maximum value
    return maxVal;
}

int BinaryHeap::GetMax()
{


    // Return root's key
    return arr[1];
}
