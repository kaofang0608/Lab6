#include<iostream>
using namespace std;

int main(){
	int N,i=0;
	cout << "Enter the number of student: ";
	cin >> N;
    string name[N];
	int age[N];
	
    while(i<N){
	    cout << "Name of student " << i+1 << " = ";
        cin >> name[i];
	    cout << "Age of student " << i+1 << " = ";
        cin >> age[i];
        i++;
    }
	
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	
	int a=0;
	while(a<N){
	    if(key!=age[a]){
	        a++;
	    }
	    else{
	        cout << name[a] <<"\n";
            a++;
	    }
	}
	
	cout << "--------------------------------------\n";
	
	return 0;
}