// Tristan Arana Charlebois 6680672
// ta18lj

#include "PriorityQueue.h"
#include <iostream>

using namespace std;

int main(){

    PriorityQueue<string> q; // class instance
    PRecord *head = NULL; // initial record
    int select; // choice for user
    int rank; // priority in queue
    string entry; // data for record

    while (true){ // loop until quit

        cerr<<"Select your option:\n 1. Add record to queue\n 2. Remove record to queue and display\n 3. Check if priority queue is empty\n 4. Peek at next record\n 5. Count number of records\n 6. Quit."<<endl;
        cin>>select;

        if (select == 1){ // add

            cerr<<"Enter record priority"<<endl;
            cin>>rank;
            cerr<<"Enter record data"<<endl;
            cin>>entry;
            q.enqueue(rank, entry, head);

        } else if (select == 2){ // remove

            cout<<q.dequeue(head)<<endl;

        } else if (select == 3){ // check if empty

            cout<<q.isEmpty(head)<<endl;

        } else if (select == 4){ // peek at next

            cout<<q.peek(head)<<endl;

        } else if (select == 5){ // count

            cout<<q.count(head)<<endl;
        
        } else if (select == 6){ // quit

            return 0;

        }

    }

}