#include<bits/stdc++.h>

using namespace std;

template<typename v>
class mapnode{
    public:
    string key;
    v value;
    mapnode*next;

    mapnode(string k,v value){
        this.key = k;
        this.value = value;
        next = NULL;

    }

};

template<typename v>
class ourmap{
    public:
    mapnode<v>** bucket;
    int size;
    int numbucket;

    ourmap(){
        size = 0;
        numbucket = 5;
        bucket =new mapnode<v>*[numbucket];
        for(int i=0;i<numbucket;i++){
            bucket[i] = NULL;
        }
    }
    ~ourmap(){
        for(int i=0;i<numbucket;i++){
            delete bucket[i];
        }

        delete [] bucket;
    }

    int hashcode(string key){
        int index=0 ;
        int product = 1;
        for(int i = key.size()-1;i>=0;i--){
            index = index + key[i] * product;
            product*=37;
            index = index%numbucket;
            product = product%numbucket;
        }

       return index%numbucket
    }

    void insert(string key, v value){
        int bucketindex = hashcode(key);
        mapnode<v>* head = bucket[bucketindex];

        while(head!=NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            head= head->next;
        }
        head = bucket[bucketindex];
        mapnode<v>* newnode = new mapnode<v>(key,value);
        newnode->next = head;
        bucket[bucketindex] = newnode;
        size++;

    }
    v delete(string key){
        int bucketindex = hashcode(key);
        mapnode<v>*head = bucket[bucketindex];
        mapnode<v>*prev = NULL;

        while(head!=NULL){
            if(head->key == key){
                if(prev == NULL){
                bucket[bucketindex] = head->next;

                }else{
                    prev->next = head->next;
                }
                v ans = head->value;
                head->next = NULL;
                delete head;
                return ans;
            }
            prev = head;
            head = head->next;
        }  
     return 0;
    }

    int getsize(){
        return numbucket;
    }

    v getvalue(string key){
        int bucketindex = hashcode(key);
        mapnode<v>*head = bucket[bucketindex];
        while(head!=NULL){
            if(head->key == key){
                return head->value;
            }
            head= head->next;
        }
        return 0;

    }



};