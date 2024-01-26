/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start
class LRUCache {
class Node{
    public:
        int key,val;
        Node* prev, *next;

        Node(int k,int v){
            key=k;
            val=v;
        }
};
public:
    Node *head=new Node(-1,-1);
    Node *tail=new Node(-1,-1);

    int cap;
    unordered_map<int,Node*>mp;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(Node *newnode){
        Node *temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    void deletenode(Node *delnode){
        Node *delprev=delnode->prev;
        Node *delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node *res=mp[key];
            int ans=res->val;
            mp.erase(key);
            deletenode(res);
            addnode(res);
            mp[key]=head->next;
            return res->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            deletenode(mp[key]);
            mp.erase(key);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new Node(key,value));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

