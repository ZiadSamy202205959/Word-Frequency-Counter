#include <iostream>
#include <cctype>
#include "RedBlackTree.h"
#include <string>

using namespace std;

void RedBlackTree::leftRotate(NodePointer x) {
    NodePointer y = x->right;
    x->right = y->left;
    if (y->left != nullptr) {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
        root = y;
    }
    else if (x == x->parent->left) {
        x->parent->left = y;
    }
    else {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}


void RedBlackTree::rightRotate(NodePointer x) {
    NodePointer y = x->left;
    x->left = y->right;
    if (y->right != nullptr) {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
        root = y;
    }
    else if (x == x->parent->left) {
        x->parent->left = y;
    }
    else {
        x->parent->right = y;
    }
    y->right = x;
    x->parent = y;
}


void RedBlackTree::insertFixup(NodePointer z) {
    while (z->parent != nullptr && z->parent->color == RED) {
        if (z->parent == z->parent->parent->left) {
            NodePointer y = z->parent->parent->right;
            if (y != nullptr && y->color == RED) {
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;
                z = z->parent->parent;
            }
            else {
                if (z == z->parent->right) {
                    z = z->parent;
                    leftRotate(z);
                }
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                rightRotate(z->parent->parent);
            }
        }
        else {
            NodePointer y = z->parent->parent->left;
            if (y != nullptr && y->color == RED) {
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;
                z = z->parent->parent;
            }
            else {
                if (z == z->parent->left) {
                    z = z->parent;
                    rightRotate(z);
                }
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                leftRotate(z->parent->parent);
            }
        }
    }
    root->color = BLACK;
}


void RedBlackTree::deleteFixup(NodePointer x) {
    while (x != root && (x == nullptr || x->color == BLACK)) {
        if (x == x->parent->left) {
            NodePointer w = x->parent->right;
            if (w->color == RED) {
                w->color = BLACK;
                x->parent->color = RED;
                leftRotate(x->parent);
                w = x->parent->right;
            }
            if ((w->left == nullptr || w->left->color == BLACK) &&
                (w->right == nullptr || w->right->color == BLACK)) {
                w->color = RED;
                x = x->parent;
            }
            else {
                if (w->right == nullptr || w->right->color == BLACK) {
                    if (w->left != nullptr) {
                        w->left->color = BLACK;
                    }
                    w->color = RED;
                    rightRotate(w);
                    w = x->parent->right;
                }
                w->color = x->parent->color;
                x->parent->color = BLACK;
                if (w->right != nullptr) {
                    w->right->color = BLACK;
                }
                leftRotate(x->parent);
                x = root;
            }
        }
        else {
            NodePointer w = x->parent->left;
            if (w->color == RED) {
                w->color = BLACK;
                x->parent->color = RED;
                rightRotate(x->parent);
                w = x->parent->left;
            }
            if ((w->right == nullptr || w->right->color == BLACK) &&
                (w->left == nullptr || w->left->color == BLACK)) {
                w->color = RED;
                x = x->parent;
            }
            else {
                if (w->left == nullptr || w->left->color == BLACK) {
                    if (w->right != nullptr) {
                        w->right->color = BLACK;
                    }
                    w->color = RED;
                    leftRotate(w);
                    w = x->parent->left;
                }
                w->color = x->parent->color;
                x->parent->color = BLACK;
                if (w->left != nullptr) {
                    w->left->color = BLACK;
                }
                rightRotate(x->parent);
                x = root;
            }
        }
    }
    if (x != nullptr) {
        x->color = BLACK;
    }
}


void RedBlackTree::deleteAux(NodePointer x) {

    NodePointer parent = x->parent;

    if (x->left != nullptr && x->right != nullptr) {
        NodePointer xSucc = x->right;
        parent = x;
        while (xSucc->left != nullptr) {
            parent = xSucc;
            xSucc = xSucc->left;
        }

        x->data = xSucc->data;
        x = xSucc;
    }

    NodePointer subtree = (x->left != nullptr) ? x->left : x->right;
    if (subtree != nullptr) {
        if (parent == nullptr)
            root = subtree;
        else if (parent->left == x)
            parent->left = subtree;
        else
            parent->right = subtree;

        subtree->parent = parent;
        deleteFixup(subtree);
    }
    else if (parent == nullptr) {
        root = nullptr;
    }
    else {
        if (x->color == BLACK)
            deleteFixup(x);

        if (parent->left == x)
            parent->left = nullptr;
        else
            parent->right = nullptr;

    }
    delete x;
}


void RedBlackTree::insertAux(string data) {
    for (int i = 0; i < data.length(); i++) {
        data[i] = (char)tolower(data[i]);
    }
    NodePointer z = new Node(data);
    NodePointer y = nullptr;
    NodePointer x = root;
    while (x != nullptr) {
        y = x;
        if (z->data < x->data) {
            x = x->left;
        }
        else if (z->data > x->data) {
            x = x->right;
        }
        else {
            x->frequency++;
            delete z;
            return;
        }
    }
    z->parent = y;
    if (y == nullptr) {
        root = z;
        root->color = BLACK;
    }
    else if (z->data < y->data) {
        y->left = z;
    }
    else {
        y->right = z;
    }
    insertFixup(z);
}


RedBlackTree::NodePointer RedBlackTree::searchAux(NodePointer x, string& data) const {
    for (int i = 0; i < data.length(); i++) {
        data[i] = (char)tolower(data[i]);
    }
    while (x != nullptr && data != x->data) {
        if (data < x->data) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }
    return x;
}



string RedBlackTree::inorderTraversal(NodePointer x) {
    string result;
    generateInorderString(root, result);
    return result;
}

void RedBlackTree::generateInorderString(const NodePointer x, string& result) {
    if (x != nullptr) {
        generateInorderString(x->left, result);

        result += x->data + "(" + to_string(x->frequency) + ")   \t";
        static int counter = 0;
        if (++counter  == 8) {
            result += "\n";
            counter = 0;
        }
        generateInorderString(x->right, result);
    }
}


bool RedBlackTree::search(string& data) {
  
    return searchAux(root, data) != NULL;
}

bool RedBlackTree::empty() const
{
    return root == NULL;
}


void RedBlackTree::insert(string data) {
    insertAux(data);
}


void RedBlackTree::erase(string data) {
    NodePointer z = searchAux(root, data);
    if (z != nullptr) {
        deleteAux(z);
    }
}


void RedBlackTree::display() {
    cout << "Items:\n";
    inorderTraversal(root);
}


void RedBlackTree::graph(ostream& out) const {
    graphAux(out, 0, root);
}


void RedBlackTree::graphAux(ostream& out, int indent, RedBlackTree::NodePointer subtreeRoot) const {
    if (subtreeRoot != NULL) {
        graphAux(out, indent + 6, subtreeRoot->right);
        cout << setw(indent) << subtreeRoot->data << endl;
        graphAux(out, indent + 6, subtreeRoot->left);
    }
}

ostream& operator<<(ostream& out, const RedBlackTree& rbt) {
    rbt.graph(out);
    return out;
}



void RedBlackTree::findMaxFrequency(const NodePointer x, int& maxFrequency) {
    if (x != nullptr) {
        findMaxFrequency(x->left, maxFrequency);

        if (x->frequency > maxFrequency) {
            maxFrequency = x->frequency;
        }

        findMaxFrequency(x->right, maxFrequency);
    }
}



int RedBlackTree::printCertainWordFreq(string word)
{
    NodePointer x = searchAux(root, word);
    if (x) {
        return x->frequency;
    }
    else {
        return 0; 
    }
}

void RedBlackTree::insertText(const string& inputString) {
    string word;

    for (int i = 0; i < inputString.length(); i++) {
        char ch = inputString[i];
        if (isalnum(ch) || ch == '\'') {
            word += ch;
        }
        else if (!word.empty()) {
            insert(word);
            word.clear();
        }
    }

    if (!word.empty()) {
        insert(word);
    }
}



int RedBlackTree::getTotalFrequency() {
    int totalFrequency = 0;
    getTotalFrequencyAux(root, totalFrequency);
    return totalFrequency;
}


void RedBlackTree::getTotalFrequencyAux(const RedBlackTree::NodePointer x, int& totalFrequency) {
    if (x != nullptr) {
        getTotalFrequencyAux(x->left, totalFrequency);

        totalFrequency += x->frequency;

        getTotalFrequencyAux(x->right, totalFrequency);
    }
}


string RedBlackTree::findMostCommonWords() {
    int maxFrequency = 0;
    findMaxFrequency(root, maxFrequency);
    string z;
    if (maxFrequency > 0) {
        printWordsWithFrequency(root, maxFrequency, z);
    }
    return z;
}

void RedBlackTree::printWordsWithFrequency(const NodePointer x, const int targetFrequency, string& z) {
    if (x != nullptr) {
        printWordsWithFrequency(x->left, targetFrequency, z);

        if (x->frequency == targetFrequency) {
            z += x->data + "      - Frequency:    " + to_string(x->frequency) + "\n";
        }

        printWordsWithFrequency(x->right, targetFrequency, z);
    }
}


