class LRUCache {
public:
    class Node{
    public:
        int k,v;
        Node* prev;
        Node* next;

        Node(int key ,int val){
          k=key;
          v=val;
          prev=next=NULL;
        }
    };
    int capacity;
    map<int,Node*>m;
    Node* head;
    Node* tail;

   
    LRUCache(int capacity) {
        this->capacity = capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;

    }

    void addNode(int k,int v){
        Node* newNode= new Node(k,v);
        m[k]=newNode;
        Node* curStart=head->next;
        head->next=newNode;
        newNode->prev=head;
        newNode->next=curStart;
        curStart->prev=newNode;
    }

    void deleteNode(Node* oldNode){
        Node* oldPrev=oldNode->prev;
        Node* oldNext = oldNode->next;
        oldPrev->next =oldNext;
        oldNext->prev=oldPrev;
        m.erase(oldNode->k);
        delete oldNode;
    }
    
    int get(int key) {

        if(m.find(key)!=m.end()){
            int val = m[key]->v;
            deleteNode(m[key]);
            addNode(key,val);
            return val;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
       
        if(m.find(key)!=m.end()){
            Node* oldNode = m[key];
            deleteNode(oldNode);
        }
        if(m.size()==this->capacity){
            deleteNode(tail->prev);
        }
        addNode(key,value);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */