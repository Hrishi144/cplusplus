#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char tree[20];
int root(char key){
    if(tree[0]!='\0'){
        cout<< "tree already have a root";
    } else{
        tree[0]=key;
        
    }
      return 0;
} int left_child(char key,int parent){
    if(tree[parent]=='\0'){
        cout<< "can't set a child at "<< (parent*2)+1 << " index child";
    } else{
        tree[(parent*2)+1]=key;
        return 0;
    }
} int right_child(char key,int parent){
    if(tree[parent]=='\0'){
        cout<< "can't set a child at"<<(parent*2)+2 <<"index child";
    } else{
        tree[(parent*2)+2]=key;
        return 0;
    }
} int print(){
    cout<< "\n";
    for(int i=0;i<10;i++){
    if(tree[i]!='\0'){
        cout<<tree[i];
    } else {
        cout<<"_";
    }
} return 0;
} int main(){
    root('A');
    left_child('B',0);
    right_child('C',0);
    left_child('D',1);
    right_child('E',1);
    left_child('F',2);
    right_child('G',2);
    print();
    return 0;
}