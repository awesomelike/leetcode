/**
 * @param {number} k
 */
 var MyCircularQueue = function(k) {
  this.size = k;
  this.elements = new Array(k);
  this.front = this.rear = -1;
};

/** 
 * @param {number} value
 * @return {boolean}
 */
MyCircularQueue.prototype.enQueue = function(value) {
  if (this.isFull()) {
    return false;
  }

  if (this.front === -1) {
    this.rear = 0;
    this.front = 0;
  } else if (this.rear === this.size - 1) {
    this.rear = 0;
  } else {
    this.rear += 1;
  }
  this.elements[this.rear] = value;
  return true;
};

/**
 * @return {boolean}
 */
MyCircularQueue.prototype.deQueue = function() {
  if (this.isEmpty()) {
    return false;
  }
  
  delete this.elements[this.front];
  if (this.front === this.rear) {
    this.front = this.rear = -1;
  } else if (this.front === this.size - 1) {
    this.front = 0;
  } else {
    this.front++;
  }
  return true;
};

/**
 * @return {number}
 */
MyCircularQueue.prototype.Front = function() {
  return this.front === -1 ? -1 : this.elements[this.front];
};

/**
 * @return {number}
 */
MyCircularQueue.prototype.Rear = function() {
  return this.rear === -1 ? -1 : this.elements[this.rear];
};

/**
 * @return {boolean}
 */
MyCircularQueue.prototype.isEmpty = function() {
  return this.front === -1 && this.rear === -1;
};

/**
 * @return {boolean}
 */
MyCircularQueue.prototype.isFull = function() {
  return (this.rear + 1) % this.size === this.front;
};

/** 
 * Your MyCircularQueue object will be instantiated and called as such:
 * var obj = new MyCircularQueue(k)
 * var param_1 = obj.enQueue(value)
 * var param_2 = obj.deQueue()
 * var param_3 = obj.Front()
 * var param_4 = obj.Rear()
 * var param_5 = obj.isEmpty()
 * var param_6 = obj.isFull()
 */