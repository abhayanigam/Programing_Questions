/**
 * Insertion Sort List
    Given the head of a singly linked list, sort the list using insertion sort,
    and return the sorted list's head.

    The steps of the insertion sort algorithm:

    1. Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
    2. At each iteration, insertion sort removes one element from the input data,
        finds the location it belongs within the sorted list and inserts it there.
    3. It repeats until no input elements remain.
        The following is a graphical example of the insertion sort algorithm.
        The partially sorted list (black) initially contains only the first element in the list.
        One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

    Example 1:
        Input: head = [4,2,1,3]
        Output: [1,2,3,4]
    Example 2:
        Input: head = [-1,5,3,4,0]
        Output: [-1,0,3,4,5]
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode *insertionSortList(ListNode *head)
    {
        ListNode dummy(0);
        ListNode *prev = &dummy; // the last and thus largest of the sorted list

        while (head != nullptr)
        {                                // the current inserting node
            ListNode *next = head->next; // Cache the next inserting node.
            if (prev->val >= head->val)
                prev = &dummy; // Move `prev` to the front.
            while (prev->next && prev->next->val < head->val)
                prev = prev->next;
            head->next = prev->next;
            prev->next = head;
            head = next; // Update the current inserting node.
        }

        return dummy.next;
    }
};