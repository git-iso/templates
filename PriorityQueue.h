#include <string>

using namespace std;

typedef string T;

struct PRecord{ // structure for record

    long priority; // placement in priority queue
    T data; // data in record
    PRecord *next; // next PRecord in queue


};

template <typename T> // generic type

class PriorityQueue{ // class for priority queue

public:

T enqueue(const long &rank, const T &entry, PRecord* &head){ // add record

    PRecord *n = new PRecord; // new record
    PRecord *temp = head; // traversal
    PRecord *temp2 = NULL; // traversal

    if (head == NULL || (head->priority > rank)){ // add record to front

        n->priority = rank;
		n->data = entry;
        n->next = head;
		head = n;
		return n->data;

    } else { //traverse until higher record or end of queue

        while (temp != NULL && (rank >= temp->priority)){

            temp2 = temp;
            temp = temp->next;

        } // add record
   
        n->priority = rank;
        n->data = entry;
        n->next = temp;
        temp2->next = n;
        return n->data;

    }

}

T dequeue(PRecord* &head){ // remove head from priority queue

   PRecord *n = head;
    
    if (head != NULL){ // record at front of queue

        head = head->next; // make next record head and delete
        delete n;

        if (head != NULL){ // display next element

            return "Next element is " + head->data;

        } else {

            return "Queue is empty";

        }
        

    } else {

        return "Queue is empty";

    }

 }

bool isEmpty(PRecord* &head){ // check if priority queue is empty

    PRecord *n = head;

    if (n != NULL){ // check if empty

        return false;

    } else {

        return true;

    }

}

T peek(PRecord* &head){ // peek at next record at front of priority queue

    PRecord *n = head;
    
    if (n != NULL){ // display next element

        return "Next record is " + n->data;

    } else {

        return "No next record";

    }

}

int count(PRecord* &head){ // count number of records in queue

    PRecord *n = head;
    int num = 0;

    while (n != NULL){

        num++;
        n = n->next;

    }

    return num;

}

};