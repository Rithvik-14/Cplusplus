//print innital of name --- rithvik sunnel dixit ---r s d


#include <iostream>
using namespace std;
void findNameInitials(string name) {
   cout<<(char)toupper(name[0]);
   for (int i = 0; i < name.length() - 1; i++)
      if(name[i] == ' ' )
   cout << " " << (char)toupper(name[i + 1]);
}
int main() {
   string name;
   getline(cin,name);
   cout<<"The initials of the name are ";
   findNameInitials(name);
   return 0;
}