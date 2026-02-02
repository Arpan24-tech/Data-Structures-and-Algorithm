#include<iostream>
using namespace std;

#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>

void about_vector()
{
    //defining a vector
    //type 1
    vector<int>vec1;//empty vector
    //type 3
    vector<int>vec2={1,2};//run time initialisation
    //type 2
    vector<int>vec3(3,10);//making a vector of size 3 and value of all is 10
    //type 4
    vector<int>vec4(vec2);//To make new vector by copying
    
    //Loop on vector
    for(int val:vec1)//here val is the actual value of element and not the index
    {
        cout<<val<<" ";
    }

    //property of vector
    vec1.size();
    vec2.capacity();
    vec1.push_back(1);//where 1 is the value added from back
    vec1.pop_back();//remove last elemennt
    vec1.emplace_back(1);//also insert the value at last
    vec1.at(0) || vec1[0];//both are same
    vec1.front();//to get first element
    vec1.back();//to get last element
    vec1.erase(vec1.begin());//here in erase we pass the iterator of element to remove it
    vec1.erase(vec1.begin(),vec1.begin()+3);//to remove element first to third works like as in python it only change size and not capacity
    vec1.insert(vec1.begin()+2,11);//to insert 11 at 3rd position
    vec1.clear();//removes all the element size becomes 0 and capacity remains same
    vec1.empty();//used to check if the vector becomes empty gives answer in 0 and 1

    //iterator function in vector
    vec1.begin();//it is a iterator that give us the position of 1st element
    *(vec1.begin());//it gives us the value of element at first position
    vec1.end();//it is a iterator that give us the position of last+1 element
    *(vec1.end()-1);//it gives us the value of element at last position
    vec1.rbegin();//points to last element
    vec1.rend();//points to index just before first element

    //creating iterator

    //forward
    // 1st way
    vector<int>::iterator itr1; //before the double colon we define the type of data to which iterator point 
    for(itr1=vec1.begin();itr1!=vec1.end();itr1++)
    {
        cout<<*(itr1)<<" ";
    }
    // 2nd way 
    for(auto itr2=vec1.begin();itr2!=vec1.end();itr2++)//instead of defing the iterator earlier we use auto keyword
    {
        cout<<*(itr2)<<" ";
    }

    //backward

    //1st way
    vector<int>::reverse_iterator itr3; //before the double colon we define the type of data to which iterator point 
    for(itr3=vec1.rbegin();itr3!=vec1.rend();itr3++)
    {
        cout<<*(itr3)<<" ";
    }
    // 2nd way 
    for(auto itr4=vec1.rbegin();itr4!=vec1.rend();itr4++)//instead of defing the iterator earlier we use auto keyword
    {
        cout<<*(itr4)<<" ";
    }
}
 
void about_list()
{
    list<int> l={1,2,3};// We can add element from both sides 
    l.push_back(5);//insert element from back
    l.push_front(5);//insert element from front
    l.emplace_back(5);//insert element from back
    l.emplace_front(5);//insert element from front
    l.pop_back();//remove element from back
    l.pop_front();//remove element from front

    //Loop works same as vector 

    // properties like 
    l.size();
    l.erase(l.begin());
    l.clear();
    l.begin(); 
    l.end(); 
    l.rbegin(); 
    l.rend();
    l.insert(l.begin(),11);
    l.front();
    l.back();
    
    //remain same as vector
}

void about_deque()
{
    deque<int> d={1,2,3};// We can add element from both sides 
    d.push_back(5);//insert element from back
    d.push_front(5);//insert element from front
    d.emplace_back(5);//insert element from back
    d.emplace_front(5);//insert element from front
    d.pop_back();//remove element from back
    d.pop_front();//remove element from front

    //Loop works same as vector 

    // properties like 
    d.size();
    d.erase(d.begin());
    d.clear();
    d.begin(); 
    d.end(); 
    d.rbegin(); 
    d.rend();
    d.insert(d .begin(),11);
    d.front();
    d.back();
    
    //remain same as vector
    
    
    //here random access is possibe
    //eg
    cout<<d[2]<<endl;
}

