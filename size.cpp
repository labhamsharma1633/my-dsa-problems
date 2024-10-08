#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
void display(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}
int size(Node* root){
    if(root==nullptr) return 0;
    return root->val+size(root->left)+size(root->right);
    
}
int sum(Node* root){
    if(root==nullptr) return 0;
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int ans=ans+root->val+leftsum+rightsum;
    return ans;
    
}
int maxinTree(Node* root){
    if(root==nullptr) return INT_MIN;
    int maxleft=maxinTree(root->left);
    int maxright=maxinTree(root->right);
    return max(root->val,max(maxleft,maxright));
}
int mininTree(Node* root){
    if(root==nullptr) return INT_MAX;
    int minleft=mininTree(root->left);
    int minright=mininTree(root->right);
    return min(root->val,min(minleft,minright));
}
int productInTree(Node* root){
    if(root==nullptr) return 1;
    int prodleft=productInTree(root->left);
    int prodright=productInTree(root->right);
    int ans=root->val*prodleft*prodright;
    return ans;
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
    
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c= new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<size(a)<<endl;
    cout<<levels(a)<<endl;
    cout<<mininTree(a)<<endl;
    cout<<productInTree(a);

}