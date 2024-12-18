#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Traverse the list with slow and fast pointers
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // Move slow by 1 step
            fast = fast->next->next;     // Move fast by 2 steps
            
            if (slow == fast) {
                return true;  // There is a cycle
            }
        }
        
        return false;  // No cycle
    }
};

int main() {
    // Example usage
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;  // Creates a cycle

    Solution solution;
    bool result = solution.hasCycle(head);
    cout << (result ? "Cycle detected" : "No cycle") << endl;

    return 0;
}
