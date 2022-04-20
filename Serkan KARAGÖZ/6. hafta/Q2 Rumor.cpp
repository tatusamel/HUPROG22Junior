// Serkan
// 20.04.2022 works true but has time problems.

#include<iostream>
#include<vector>
#include<stack>

using namespace std;


int dfsWithMinimumCost(int index, vector<vector<int>>& graph, int* costs, bool* markList){
    stack<int> visitList = stack<int>();
    visitList.push(index);
    int i, minCost;
    minCost = costs[index];

    bool hasUnvisited = false;
    markList[index] = true;

    while(! visitList.empty()){
        hasUnvisited = false;
        for(i = 0; i < graph[visitList.top()].size(); i++){
            if(! markList[graph[visitList.top()][i]]){
                visitList.push(graph[visitList.top()][i]);
                markList[visitList.top()] = true;
                hasUnvisited = true;
            }
        }
        if(! hasUnvisited){
            minCost = min(minCost, visitList.top());
            visitList.pop();
        }
    }
    return minCost;
}


int main(){

    int n, m, i, t1, t2;

    cin >> n >> m;

    bool* visitList = new bool[n+1];
    int* costs = new int[n+1];
    for(i = 1; i< n+1;i++){
        visitList[i] = false;
        cin >> costs[i];
    }

    vector<vector<int>> adjList = vector<vector<int>>(n+1);

    for(i = 0; i < m; i++){
        cin >> t1 >> t2;
        adjList[t1].push_back(t2);
        adjList[t2].push_back(t1);
    }

    stack<int> minCosts = stack<int>();

    for(i = 1; i < n+1; i++){
        if(! visitList[i]){
            minCosts.push(dfsWithMinimumCost(i, adjList, costs, visitList));
        }
    }

    int sum = 0;
    while(! minCosts.empty()){
        sum += minCosts.top();
        minCosts.pop();
    }

    cout << sum;

    return 0;
}
