// { Driver Code Starts
//Problem link
// https://practice.geeksforgeeks.org/problems/check-for-bst/1/?company[]=Amazon&company[]=Microsoft&company[]=Adobe&company[]=Samsung&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Google&company[]=Flipkart&company[]=D-E-Shaw&company[]=Facebook&company[]=24*7%20Innovation%20Labs&company[]=Nutanix&company[]=Apple&company[]=Amazon&company[]=Microsoft&company[]=Adobe&company[]=Samsung&company[]=Paytm&company[]=Goldman%20Sachs&company[]=Google&company[]=Flipkart&company[]=D-E-Shaw&company[]=Facebook&company[]=24*7%20Innovation%20Labs&company[]=Nutanix&company[]=Apple&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=company[]Amazoncompany[]Microsoftcompany[]Adobecompany[]Samsungcompany[]Paytmcompany[]Goldman%20Sachscompany[]Googlecompany[]Flipkartcompany[]D-E-Shawcompany[]Facebookcompany[]24*7%20Innovation%20Labscompany[]Nutanixcompany[]AppleproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncompany[]Microsoftcompany[]Adobecompany[]Samsungcompany[]Paytmcompany[]Goldman%20Sachscompany[]Googlecompany[]Flipkartcompany[]D-E-Shawcompany[]Facebookcompany[]24*7%20Innovation%20Labscompany[]Nutanixcompany[]Apple

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



bool isBST(struct Node* node);
int isBSTUtil(struct Node* node, int min, int max);

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

void inorder(Node *root, vector<int> &v)
{
    if(root==NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main() {
 
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
    string s; 
    getline(cin, s);
    Node* root = buildTree(s);
    cout << isBST(root) << endl;
   }
   return 0;
}



 // } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true if the given tree is a BST, else return false
bool isBST(Node* node, int minKey, int maxKey)
{
    // base case
    if (node == NULL)
        return true;
 
    // if node's value fall outside valid range
    if (node->data <= minKey || node->data >= maxKey)
        return false;
 
    // recursively check left and right subtrees with updated range
    return isBST(node->left, minKey, node->data) &&
            isBST(node->right, node->data, maxKey);
}

bool isBST(Node* root) {
    // Your code here
    return isBST(root, INT_MIN, INT_MAX);
}




// { Driver Code Starts
  // } Driver Code Ends