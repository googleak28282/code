bool find(int x){  
    int i,j;  
    for (j=1;j<=m;j++){    //?�y�C?�f�l  
        if (line[x][j]==true && used[j]==false)        
        //�p�G��?�N�}�B??��???(?��??���N��O?���d�䴿??��???�f�l��????�A���O?�����\�A�ҥH�N���νM?�u�ҤF�^  
        {  
            used[j]=1;  
            if (girl[j]==0 || find(girl[j])) {   
                //�W��?�D�Ϊ̯�?�X?��m?�A?���ϥ�??  
                girl[j]=x;  
                return true;  
            }  
        }  
    }  
    return false;  
}  