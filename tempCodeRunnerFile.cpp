   for(auto i:m)
   {
    if((m[100-i.first]>0)&&i.second)
    {
        cnt+=min(i.second,m[100-i.first]);
        m[i.first]=0;
        m[100-i.first]=0;
    }
   }