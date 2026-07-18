#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"kiwi"};
    string s4{"apple"};
    string s5{s1};      //Apple
    string s6{s1,0,3}; //App
     string s7(10,'X'); //XXXXXXXXXXXX
     
    //   cout<<s0<<endl;  //no garbage
    //   cout<<s0.length()<<endl;  //empty strings

     
    //initialization
    // cout<<"\n initialization"<<"\n------------------"<<endl;
    // cout<<"s1 is initialize to "<<s1<<endl;
    // cout<<"s2 is initialize to "<<s2<<endl;
    // cout<<"s3 is initialize to "<<s3<<endl;
    // cout<<"s4 is initialize to "<<s4<<endl;
    // cout<<"s5 is initialize to "<<s5<<endl;
    // cout<<"s6 is initialize to "<<s6<<endl;
    // cout<<"s7 is initialize to "<<s7<<endl;

    //comparision
    // cout<<"\ncomparision"<<"\n-------------------"<<endl;
    // cout<<boolalpha;
    // cout<<s1<<"=="<<s5<<":"<<(s1==s5)<<endl;
    // cout<<s1<<"=="<<s2<<":"<<(s1==s2)<<endl;
    // cout<<s1<<"!="<<s2<<":"<<(s1!=s2)<<endl;
    // cout<<s1<<"<"<<s2<<":"<<(s1<s2)<<endl;
    // cout<<s2<<">"<<s1<<":"<<(s2>s1)<<endl;
    // cout<<s4<<"<"<<s5<<":"<<(s4<s5)<<endl;
    // cout<<s1<<"=="<<"Apple"<<":"<<(s1=="Apple")<<endl;

    //Assignment
    // cout<<"\n Assignment"<<"\n---------------"<<endl;
    // s1="watermelon";
    // cout<<"s1 is now "<<s1<<endl;
    // s2=s1;
    // cout<<"s2 is now "<<s2<<endl;
    // s3="Frank";
    // cout<<"s3 is now "<<s3<<endl;
    // s3[0]='c';
    // cout<<"s3 change first letter to c:"<<s3<<endl;
    // s3.at(0)='p';
    // cout<<"s3 changes first letter to p:"<<s3<<endl;
    

    //concatenation
    // s3="watermelon";
    // cout<<"\n concatenation"<<"\n-------------------"<<endl;
    // s3=s5+" and " +s2 +" juice";
    // cout<<"s3 is now "<<s3<<endl;  //Apple and Banana juice

    // s3="nice" + "cold"+s5 = "juice";    //compiler error


    //for loop
    // cout<<"\n for loop"<<"\n----------"<<endl;
    // s1="Apple";
    // for(size_t i(0);i<s1.length();++i)
    // cout<<s1.at(i);  //or s1[i] Apple
    // cout<<endl;

   // range-based for loop
    // for(char c:s1)
    // cout<<c; //Apple
    // cout<<endl;


    //substring
    // cout<<"\n substring"<<"\n----------------------"<<endl;
    // s1="this is a test";
    // cout<<s1.substr(0,4)<<endl;
    // cout<<s1.substr(5,2)<<endl;
    // cout<<s1.substr(10,4)<<endl;

    //erase
    // cout<<"\n erase"<<"\n--------------------"<<endl;
    // s1="this is a test";
    // s1.erase(0,4);
    // cout<<"s1 is now "<<s1<<endl;

    //getline
    // cout<<"\n getline"<<"\n--------------------"<<endl;
    // string full_name{};
    // cout<<"Enter your full name:";
    // getline(cin,full_name);
    // cout<<"your full name is:"<<full_name<<endl;


    //find
    cout<<"\n find"<<"\n---------------------"<<endl;
    s1="The secret word is  Boo";
    string word{};

    cout<<"Enter the word to find:";
    cin>>word;
    size_t position=s1.find(word);
    if(position!=string::npos)
    cout<<"found"<<word<<"at position:"<<position<<endl;
    else
    cout<<"sorry"<<word<<"not found"<<endl;
    cout<<endl;



    }