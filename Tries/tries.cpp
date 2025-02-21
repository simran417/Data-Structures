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
};
int main(){
    trie
}