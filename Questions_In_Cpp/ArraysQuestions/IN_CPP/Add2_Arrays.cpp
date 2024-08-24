vector <int> reverse(vector <int> arr){
    int start = 0;
    int end = arr.size()-1;

    while(start < end){
        swap(arr[start++],arr[end--]);
    }
    return arr;
}

vector <int> findArraySum(vector<int> &a, int n, vector<int>&b, int m){
    int i = n-1;
    int j = n-1;
    int carry = 0;
    vactor<int> ans;

    while (i>=0 && j>=0)
    {
        int val1 = a[i];
        int val2 = a[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum %= 10;

        ans.push_back(sum);
        i--;
        j--;
    }

    // First Case : If we have 1st array is greater than 2nd array.
    while (i>=0)
    {
        int sum = a[i] + carry
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }

    // Second Case : If we have 2nd array is greater than 1st array.
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }

    // Third Case : If we have both the array is same and we have to handle caary also.
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}