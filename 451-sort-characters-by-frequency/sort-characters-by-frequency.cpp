class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char ,int> mapp1;
        priority_queue<pair<int ,char>> pq;
        string ans="";

        for(int i=0;i<s.size();i++){
            mapp1[s[i]]++;

        }
        for(auto i : mapp1){
            pq.push({i.second,i.first});

        }
        while(!pq.empty()){
        auto current=pq.top();
        // append(number of times,character)
        ans.append(current.first,current.second);
        pq.pop();
        }
    return ans;}
};