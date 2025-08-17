// heap -> complete binary tree + some heap property
// heap is visualized as trees and implemented as an array

#include<iostream>
using namespace std;

class Heap{
    public:
        // attributes
        int* arr;
        int capacity;
        int index;

        // ctor
        // initialization list
        Heap(int cap):arr(new int[capacity]),capacity(cap),index(0){}

    
        // methods
        // printing heap
        void print(){
            for(int i=0; i<capacity; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        // insert
        // heap me hmesha insertion start hoga from index=1
        // agr aesa ni kiya toh indexing khraab ho jayegi and these 2 conditions would not be satisfied-
        // 1. if parent index = i, then left child index = 2*i => if i=0, then 2*i =0 and both parent and child can not have a same index.
        // 2. similarly for right child = if parent index=i, right child index = 2*i+1
        void insert(int val){
            // heap capacity is full
            if(index==capacity-1){
                cout<<"OverFlow"<<endl;
                return;
            }

            // heap has some space for more elements
            // index variable is used for placing elements in arr
            // while i variable is used for placing them correctly at their right position
            index++;
            arr[index]=val;
            
            // HEAPIFY KRENGE

            // i variable is used for placing them correctly at their right position
            int i = index;
            // as index=1 element has no parent
            // so for i=1 we do not have any parent thus we don't need to check anything
            // and every element in heap is at its right position
            while(i>1){
                int parentIndex = i/2;

                // parent ki value < child ki value se
                // swap krdo dono ko
                // and update the index of current as it would become equal to parent ka index
                if(arr[parentIndex] < arr[i]){
                    swap(arr[parentIndex],arr[i]);
                    i = parentIndex;
                }

                // if already placed at right position
                // such that parent ki value is greater than current node ki value
                // thus we do not need to do anything, just return 
                else
                    return;
            }

        }

        // delete from heap
        // always root node is deleted
        // STEPS - 
        // replace root with last node in heap
        // decrement size
        // Heapify - root node(index = 1) ko left and right child se compare kro -> jo bhi largest element index ho usse store krlo
        // -> swap(curr node with largestIndex element) -> DO IT RECURSIVELY...

        void deleteNode(){
            // no node in heap
            if(index==0){
                cout<<"UnderFlow"<<endl;
                return;
            }

            // replace root with last node
            swap(arr[1],arr[index]);    //arr[1]->root node  arr[index]->last node
            
            // decrement size -> as one node is deleted
            index--;
    
            // heapify
            // as we need to index=1, root node to be reached at its correct position
            // heapify function root node ko (after swapping its value with lastNode) apni sahi position pr pohchahta hai
            heapify(arr,index,1);
        }

        void heapify(int* arr, int n, int currIndex){
            // n is the number of elements in heap -> index
            // currIndex = index of new root node -> it contains the value of the last node in heap
            int i = currIndex;
            int leftChildIndex = 2*i;
            int rightChildIndex = (2*i)+1;

            // assuming the root node contains the largest value itself
            int largestIndex=i;
            // compare left and right child value with curr value
            // and store the largest index

            // checking leftChildIndex is within range and if its value is greater than current largest than update largestIndex
            if(leftChildIndex < n && arr[leftChildIndex] > arr[largestIndex])
            largestIndex = leftChildIndex;
            
            // checking rightChildIndex is within range and if its value is greater than current largest than update largestIndex
            if(rightChildIndex < n && arr[rightChildIndex] > arr[largestIndex])
                largestIndex = rightChildIndex;

            // now we have largest index in the heap
            // swap it with i -> recursively
            // base case is when largestIndex = i, then the condition given below is not executed and the function reaches it ending bracket and this call will be popped from recursive call stack
            if(largestIndex!=i){
                swap(arr[i],arr[largestIndex]);
                // currIndex = largestIndex because we have swapped value at largestIndex with value at i and now largestIndex contains the value which was earlier present at i, now we will recursively compare it unless root is at its correct position
                heapify(arr,n,largestIndex);
            }
        }
};

void heapify(int* arr, int n, int currIndex){
            // n is the number of elements in heap -> index
            // currIndex = index of new root node -> it contains the value of the last node in heap
            int i = currIndex;
            int leftChildIndex = 2*i;
            int rightChildIndex = (2*i)+1;

            // assuming the root node contains the largest value itself
            int largestIndex=i;
            // compare left and right child value with curr value
            // and store the largest index

            // checking leftChildIndex is within range and if its value is greater than current largest than update largestIndex
            if(leftChildIndex < n && arr[leftChildIndex] > arr[largestIndex])
            largestIndex = leftChildIndex;
            
            // checking rightChildIndex is within range and if its value is greater than current largest than update largestIndex
            if(rightChildIndex < n && arr[rightChildIndex] > arr[largestIndex])
                largestIndex = rightChildIndex;

            // now we have largest index in the heap
            // swap it with i -> recursively
            // base case is when largestIndex = i, then the condition given below is not executed and the function reaches it ending bracket and this call will be popped from recursive call stack
            if(largestIndex!=i){
                swap(arr[i],arr[largestIndex]);
                // currIndex = largestIndex because we have swapped value at largestIndex with value at i and now largestIndex contains the value which was earlier present at i, now we will recursively compare it unless root is at its correct position
                heapify(arr,n,largestIndex);
            }
}

void buildHeap(int* arr, int n){
    // n is the number of elements in array
    for(int i=n/2; i>0; i--)
        heapify(arr,n,i);
}

void heapSort(int *arr, int n){
    // arr represents a valid heap
    // as if n=1, this means arr contains only one element and a single element is always sorted
    // thus we swap and heapify until n<=1
    while(n>1){
        // as in max-heap, largest value is at root 
        // and for sorted order we need max value at the last so replace root with last value
        swap(arr[1],arr[n-1]);
        // decrement size
        n--;
        // heapify the rest of heap
        // heapify(array,number of elements in array, index of element to heapify)
        // as index=1 contains the last node value, thus heapifying it.
        heapify(arr,n,1);
    }
}


int main(){
    // Heap hp(5);

    // hp.insert(10); //0 10 0 0 0 
    // hp.print();
    // hp.insert(20); //0 20 10 0 0 
    // hp.print();
    // hp.insert(30); //0 30 10 20 0 
    // hp.print();
    // hp.insert(50); //0 50 30 20 10 
    // hp.print();
    // hp.insert(100); //Overflow
    
    
    // hp.print(); //0 50 30 20 10 

    // cout<<"Converting array to heap"<<endl;
    // int arr[]={0,10,20,30,50};
    // buildHeap(arr,5);   //0 50 20 30 10 
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // hp.deleteNode();
    // // this prints  0 30 10 20 50  because in print function we are printing using  for(int i=0; i<capacity; i++) -> we have decreased the size(index--) but capacity remains same and we have not deleted value  from the memory so 50 also gets printed but this works fine.
    // hp.print(); //0 30 10 20 0

    // hp.deleteNode();
    // // but hp.print prints 0 20 10 30 50
    // hp.print(); //0 20 10 0 0
    
    // hp.deleteNode();
    // // but hp.print prints 0 10 20 30 50
    // hp.print(); //0 10 0 0 0
    
    // hp.deleteNode(); // 0 0 0 0 0
    // hp.deleteNode(); // underflow

    // heap sort
    int arr[] = {0,100,50,40,10,30,20};
    int n=7;
    
    cout<<"Printing max-heap before heap sort"<<endl;
    for(int i=1; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    heapSort(arr,n);

    cout<<"Printing max-heap after heap sort"<<endl;
    for(int i=1; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}