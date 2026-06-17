        stack<char>t;
        for(char x:s){
            
            if(t.empty())t.push(x);
            
            else if(t.top()=='(' && x==')' || t.top()=='{' && x=='}' || t.top()=='[' && x==']'){
                t.pop();
            }
            
            else 
                t.push(x);
        }
        
        return t.size()==0;
