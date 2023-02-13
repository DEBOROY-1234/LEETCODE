#include<iostream>
using namespace std;


int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid=start + (end-start)/2;   //mid=(start+end)/2;

    while(start<=end){

        if (arr[mid]==key)
        {
            return mid;
        }

        if (arr[mid]<key)
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=start + (end-start)/2;   //mid=(start+end)/2;
    }
    return -1;
}

int main(){

    int a[6]={1,2,3,4,5,6};
    int b[5]={1,2,3,4,5};

    int evenindex = binarysearch(a,6,5);

    cout<<"index : "<<evenindex<<endl;

    int oddindex = binarysearch(b,6,5);

    cout<<"index : "<<oddindex<<endl;

    return 0;
}