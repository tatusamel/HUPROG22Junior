
class RecentCounter {
    int ct;
public:
    queue<int> q;
    RecentCounter() {
        ct=0;
    }
    
    int ping(int t) {
        if(q.empty())
        q.push(t);
        else{
            q.push(t);
            if(q.front()<t-3000 || q.front()>t){
            while((q.front()<t-3000 || q.front()>t)&&!q.empty())
                q.pop();
            }
        }
        return ct=q.size();
    }
};
