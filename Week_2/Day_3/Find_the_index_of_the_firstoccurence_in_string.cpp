        int m=haystack.length();
        int n=needle.length();
        int pointer=-1;
        for(int i=0;i<=m-n;i++){
            if(haystack.substr(i,n)==needle){
                pointer=i;
                break;
                
            }
        }