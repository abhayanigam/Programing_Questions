#include <iostream>
using namespace std;

bool containsDuplicate(int nums[],int size) {
        for (int i = 1; i < size; ++ i) {
			cout << "i : " << i << endl;

            for (int j = 0; j < i; ++ j) {

				cout << "j : " << j << endl;
				cout << "nums[i] , nums[j] : " <<nums[i] << " , " << nums[j] << endl;
                if (nums[i] == nums[j]) {
                    return true; // 1
                }
            }
			cout<<endl;
        }
        return false; //0
}

int main(){
	int arr[] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout << containsDuplicate(arr,size) << endl;
	
}