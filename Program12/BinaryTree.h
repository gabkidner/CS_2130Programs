#pragma once
#include <iostream>
using std::endl;
using std::cout;

struct Node{
  int data;
  Node* left = nullptr;
  Node* right = nullptr;
};

class BinaryTree{
  public:
    void insert(int);
    void insert(int, Node*);
    void findPre(Node*);
    void findPost(Node*);
    void findIn(Node*);
    void orders();
  private:
    Node* root = nullptr;
};

void BinaryTree::insert(int number){
  if(root == nullptr){
    root = new Node;
    root->data = number;
  }
  else{
    insert(number, root);
  }
}

void BinaryTree::insert(int number, Node* node){
  if(number > node->data){
    if(node->right == nullptr){
      node->right = new Node;
      node->right->data = number;
      return;
    }
    insert(number, node->right);
  }
  else if(number < node->data){
    if(node->left == nullptr){
      node->left = new Node;
      node->left->data = number;
      return;
    }
    insert(number, node->left);
  }
}

void BinaryTree::findPre(Node* node){
  if(node != nullptr){
    cout << node->data << ' ';
    findPre(node->left);
    findPre(node->right);
 }
}

void BinaryTree::findPost(Node* node){
  if(node == nullptr){
    return;
  }
  findPost(node->left);
  findPost(node->right);
  cout << node->data << ' ';
}

void BinaryTree::findIn(Node* node){
  if(node == nullptr){
    return;
  }
  findIn(node->left);
  cout << node->data << ' ';
  findIn(node->right);
}

void BinaryTree::orders(){
  Node* node = root;
  cout << "\n\nPreorder: ";
  findPre(node);
  cout << "\n\nPostorder: ";
  findPost(node);
  cout << "\n\nInorder: ";
  findIn(node);
  cout << "\n\n";
}
