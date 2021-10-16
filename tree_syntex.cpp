#include<bits/stdc++.h>
using namespace std;

template <typename t >
class treename {

    public:
    t data;
    vector< treename<t> *> children;

    treename( t data){
        this->data = data;
    }


};

    void printTree(treename<int> * root){

        if(root==NULL) return;

        cout<<root->data<<" : ";
        for(int i=0; i<root->children.size() ; i++){
            cout<<root->children[i]->data<<",";
        }
    cout<<endl;
        for(int i=0; i<root->children.size() ; i++){
            printTree(root->children[i]);
        }
    }

int main(){

    treename<int> * root = new treename<int>(1);
    treename<int> * child11 = new treename<int>(11);
    treename<int> * child2 = new treename<int>(2);
    treename<int> * child3 = new treename<int>(3);
    treename<int> * child4 = new treename<int>(4);
    treename<int> * child5 = new treename<int>(5);
    treename<int> * child6 = new treename<int>(6);
    treename<int> * child7 = new treename<int>(7);
    treename<int> * child8 = new treename<int>(8);
    treename<int> * child9 = new treename<int>(9);
    treename<int> * child10 = new treename<int>(10);
    treename<int> * child12 = new treename<int>(12);

    root->children.push_back(child2);
    root->children.push_back(child5);
    root->children.push_back(child7);

    child2->children.push_back(child3);
    child2->children.push_back(child4);

    child5->children.push_back(child6);

    child7->children.push_back(child8);
    child7->children.push_back(child9);

    child9->children.push_back(child10);
    child9->children.push_back(child11);

    child11->children.push_back(child12);
    
    printTree(root);

    return 0;

}
