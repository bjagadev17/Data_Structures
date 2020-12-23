#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y);

class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;

    public:
     MinHeap(int capacity);

     void Heapify(int );

     int parent(int i) {return (i-1)/2; }
     int left(int i) { return 2*i+1; }
     int right(int i) { return 2*i+2; }
    
     int extractMin();

     void decreaseKey(int i,int new_val);

     int getMin() { return harr[0]; }

     void deleteKey(int i);

     void insertKey(int k);


};

MinHeap :: MinHeap(int i)
{
    heap_size=0;
    capacity=i;
    harr=new int(capacity);
}

void MinHeap :: insertKey(int k)
{
    if(heap_size==capacity)
    {
        cout<<"Heap is full cannot insert anymore element"<<"\n";
        return;
    }

    heap_size++;
    int i=heap_size-1;
    harr[i]=k;

    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(&harr[parent(i)],&harr[i]);
        i=parent(i);
    }
}

void MinHeap :: decreaseKey(int i,int new_val)
{
    harr[i]=new_val;
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(&harr[parent(i)],&harr[i]);
        i=parent(i);
    }
}
int MinHeap :: extractMin()
{
    if(heap_size<0)
    {
        return -1;
    }
    if(heap_size==1)
    {
        heap_size--;
        return harr[0];
    }
    int m=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    Heapify(0);

    return m;
}

void MinHeap :: deleteKey(int i)
{
    decreaseKey(i,INT_MIN);
    extractMin();
}

void MinHeap :: Heapify(int i)
{
     int l=left(i);
     int r=right(i);
     int s=i;

     if(l<heap_size && harr[l]<harr[s])
     {
         s=l;
     }
     if(r<heap_size && harr[r]<harr[s])
     {
         s=r;
     }

     if(s!=i)
     {
         swap(&harr[i],&harr[s]);
         Heapify(s);
     }
}


void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main() 
{ 
    MinHeap h(11); 
    h.insertKey(3); 
    h.insertKey(2); 
    h.deleteKey(1); 
    h.insertKey(15); 
    h.insertKey(5); 
    h.insertKey(4); 
    h.insertKey(45); 
    cout << h.extractMin() << " "; 
    cout << h.getMin() << " "; 
    h.decreaseKey(2, 1); 
    cout << h.getMin(); 
    return 0; 
} 
