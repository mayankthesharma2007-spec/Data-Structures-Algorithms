/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        ListNode answer(0);
        unordered_set<int>st;
        ListNode* collector=&answer;
        for(int i = 0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        while(temp!=NULL){
            if(st.find(temp->val)==st.end()){
                    collector->next = temp;
                    collector = collector->next;
            }
            temp=temp->next;
        }
        collector->next = NULL;
        return answer.next;
    }
};