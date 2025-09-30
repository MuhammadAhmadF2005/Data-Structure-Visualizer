#include <bits/stdc++.h>
using namespace std;

//---------------------------------------------------//
//------------------- ARRAY -------------------------//
//---------------------------------------------------//
void demoArray() {
    cout << "\n=== ARRAY DEMO ===\n";
    vector<int> arr = {10, 20, 30, 40};

    // Traverse
    cout << "Array elements: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    // Access element
    cout << "Element at index 2: " << arr[2] << "\n";

    // Insert element (at end)
    arr.push_back(50);
    cout << "After inserting 50: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    // Delete element (erase at index 1)
    arr.erase(arr.begin() + 1);
    cout << "After deleting index 1: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

//---------------------------------------------------//
//------------------- STACK -------------------------//
//---------------------------------------------------//
void demoStack() {
    cout << "\n=== STACK DEMO ===\n";
    stack<int> st;

    // Push
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << "\n";

    // Pop
    st.pop();
    cout << "After pop, new top: " << st.top() << "\n";
}

//---------------------------------------------------//
//------------------- QUEUE -------------------------//
//---------------------------------------------------//
void demoQueue() {
    cout << "\n=== QUEUE DEMO ===\n";
    queue<int> q;

    // Enqueue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << "\n";
    cout << "Rear element: " << q.back() << "\n";

    // Dequeue
    q.pop();
    cout << "After dequeue, new front: " << q.front() << "\n";
}

//---------------------------------------------------//
//------------------- LINKED LIST -------------------//
//---------------------------------------------------//
struct Node {
    int data;
    Node* next;
    Node(int v) { data = v; next = nullptr; }
};

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void demoLinkedList() {
    cout << "\n=== LINKED LIST DEMO ===\n";
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Initial list: ";
    printList(head);

    // Insert at head
    Node* newHead = new Node(5);
    newHead->next = head;
    head = newHead;
    cout << "After inserting 5 at head: ";
    printList(head);

    // Delete second node
    Node* temp = head->next;
    head->next = temp->next;
    delete temp;
    cout << "After deleting second node: ";
    printList(head);
}

//---------------------------------------------------//
//------------------- BINARY TREE -------------------//
//---------------------------------------------------//
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) { data = v; left = right = nullptr; }
};

void preorder(TreeNode* node) {
    if (!node) return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(TreeNode* node) {
    if (!node) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void postorder(TreeNode* node) {
    if (!node) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

void demoTree() {
    cout << "\n=== TREE DEMO ===\n";
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Preorder: ";
    preorder(root);
    cout << "\n";

    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    cout << "Postorder: ";
    postorder(root);
    cout << "\n";
}

//---------------------------------------------------//
//------------------- MAIN --------------------------//
//---------------------------------------------------//
int main() {
    demoArray();
    demoStack();
    demoQueue();
    demoLinkedList();
    demoTree();
    return 0;
}
