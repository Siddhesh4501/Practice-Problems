//********************  author [Harsh Raj] (https://github.com/hraj37378)  *************************************************************

// Here we will try to understand what is LCA of a tree . I will try to make you understand this topic and you can try this question fro the link provided below.

// Link to the problem 
// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

// What is LCA in tree ?
// The Lowest Common Ancestor is the lowest node in the tree that has both n1 and n2 as descendants, where n1 and n2 are the nodes for which we wish to find the LCA. Hence, the LCA of a binary tree with nodes n1 and n2 is the shared ancestor of n1 and n2 that is located farthest from the root.

//       OR

// In simplw words we can say that LCA is the first common ancestor of both the nodes n1 and n2 from bottom of the tree.

//                 Input 1:
//                        n1 = 2 , n2 = 3  
//                                1 
//                               / \ 
//                              2   3
//                 Output: 1
//                 Explanation:
//                 LCA of 2 and 3 is 1, since 1 is first common ancestor of the nodes 2 and 3.

// *********************************************************************************************************

//                 Input 2:
//                       n1 = 3 , n2 = 4
//                                5    
//                               /    
//                              2  
//                             / \  
//                            3   4
//                Output: 2
//                Explanation:
//                LCA of 3 and 4 is 2, since 2 is the first common ancestor of nodes 3 and 4. 

//  *********************************************************************************************************

// *************************** CODE ****************************
// *************************************************************
 

#include<iostream> // for input output operations 
#include<vector>   //for using vectors to store the nodes of tree
using namespace std;
 
// Defining a custom variable called "node" which will store three things
// First -> key i.e, the value stored in the node 
//Second & Third are the links(addresses) to which the node is linked with left side and right side.

struct Node
{
    int key;
    struct Node *left, *right;
};
 
// A function which creates a node when it is called and an integer value is passed.
Node * newNode(int k)
{
    Node *temp = new Node;
    temp->key = k;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
 
// This boolean function finds the path from root node to given root of the tree and stores the
// path in a vector container called vec[] and it returns true if there exists a path otherwise false
bool isPresent(Node *root, vector<int> &vec, int val)
{
    // base case : when tree is empty
    if (root == NULL) return false;
 
    // storing this node in our vector so that we can check later on. The node will be removed afterwards if it is not in path from root to val

    vec.push_back(root->key);
 
    // Check whether the val is same as root's key
    if (root->key == val)
        return true;
 
    // Check whether val is found in left or right sub-tree , if present return true
    if ( (root->left && isPresent(root->left, vec, val)) ||
         (root->right && isPresent(root->right, vec, val)) )
        return true;
 
    // If not present in subtree rooted with root then remove root from vec[] and return false
    vec.pop_back();
    return false;
}
 
// This function returns LCA if node n1, n2 are present in the given binary tree else return -1
int findLCA(Node *root, int n1, int n2)
{
    // to store nodes to n1 and n2 from the root
    vector<int>vec1,vec2;
 
    // We try to find nodes from root to n1 and root to n2 ,if either n1 or n2 is not present then return -1
    if ( !isPresent(root, vec1, n1) || !isPresent(root, vec2, n2))
          return -1;
 
    // We compare the nodes to get the first different value 
    int i;
    for (i = 0; i < vec1.size() && i < vec2.size() ; i++)
        if (vec1[i] != vec2[i])
            break;
    return vec1[i-1];
}
 
// Main function of this program 
int main()
{
//                                  10
//                                /   \
//                              20     30
//                            /   \   /  \
//                           40   50 60   70



    //Creating  the Binary Tree shown in above diagram.
    Node * root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    cout << "LCA(40,50) = " << findLCA(root,40, 50);
    cout << "\nLCA(40,60) = " << findLCA(root,40,60);
    cout << "\nLCA(30,40) = " << findLCA(root,30,40);
    cout << "\nLCA(20,40) = " << findLCA(root,20,40);
    return 0;
}




    