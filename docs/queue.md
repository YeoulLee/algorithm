# Queue
FIFO(First In First Out)

## Linear Queue
[code](https://github.com/YeoulLee/algorithm/blob/master/data_structures/queue/linear_queue.c)
* int Queue[MAX_CAPACITY];
* front = -1
* rear = -1
* enqueue
* dequeue

## Circular Queue
[code](https://github.com/YeoulLee/algorithm/blob/master/data_structures/queue/circular_queue.c)
* int Queue[MAX_CAPACITY];
* front = -1
* rear = -1
* num = 0
  * check if the queue is empty or full
  * ∵ front = rear when the queue is empty or full
* enqueue
  * rear = (rear + 1) % MAX_CAPACITY;
* dequeue
  * front = (front + 1) % MAX_CAPACITY;
