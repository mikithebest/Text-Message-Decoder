#include <iostream>
// FIXME include the string library
using namespace std;

const string BFF = "best friend forever";
const string IDK = "I don't know";
const string JK = "just kidding";
const string TMI = "too much information";
const string TTYL = "talk to you later";

int main() {
   string inputString;
   string findWord;
   
   cout << "Enter text: " << endl;
   getline(cin, inputString);
  
   cout << "You entered: " << inputString << endl;
   
      if(inputString.find("BFF") != string::npos)
      {
         cout << "BFF: " << BFF << endl;
      }
      if(inputString.find("IDK") != string::npos)
      {
         cout << "IDK: " << IDK << endl;
      }
      if(inputString.find("JK") != string::npos)
      {
         cout << "JK: " << JK << endl;
      }
      if(inputString.find("TMI") != string::npos)
      {
         cout << "TMI: " << TMI << endl;
      }
      if(inputString.find("TTYL") != string::npos)
      {
         cout << "TTYL: " << TTYL << endl;
      }
   
   
   return 0;
}
