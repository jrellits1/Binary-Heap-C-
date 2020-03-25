#ifndef BINARYHEAP_H
#define BINARYHEAP_H


class BinaryHeap
{
private:
    int * heapPtr ;
    int heapSize;

    // three helper navigation function
    int p(int i) { return i>>1; } // i/2
    int l(int i) { return i<<1; } // i*2
    int r(int i) { return (i<<1)+1; } // i*2+1

    void ShiftUp(int index);
    void ShiftDown(int i);

public:
    BinaryHeap();

    bool IsEmpty();
    void Insert(int key);
    int ExtractMax();
    int GetMax();
    int heapSort(int arrHeap[], int size);
};
/*
_____________________________________________
|           - heapPtr : int                 |
|           - heapSize : int                |
|           - p : int                       |
|           - l : int                       |
|           - r : int                       |
|           - ShiftUp : void                |
|           - ShiftDown : void              |
|___________________________________________|
|                                           |
|           + BinaryHeap : BinaryHeap       |
|           + insert : void                 |
|           + extractMax : int              |
|           + GetMax : int                  |
|           + heapSort : int                |
|___________________________________________|
*/
#endif // BINARYHEAP_H

