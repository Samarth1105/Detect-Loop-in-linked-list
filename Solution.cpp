struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Solution {
  public:
    bool detectLoop(Node* head) {
        if (!head)
        return false;

        Node* fast = head->next;
        Node* slow = head;
    
        while (fast != slow) {
            if (!fast || !fast->next)
                return false;
            fast = fast->next->next;
            slow = slow->next;
        }
    
        return true;
    }
};
