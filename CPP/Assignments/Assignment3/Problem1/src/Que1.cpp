#include <iostream>
#include <cstring>
using namespace std;

class String{
	int length;
	char *str;

public:
	String() {
	    this->length = 0;
	    this->str = new char[1];
	    this->str[0] = '\0';
	}

	~String(){
		delete[] str;
	}

	void acceptRecord() {
	        char str1[30];
	        cout << "Enter a string: ";
	        cin.getline(str1, 30);

	        length = strlen(str1);
	        delete[] str;

	        str = new char[length + 1];
	        strcpy(str, str1);
	    }


	    void printRecord() const {
	        cout << "String: " << str << endl;
	    }
};

int main(){
	String s;
	s.acceptRecord();
	s.printRecord();
	return 0;
}
