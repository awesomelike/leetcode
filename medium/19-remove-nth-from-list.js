/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
 var removeNthFromEnd = function(head, n) {
  let temp = head;
  let size = 0;
  while (temp !== null) {
    temp = temp.next;
    size++;
  }
  temp = head;
  let i = 0;
  while (i <= size - n - 2) {
    temp = temp.next;
    i++;
  }
  if (size > 1) {
    if (size - n === 0) {
      head = head.next;
    } else {
      temp.next = temp.next ? temp.next.next : null;      
    }
  } else {
    head = null;
  }
  return head;
};