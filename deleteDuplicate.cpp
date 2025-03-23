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
        ListNode* deleteDuplicates(ListNode* head) {
            if(head==NULL) return head;
            map<int,int> mp;
            vector<int> v;
            ListNode* temp = head;
            while(temp!=NULL)
            {
                mp[temp->val]++;
                if(mp[temp->val]==1) v.push_back(temp->val);
            temp=temp->next;
            }
           
           free(temp);
           temp = new ListNode(v[0]);
           head = temp;
           ListNode* fast = temp;
           head = fast;
            for(int i=1; i<v.size(); i++)
            {
                temp = new ListNode(v[i]);
                fast->next = temp ;
                fast = fast->next;
            
            }
            return head;
        }
    };