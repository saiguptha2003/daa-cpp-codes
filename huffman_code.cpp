/*
name:V D Panduranga Sai Guptha
topic: Huffman Algorithm to reduce the bits for transfering the message
*/
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iterator>
#include <queue>
#include<bitset>
using namespace std;
map<char, string> st;
class node
{
public:
     int frequency;
     char ch;
     node *left;
     node *right;
     node(char c, int data)
     {
          this->ch = c;
          this->frequency = data;
          left = right = NULL;
     }
};
class compare
{
public:
     bool operator()(node *left, node *right)
     {
          return left->frequency > right->frequency;
     }
};
void revisedcode(node *root, string code)
{
     if (!root)
     {
          return;
     }
     if (root->ch != '@')
     {
          st.insert(pair<char, string>(root->ch, code));
     }
     revisedcode(root->left, code + '0');
     revisedcode(root->right, code + '1');
}
void solution(char c[], int freq[], int size)
{
     node *left, *right, *top;
     priority_queue<node *, vector<node *>, compare> heap;
     for (int i = 0; i < size; i++)
     {
          heap.push(new node(c[i], freq[i]));
     }
     while (heap.size() != 1)
     {
          left = heap.top();
          heap.pop();
          right = heap.top();
          heap.pop();

          top = new node('@', left->frequency + right->frequency);
          top->left = left;
          top->right = right;
          heap.push(top);
     }
     revisedcode(heap.top(), "");
}
int main()
{
     int n = 3;
     // predefined input
     char g[] = {'a', 'b', 'c'};
     int f[] = {5, 9, 12};
     /*user defind input or custom input
     int n;
     cin>>n;
     char g[n];
     for(int i=0;i<n;i++)
     {
          cin>>g[i];
     }
     int f[n];
     for(int i=0;i<n;i++)
     {
          cin>>f[i];
     }
     */
     solution(g, f, n);
     map<char, string>::iterator i;
     cout << "characters"<< "    "<< "reduced_bits"<<"    "<<"previous_bits"<< endl;
     for (i = st.begin(); i != st.end(); ++i)
     {
          int it;
          cout << "\t" << i->first << "\t\t" << i->second << "\t" ;
          int n = (int)i->first;
          string binary = bitset<64>(n).to_string();
          binary.erase(0, binary.find_first_not_of('0'));
          cout << binary << endl;
     }
}
