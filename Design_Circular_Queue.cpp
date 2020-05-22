class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        cur_size = 0;
        size = k;
        qarr = new int[k];
        head = -1;
        tail = -1;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()){ 
            head = 0;
            tail = 0;
            qarr[0] = value;
            cur_size++;
        }else{
            
            tail = (tail + 1) % size;
            qarr[tail] = value;
            cur_size++;
        }
        // cout << tail << " " << qarr[tail] << endl;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (isEmpty()) return false;
        qarr[head] = 0;
        head = (head + 1) % size;
        cur_size--;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (isEmpty()) return -1;
        return qarr[head];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (isEmpty()) return -1;
        return qarr[tail];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return cur_size == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return size == cur_size;
    }

private:
    int cur_size, size;
    int *qarr, head, tail;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */