bool find(int x){  
    int i,j;  
    for (j=1;j<=m;j++){    //?描每?妹子  
        if (line[x][j]==true && used[j]==false)        
        //如果有?昧并且??有???(?里??的意思是?次查找曾??改???妹子的????，但是?有成功，所以就不用瞎?工夫了）  
        {  
            used[j]=1;  
            if (girl[j]==0 || find(girl[j])) {   
                //名花?主或者能?出?位置?，?里使用??  
                girl[j]=x;  
                return true;  
            }  
        }  
    }  
    return false;  
}  