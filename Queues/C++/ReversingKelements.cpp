//********************  author [Harsh Raj] (https://github.com/hraj37378)  *************************************************************

// Here we will try to understand the problem with best approach .

// Problem:- Given an integer k and a queue of integers, The task is to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order.

// What is a QUEUE ?
// A queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.
//               OR
// We define a queue to be a list in which all additions to the list are made at one end, and all deletions from the list are made at the other end.  The element which is first pushed into the order, the operation is first performed on that.

// The operations allowed on queue are : 
// 1.enqueue() : Adds an item to rear of queue. In C++ STL queue, this function is called push().
// 2.dequeue() : Removes an item from front of queue. In C++ STL queue, this function is called pop().
// 3.isEmpty() : Checks if a queue is empty. In C++ STL queue, this function is called empty().
// 4.size() : Returns number of elements in queue.
// 5.front() : Finds front item.


//                                    INPUT 1: 1 2 3 4 5
//                                            k=3

//                                    OUTPUT : 3 2 1 4 5



// *********************************  CODE  ************************************************************************

#include<bits/stdc++.h>
using namespace std;

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int>&q, int k) {

    queue<int> res;

    stack<int> st;

    //first pushing first K elements of queue to stack

    for(int i=1;i<=k;i++){

        st.push(q.front());

        q.pop();

    }

    //transferring elements from stack to new queue

    for(int i=1;i<=k;i++){

        res.push(st.top());

        st.pop();

    }

    //transferring remaining elements of old queue to new queue

    while(q.size()!=0)
    {

        res.push(q.front());

        q.pop();

    }
    return res;
}
int main()
{
    int n,k;
    cin >> n >> k;           //input size of queue and size of window to be reversed
    queue<int> q;            //declaring a queue of which will store integer data type
    while(n > 0)
    {
        int a;
        cin>> a;             // inserting values to queue
        q.push(a);
        n--;
    }
    queue<int>ans=modifyQueue(q,k);  // calling the function 
    while(!ans.empty())
    {
        int a=ans.front();
        ans.pop();
        cout<< a <<" " ;              // Printing the values 
    }
    cout<< endl;
    return 0;
}



    


