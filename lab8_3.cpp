char before(char x){
    char ans;

    if(x=='A'){
        ans='Z';
        return ans;
    }
    else if(int(x)>90||int(x)<65){
        ans = '0';
        return ans;
    }
   else{
       ans =x-1;
       return ans;
   }
   
    
    
    
}