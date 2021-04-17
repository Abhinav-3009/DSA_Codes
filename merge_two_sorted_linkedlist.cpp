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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==0 && l2==0)
        {
            return l1;
        }
        vector<int>ans;
        while(l1!=0)
        {
            ans.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=0)
        {
            ans.push_back(l2->val);
            l2=l2->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* finale = new ListNode();
        ListNode* ui = new ListNode();
        ui=finale;
        finale->val=ans[0];
        for(int i=1;i<ans.size();i++)
        {
            ListNode* tmp=new ListNode();
            tmp->val=ans[i];
            finale->next=tmp;
            finale=finale->next;
        }
        return ui;
    }
};
