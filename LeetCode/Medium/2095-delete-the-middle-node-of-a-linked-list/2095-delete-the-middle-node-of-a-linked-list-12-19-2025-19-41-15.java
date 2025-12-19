/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
     if(head == null || head.next == null) return null;
     ListNode a = head, b = head.next.next;
     while(b != null && b.next != null) {
        a = a.next;
        b = b.next.next;
     }   
     a.next = a.next.next;
     return head;
    }
}