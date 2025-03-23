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
         
            ListNode* temp = head;
            while(temp!=NULL)
            {
                mp[temp->val]++;
                
            temp=temp->next;
            }

           
           free(temp);
           temp =NULL;
           ListNode* fast = temp;
           head = fast;
            for(auto it: mp)
            {
                
               if(it.second==1)
               {
                 temp = new ListNode(it.first);
                 if(fast == NULL) 
                 {
                    fast = temp;
                    head = fast;
                    cout<<"first -> "<<fast->val<<endl;
                    continue;
                 }
                 else
                fast->next = temp ;
                cout<<"first -> "<<fast->next->val<<endl;
                fast = fast->next;
               }
            
            }
            return head;
        }
    };