void about_pair()//don't need a library for it
{
    //used to make a group of 2 same or differnet datatypes
    pair<int,int> p={1,2};
    pair<char,int> p={'a',2};

    //for accessing values
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //pair inside pair
    pair<int,pair<string,int>> p2={1,{"Arpan",100}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;

    //vector of pair
    vector<pair<int,int>> vec={{1,2},{2,4}};

    for(auto i:vec)//here we used "auto" instead of "pair<int,int>"
    {
        cout<<i.first<<" "<<i.first<<endl;
    }


    //push and emplace functiom
    vec.push_back({5,6});
    vec.emplace_back(5,6);//in-place object create
}

void about_stack()
{
    stack<int> s;//last in first out
    s.push(5);
    s.emplace(6);
    s.top();//to check the top element
    s.pop();
    s.size();
    s.empty();
    stack<int> s2;
    s2.swap(s);//now all elements go in s2 and s1 becomes empty

    //to print stack
    while(!s2.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}

void about_queue()
{
    queue<int> q;//first in first out
    q.push(5);
    q.emplace(6);
    q.front();//to check the first element
    q.pop();//remove first element
    q.size();
    q.empty();
    queue<int> q2;
    q2.swap(q);//now all elements go in q2 and q becomes empty

    //to print stack
    while(!q2.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}

void about_priority_queue()
{
    priority_queue<int> pq;//Here as we add the number the queue gets arranged with highest value number at top by default
    priority_queue<int,vector<int>,greater<int>> pq_2;//to arrange in descending order

    pq.push(5);
    pq.emplace(6);
    pq.top();//to check the first element
    pq.pop();//remove first element
    pq.size();
    pq.empty();
}

void about_map()
{
    map<string,int>map;//stores data in a key value pair where key should be unique 
    map.insert({"camera",100});
    map.emplace("camera",100);
    map.count("camera");// it tells us if the key is present or not as 1 and 0
    map.erase("camera");//to erase a key
    map.find("telephone");//to find a key if found we get the iterator and if not we get map.end()
    map.empty();
    map.size();
    map["tv"]=50;//we can insert data like this also

    //to print the map
    for(auto p:map)
    {
        cout<<p.first<<" "<<p.second<<endl;//it prints data in lexiographic order of key
    }


    //multimap
    multimap<string,int>mm;//here we can use just insert or emplace to include data rest all same
    //here we can make several values with same key and it will not treat it as one.
    //here to remove a key we should pass its iterator so that only that key is passed and other key with that name remain in map


    //unordered map
    unordered_map<string,int>um;
    //it prints data in randor order
}
void about_set()
{
    set<int>s;//store unique data in sorted order
    s.insert(1);
    s.emplace(1);
    s.count(1);// it tells us if the value is present or not as 1 and 0
    s.erase(2);//to erase a value
    s.find(7);//to find a value if found we get the iterator and if not we get map.end()
    s.empty();
    s.size();
    s.lower_bound(4);//it will give 4 or a number just greater than 4 if 4 is not present
    s.upper_bound(6);//value should be greater than the input value

    //multi set
    multiset<int>s2;//print duplicate element also

    //unordered set
    unordered_set<int>s3;//print in unsorted way
}


void about_SortAlgorithm()
{
    int arr[5]={1,2,3,4,5};
    sort(arr,arr+5);//we give first element and last element+1 iterator/pointer
    sort(arr,arr+5,greater<int>());//to sort in desending order
    vector<int>v={1,2,3,4,5,8,6,9};
    sort(v.begin(),v.end());
    vector<pair<int,int>>vec={{1,2},{4,5},{7,5},{9,1}};
    sort(v.begin(),v.end());
    for(auto p:vec)//here the elements will get sorted in ascending order wrt to first elements of pair
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    sort(v.begin(),v.end(),comparator);//to sort inascending order wrt to second element
}

//making custom comparator
bool comparator(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if (p1.first<p2.first) return true;
    else return false;
}


void differernt_algorithms()
{
    int arr[5]={12,34,56,7,8};
    reverse(arr,arr+5);//to reverse the array and we can also reverse for some range
    next_permutation(arr,arr+5);//tells about next sorted permutation 

    int a=5,b=9;
    swap(a,b);//it swaps the value
    cout<<min(5,6)<<" "<<max(7,2);//min and max algo
    max_element(arr,arr+5);//tells the max element of array
    min_element(arr,arr+5);//tells the min element of array
    binary_search(arr,arr+5,6);//searching algo
}

int main()
{
    cout<<"Everything about different containers in c++."<<endl;
    return 0;
}