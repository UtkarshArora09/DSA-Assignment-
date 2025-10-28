class MyLinkedList {
public:
    class node{
        public:
        int val;
        node*next;
        node(int v){
            val=v;
            next=nullptr;
        }
    };
    node*head;
    int size;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size)return -1;
        node*temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        node*temp=new node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    
    void addAtTail(int val) {
        node*newNode=new node(val);
        node*temp=head;
        if(!head){
            head=newNode;
        }
        else{
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        size++; 
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)return;
        if(index<=0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        node*newNode=new node(val);
        node*temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size)return;
        if(index==0){
            node*temp=head;
            head=head->next;
            delete temp;
        }
        else{
            node*temp=head;
            for(int i=0;i<index-1;i++){
                temp=temp->next;
            }
            node*curr=temp->next;
            temp->next=temp->next->next;
            delete curr;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
