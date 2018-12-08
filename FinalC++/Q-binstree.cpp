#include <iostream>
#include <memory>
using namespace std;

class BST {
public:
    BST() = default;

    void insert(int new_elem) {
        // TODO: implement insert
    
        
        //1. handle base case
        if(m_root == nullptr) {
            m_root = make_shared<Node>();
            m_root->elem = new_elem;
        } else if(m_root->left == nullptr) {
            m_root->left = make_shared<Node>();
            m_root->left->elem = new_elem;
        } else if(m_root->right == nullptr) {
            m_root->right = make_shared<Node>();
            m_root->right->elem = new_elem;
        } else {
            //2. handle left vs right stuff
            while (m_root->elem != 0) {
                if(m_root->left->elem < new_elem) {
                    m_root->left = make_shared<Node>();
                    m_root.get[(m_root->left)];
                } else {
                    m_root->right = make_shared<Node>();
                    m_root.get(m_root->right);
                }
            }
        }
        
        
    

    }

    void print() const {
        cout << "tree:";
        if (m_root) print_helper(m_root);
        cout << endl;
    }

private:
    BST(const BST &) = delete;
    BST & operator=(const BST &) = delete;

    struct Node {
        int elem;
        shared_ptr<Node> left;
        shared_ptr<Node> right;
    };

    shared_ptr<Node> m_root;

    void print_helper(shared_ptr<Node> n) const {
        if (n->left) print_helper(n->left);
        cout << " " << n->elem;
        if (n->right) print_helper(n->right);
    }
};





/* OUTPUT
tree: 1
tree: 1 2
tree: 1 2 3
tree: 1 2 3 4 5 6 7
tree: 1 2 3 4
*/
int main() {
    {
        BST b;
        b.insert(1);
        b.print();
    }
    {
        BST b;
        b.insert(2);
        b.insert(1);
        b.print();
    }
    {
        BST b;
        b.insert(2);
        b.insert(1);
        b.insert(3);
        b.print();
    }
    {
        BST b;
        b.insert(4);
        b.insert(2);
        b.insert(1);
        b.insert(3);
        b.insert(6);
        b.insert(7);
        b.insert(5);
        b.print();
    }
//    {
//        BST b;
//        b.insert(1);
//        b.insert(2);
//        b.insert(3);
//        b.insert(4);
//        b.insert(4);
//        b.insert(4);
//        b.insert(4);
//        b.print();
//    }
}

