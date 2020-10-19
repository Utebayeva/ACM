class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *hA = headA;
        ListNode *hB = headB;
        while (hA && hB) {
            if (hA == hB){
                return hA;
            }
            hA = hA->next;
            hB = hB->next;
            if (!hA && !hB){
                return NULL;
            }
            if (!hA){
                hA = headB;
            }
            if (!hB){
                hB = headA;
            }
        }
        
        return NULL;
    }
};
