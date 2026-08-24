class Solution {
public:
    int calPoints(vector<string>& s) {
        int n=s.size();
        stack<int>st;
       for(int i=0;i<n;i++)
       {
        if(s[i]=="C")
        {
            st.pop();
        }
        else if(s[i]=="D")
        {
            st.push(2*st.top());
        }
        else if(s[i]=="+")
        {
            int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
        }
        else {
            st.push(stoi(s[i]));
        }
       }
        int final=0;
        while(!st.empty())
        {
            final+=st.top();
            st.pop();
        }
        return final;
    }
};