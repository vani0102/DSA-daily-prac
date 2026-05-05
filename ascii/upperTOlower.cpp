/*Toggle Case
✅ Idea
If lowercase → make uppercase
If uppercase → make lowercase

👉 ASCII trick:

'a' - 'A' = 32*/
#include <iostream>
using namespace std;
class solution{
public:
string toggleCase(string){
  for(int i=0;i<s.length();i++){
if(islower(s[i])){
s[i]=s[i]-32; //to uppercase
}
            else if(isupper(s[i])) {
                s[i] = s[i] + 32;   // to lowercase
            }
        }
        return s;
    }
};
