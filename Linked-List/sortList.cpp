#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}


};
class Solution{
    public:
        ListNode* sortList(ListNode* head){
            vector<int> arr;
            ListNode* temp = head;
            while(temp){
                arr.push_back(temp->val);
                temp = temp->next;
            }
            sort(arr.begin(),arr.end());
            temp=head;
            int i=0;
           for(int val:arr){
            temp->val = val;
            temp = temp->next;
           }
            return head;
        }
};

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;
}
int main(){
    Solution obj;
    int n;
    cout<<"Enter number of nodes:";
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=head;
    cout<<"Enter node values: "<<endl;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        tail->next = new ListNode(val);
        tail=tail->next;
    }
    head = obj.sortList(head);
    printList(head);
    return 0;
}