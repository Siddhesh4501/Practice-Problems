

// Que. Given the heads of two singly linked-lists headA and headB, 
// return the node at which the two lists intersect. 
// If the two linked lists have no intersection at all, return null.

// Test case 1
// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
// Output: Intersected at '8'

// Test case 2
// Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
// Output: Intersected at '2'


#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1=headA,*h2=headB;
        bool flag1=true,flag2=true;
        while(h1 && h2){
            if(h1==h2) return h1;
            h1=h1->next;
            h2=h2->next;
            if(!h1 && flag1){
                h1=headB;
                flag1=false;
            }
            if(!h2 && flag2){
                h2=headA;
                flag2=false;
            }
            
        }
        return NULL;
    }
};