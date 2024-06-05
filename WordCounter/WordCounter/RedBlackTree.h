#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

enum Color { RED, BLACK };


class RedBlackTree {
private:
    class Node {
    public:
        string data;
        int frequency;
        Color color;
        Node* left;
        Node* right;
        Node* parent;

        Node(const string& d) : data(d), frequency(1), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
    };
    typedef Node* NodePointer;
    Node* root;

    void leftRotate(NodePointer x);
    void rightRotate(NodePointer x);
    void insertFixup(NodePointer z);
    void deleteFixup(NodePointer x);
    void deleteAux(NodePointer x);
    void insertAux(string data);
    NodePointer searchAux(NodePointer x, string& data) const;
    void graphAux(ostream& out, int indent,
        RedBlackTree::NodePointer subtreeRoot) const;
    void findMaxFrequency(const NodePointer x, int& maxFrequency);
    

public:
    RedBlackTree() : root(nullptr) {}
    bool search(string& data);
    bool empty() const;
    void insert(string data);
    void erase(string data);
    void display();
    void graph(ostream& out) const;
    
    int printCertainWordFreq(string word);
    void insertText(const string& inputString);
    NodePointer getRoot() const {
        return root;
    }
    string inorderTraversal(NodePointer x);
    void generateInorderString(const NodePointer x, string& result);
    int getTotalFrequency();
    void getTotalFrequencyAux(const RedBlackTree::NodePointer x, int& totalFrequency);
    string findMostCommonWords();
    void printWordsWithFrequency(const NodePointer x, const int targetFrequency, string& z);

};

ostream& operator<<(ostream& out, const RedBlackTree& rbt);

