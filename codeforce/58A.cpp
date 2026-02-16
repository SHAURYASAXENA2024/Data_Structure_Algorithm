// THIS IS THE MY APPROACH FOR THIS QUESTION IN FIRST GO FINDING THE FREQUENCY BUT IT IS WRONG
#include<iostream>
using namespace std;
class hello {};
int main()
{
    string word;
    cin >> word;
    int other=0;
    int h=0,e=0,l=0,o=0;
    for(int i=0; i<word.size(); i++){
        if(word[i]=='h'){
            h++;
        }
        else if(word[i]=='e'){
            e++;
        }
        else if(word[i]=='l'){
            l++;
        }
        else if(word[i]=='o'){
            o++;
        }
        else{
            other++;
        }
    }
    if((h>0 && e>0 && l>0 && o>0) && (other==0)){
        cout << "NO" << endl;
    }
    if((h>0 && e>0 && l>=2 && o>0) && (other>0)){
        cout << "YES" << endl;
    }
    if((h==1 && e==1 && l==1 && o==1) && (other>0)){
        cout << "NO" << endl;
    }
    return 0;
}
// CORRECT APPROACH IS TO FIND THE "HELLO" AS A SUBSTRING IS YES 
#include<iostream>
using namespace std;

class hello {};

int main()
{
    string word;
    cin >> word;

    string target = "hello";
    int j = 0;

    for(int i = 0; i < word.size(); i++){
        if(word[i] == target[j]){
            j++;
        }
        if(j == 5) break;   
    }

    if(j == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
