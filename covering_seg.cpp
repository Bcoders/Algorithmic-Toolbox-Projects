#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>



using std::vector;

struct Segment{
  int start, end;
};

bool compareByEnd(const Segment &a, const Segment &b)
  {
    return a.end <= b.end;
  }

vector<int> optimal_points(vector<Segment> &segments) { //take the address of the vector segments
  vector<int> points;
  //write your code here 
  std::sort(segments.begin(), segments.end(), compareByEnd);//for sorting the vector segments.
  

    int n = segments.size();
  
    for(int j = 0; j< segments.size(); j++){

      int key = segments[j].end;
      
    for (int i = j+1; i <segments.size(); i++){
        if((key >= segments[i].start) and (key <= segments[i].end)){
          segments.erase(segments.begin()+i); 
          i--;         
          n--;              
        }  
      }
  }
  
  for (int i = 0; i < n; i++) {
    points.push_back(segments[i].end);}

  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments); //Pass vector as an argument
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
