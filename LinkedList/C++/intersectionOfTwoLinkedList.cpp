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