/// <Print a vector> ///

/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1 = {10,20,30,40,50};

    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<< " ";
    }
    cout<<endl;
    return 0;
}*/

/// <input vector and print> using "push_back()"///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10); // input vactor
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<< "Size of the vector is "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout <<endl;

}*/

/// <print first and last index> using "front()" "back()"///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};
    cout<<"The first index is "<<v.front()<<endl;
    cout<<"The last index is "<<v.back()<<endl;

}*/

/// <Clear all element> using "clear()" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i] << " ";
    }
    cout<<endl;

    v.clear(); /// clear all vector element

    cout<<"The number of element is "<<v.size();

}*/

/// <chack a vector empty or not> using "empty" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
     v.push_back(10);
     v.push_back(10);
     v.push_back(10);

     v.clear(); /// clear the <vector> thean return empty ///

     if(v.empty()){
        cout<< "This vactor is empty";
     }
     else
        cout<<"This vector is note empty";
}*/

/// < Delet last element > using "pop_back" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

     for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}*/

/// <swap 2 vactor> using "swap()" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {10,20,30,40,50}; /// Before swaping ///
    vector<int> v2 = {11,22,33,44,55};



    swap(v1,v2); /// after swaping ///

    cout << "vector v1 is ";
    for(int i = 0; i < v1.size(); i++){
        cout<< v1[i]<< " ";
    }
    cout<<endl;

    cout<< "Vector v2 is ";
    for(int i = 0; i < v2.size(); i++){
        cout<<v2[i]<< " ";
    }
}*/

/// <sort in a vactor> using "sort()" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(50);
    v.push_back(40);
    v.push_back(80);
    v.push_back(30);
    v.push_back(90);

    for(int i = 0; i < v.size(); i++){   /// Before sort
        cout<< v[i]<< " ";
    }
    cout<<endl;

    cout<< "sort increasing order : ";
    sort(v.begin(), v.end());   /// sort increasing order

    for(int i = 0; i < v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<< endl;


}*/

/// <vectror reverse> using "reverse()" ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {40,50,60,10,20,80,30,70};

    sort(v.begin(), v.end()); /// sort this vector
    reverse(v.begin(),v.end()); /// reverse this vector

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<< " ";
    }
}*/

/// <iteration like a pointer> using "iteration()" ///

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    vector<int> :: iterator  it;

   it = v.begin();   /// it point point the first index.
    cout<< "the iteration is "<< *it<<endl;  /// print the first element .

    it = v.begin()+3;  /// point the 4th index.
    cout<< "the element is "<< *it<<endl;

    for(int i = 0; i < v.size(); i++){
        it = v.begin()+i;  /// point all element.
        cout<<*it<< " ";
    }

}


