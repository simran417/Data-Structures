#include<iostream>
using namespace std;

class trieNode{
    public:
    char data;
    trieNode* children[26];
    bool isTerminal;

    trieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class trie{
    public:
    trieNode* root;
    // constructor:
    trie(){
        root=new trieNode('/0');
    }

    void insertutil(trieNode* root, string word){
        // base case:
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        // assumption: word will be in caps:
        int index=word[0]-'A';
        trieNode* child;
        // present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            // absent:
            child=new trieNode(word[0]);
            root->children[index]=child;
        }

        // recursion:
        insertutil(child,word.substr(1));
    }
    void insertWord(string word){
        insertutil(root,word);
    }

// search:
    bool searchutil(trieNode* root,string word){
        // base case:
        if(word.length()==0){
            return root->isTerminal;
        }
        int idx=word[0]-'A';
        trieNode* child;

        // present
        if(root->children[idx]!=NULL){
            child=root->children[idx];
        }
        else{
            // absent
            return false;
        }
        // recursion:
        return searchutil(child,word.substr(1));
    }

    bool search(string word){
        return searchutil(root,word);
    }
};
int main(){
    trie * t=new trie();
    t->insertWord("ABCD");
    t->insertWord("ARM");
    t->insertWord("TIME");
    cout<<"word is present or not: "<<t->search("TIM");
}