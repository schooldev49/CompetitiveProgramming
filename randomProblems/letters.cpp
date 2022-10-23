

#include <bits/stdc++.h> 
using namespace std;
typedef string s;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<int> vi;
typedef char c;
typedef double db;
typedef int iq;
bool vBasicFind(vector<char> v, const char* v1){
  // useless function since BinarySearch in int main() didn't work
  int lowest = 0;
  int maxim = v.size() - 1;
  int thisvarismid;
  //cout << "I'm here now";
  while (lowest <= maxim){
    thisvarismid = lowest + (maxim - lowest) / 2;
    if (v[thisvarismid] == *v1){
      return true;
    } 
    if (*v1 < v[thisvarismid]){
      lowest = thisvarismid + 1;
    } else {
      maxim = thisvarismid - 1;
    }
  }
  return false;
}
db rateString(s epic){ 
  vector<vector<string>> tnscoreList {
    {"a","100"},{"b","110"},{"c","74"},{"d","92"},{"e","100"},{"f","92"},{"g","50"},{"h","92"},{"i","105"},{"j","-12"},{"k","100"},{"l","30"},{"m","95"},{"n","91"},{"o","82"},{"p","76"},{"q","30"},{"r","105"},{"s","100"},{"t","100"},{"u","85"},{"v","93"},{"w","82"},{"x","105"},{"y","90"},{"z","93"}
  };
  vc ok;
  for (char e : epic){

    ok.insert(ok.end(),e);
  }
  cout << ok[1];
  
  vi current;

  iq totalIn = 25;
  iq w = 0;
  iq mid;
  iq rows = 2;
  iq cols = 26;
  iq rown, coln;
  iq end = cols - 1;
  sort(tnscoreList.begin(),tnscoreList.end());
  sort(ok.begin(),ok.end());

  // had to use Linear Search because binary search was being sussy (O n2 complexity)
  for (int i=0; i<tnscoreList.size(); i++){
    string e = tnscoreList[i][0];
    const char* ei = e.c_str();
    cout << i << " th iteration, " << ei << " character.\n";
    auto yes = find(ok.begin(),ok.end(),*ei);
    if (yes != ok.end()){ // I did not end up using this
      cout << "found " << tnscoreList[i][0] << "\n";
      stringstream bruh;
      int eq;
      bruh << tnscoreList[i][1];
      bruh >> eq;

     current.insert(current.end(),eq);

     // current.push_back(eq);
    }
  }


  /*while (w <= end){
    mid = w + (end - w) / 2;
    coln = mid % cols - 1;
    string e = tnscoreList[coln][0];
    const char* ei = e.c_str();
    cout << ei << "hi\n";
    bool wha = vBasicFind(ok,ei);
    if (wha == true){
      int eq;
      cout << tnscoreList[coln][1] << "\n";
      bruh << tnscoreList[coln][1];
      bruh >> eq;
      current.push_back(eq);
    } 
    if (coln < mid){
      w = mid + 1;
    } else {
      end = mid - 1;
    }
    
  }*/
  db answer;
  if (current.size() == 0) return -1;
  for (int irs=0; irs<current.size(); irs++){
    cout << "adding " << current[irs] << " to total\n";
    answer += current[irs];


    }
  cout << answer << " answer\n";
    cout << current.size() << " size\n";
      return (double)(answer) / (double)current.size();



  
} 
int main(iq argc, c *argv[]){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  locale loc;
  s ok;
  cin >> ok;
  vc no;
  for (char iw : ok){
    iw = tolower(iw,loc);
    no.insert(no.end(),iw);
  }
  ok = "";
  for (char i: no){
    ok.push_back(i);
  }
  db yes = rateString(ok);
  if (fmod(yes,1) != 0){
    cout << "answer: " << yes;
    } else {
      cout << "answer: " << (int) yes;
    }
  return 0;
}
