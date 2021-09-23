queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> S;
    for(int i=0;i<k;i++){
        S.push(q.front());
        q.pop();
    }
    while(!S.empty()){
        q.push(S.top());
        S.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}