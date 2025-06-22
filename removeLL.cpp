// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//           if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode*dummy =new ListNode(-1);
//         dummy->next=head;
//         ListNode*prev=dummy;
//         ListNode*curr=head;
//         while(curr!=NULL){
//             if(curr->next!=NULL && curr->val== curr->next->val){
//                 int dupli=curr->val;
//                 while(curr!=NULL && curr->val==dupli){
//                     ListNode*temp=curr;
//                     curr=curr->next;
//                     delete(temp);

//                 }
//                 prev->next=curr;
//             }else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//         } 
//          ListNode*nayahead=dummy->next;
//          delete(dummy);
//          return nayahead;




//     }
// };
#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

class Place {
public:
    string name;
    unordered_map<Place*, int> neighbours;

    Place(string name) : name(name) {}

    string getName() const {
        return name;
    }

    void addNeighbour(Place* neighbour, int distance) {
        neighbours[neighbour] = distance;
    }

    const unordered_map<Place*, int>& getNeighbours() const {
        return neighbours;
    }
};

unordered_map<Place*, int> findShortestPath(Place* start, Place* destination, unordered_map<Place*, Place*>& parent) {
    unordered_map<Place*, int> distances;
    set<Place*> visited;

    // Initialize distances
    distances[start] = 0;

    while (visited.find(destination) == visited.end()) {
        Place* closestPlace = nullptr;
        int closestDistance = INT_MAX;

        // Find the unvisited node with the smallest distance
        for (auto& entry : distances) {
            if (visited.find(entry.first) == visited.end() && entry.second < closestDistance) {
                closestPlace = entry.first;
                closestDistance = entry.second;
            }
        }

        if (closestPlace == nullptr) break;

        visited.insert(closestPlace);

        for (auto& neighbor : closestPlace->neighbours) {
            int newDistance = distances[closestPlace] + neighbor.second;
            if (distances.find(neighbor.first) == distances.end() || newDistance < distances[neighbor.first]) {
                distances[neighbor.first] = newDistance;
                parent[neighbor.first] = closestPlace;
            }
        }
    }

    return distances;
}

vector<Place*> reconstructPath(Place* start, Place* destination, const unordered_map<Place*, Place*>& parent) {
    vector<Place*> path;
    Place* current = destination;
    while (current != start) {
        path.insert(path.begin(), current);
        current = parent.at(current);
    }
    path.insert(path.begin(), start);
    return path;
}

int main() {
    Place A("A"), B("B"), C("C"), D("D");

    A.addNeighbour(&B, 10);
    A.addNeighbour(&C, 5);
    B.addNeighbour(&D, 15);
    C.addNeighbour(&D, 20);

    unordered_map<Place*, Place*> travelHistory;
    unordered_map<Place*, int> distances = findShortestPath(&A, &D, travelHistory);

    if (distances.count(&D)) {
        cout << "Shortest distance to destination: " << distances[&D] << endl;
        vector<Place*> path = reconstructPath(&A, &D, travelHistory);
        cout << "Shortest Path:\n";
        for (size_t i = 0; i < path.size(); ++i) {
            cout << path[i]->getName();
            if (i < path.size() - 1) cout << " -> ";
        }
        cout << endl;
    } else {
        cout << "No path found to destination." << endl;
    }

    return 0;
}

