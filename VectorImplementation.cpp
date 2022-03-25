#include<bits/stdc++.h>
using namespace std;
int main()
{
	//to increase the size of an array we are using vector in cpp
	//dynamic in nature
	int n;//length of an vector
	cin>>n;//taking input length
	//creating a vector;
	vector<int>ds;//vector is created by integer datatype with vector name ds
    //pushing the elements into a vector
    //to push we are using push_back(element)
    ds.push_back(10);//-->{10}
    ds.push_back(20);//-->{10,20}
    ds.push_back(30);//-->{10,20,30}
    //emplace_back also used to push the elements in the vector
    ds.emplace_back(40);//-->{10,20,30,40}
    ds.emplace_back(10);
    //we can also create an vector by intialising some values in vector
    //vector<int>(n,0)-->n refers size and 0 is an element to be initialise
    //printing a vector using for loop
    for(int i=0;i<ds.size();i++)
    {
    	cout<<ds[i]<<" ";
    }
    cout<<endl;
    /*for(auto it:ds)
    {
    	cout<<it<<" ";
    }*/
    //Taking vector input from user
    /*int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ds.push_back(x);
    }*/
    /*for(auto it:ds)
    {
        cout<<it<<endl;
    }*/
    //sorting a vector in ascending order
    sort(ds.begin(),ds.end());
    for(auto a:ds)
    {
        cout<<a<<" ";
    }
    //sort the vector in descending order
    sort(ds.begin(),ds.end(),greater<int>());
    cout<<endl;
    for(auto j:ds)
    {
        cout<<j<<" ";
    }
    //finding an element in an vector
    int target;
    cin>>target;
    auto s=find(ds.begin(),ds.end(),target);
    if(s!=ds.end())
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<-1;
    }
    //to find the first and last occurences of an vector by using lower bound and upper bound
    int ind=lower_bound(ds.begin(),ds.end(),target)-ds.begin();
    cout<<endl;
    cout<<ind;
    int up=upper_bound(ds.begin(),ds.end(),target)-ds.begin();
    cout<<endl;
    cout<<up;
    //to pop the element from the vector
    ds.pop_back();
    cout<<endl;
    for(auto d:ds)
    {
        cout<<d<<" ";
    }
    //to swap the two vectors
    vector<int>ve={1,2};
    vector<int>ve1={4,5};
    ve.swap(ve1);
    cout<<endl;
    for(auto m:ve)
    {
        cout<<m<<" ";
    }
    cout<<endl;
    for(auto b:ve1)
    {
        cout<<b<<" ";
    }
    //clear is used to erase all elements from vector
    ve.clear();
    //erase is used to delete the element from a vector
    ds.erase(ds.begin());
    cout<<endl;
    for(auto p:ds)
    {
        cout<<p<<" ";
    }
    //erase can also used to delete multiple elements from the vector
    //ds.erase(ds.begin()+1,ds.begin()+3);
    //copying one vector from another vector
    vector<int>ve2(ve1);
    cout<<endl;
    for(auto u:ve2)
    {
        cout<<u<<" ";
    }
    //insertion in vector is based on position
    ds.insert(ds.begin(),100);
    //insert the multiple values in vector
    ds.insert(ds.begin()+2,2,90);
    cout<<endl;
    for(auto r:ds)
    {
        cout<<r<<" ";
    }
    //to insert one vector into another vector
    ve2.insert(ve2.begin(),ds.begin(),ds.end());
    cout<<endl;
    for(auto o:ve2)
    {
        cout<<o<<" ";
    }


}