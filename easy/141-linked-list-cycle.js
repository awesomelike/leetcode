/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
 var hasCycle = function(head) {
  let t = head;
  while (t !== null) {
    t.visited = t.visited || 0;
    t.visited++;
    if (t.visited > 1) {
      return true;
    }
    t = t.next;
  }
  return false;
};