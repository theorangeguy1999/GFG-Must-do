class box
{
    public:
    int l,b,h;
};
bool compare(box b1,box b2)
{
    return (b1.l*b1.b) > (b2.l*b2.b);
}
int maxHeight(int height[],int width[],int length[],int n)
{
    vector<box> inp;
    for(int i=0;i<n;i++)
    {
        box temp1,temp2,temp3;
        temp1.h=height[i];
        temp1.b=min(width[i],length[i]);
        temp1.l=max(width[i],length[i]);
        temp2.l=max(height[i],width[i]);
        temp2.b=min(height[i],width[i]);
        temp2.h=length[i];
        temp3.b=min(length[i],height[i]);
        temp3.h=width[i];
        temp3.l=max(length[i],height[i]);
        inp.push_back(temp1);
        inp.push_back(temp2);
        inp.push_back(temp3);
    }
    sort(inp.begin(),inp.end(),compare);
    n*=3;
    int msh[n];
    for(int i = 0; i < n; i++) msh[i] = inp[i].h;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(inp[i].b < inp[j].b && inp[i].l < inp[j].l )
                {
                    msh[i]=max(msh[i],msh[j]+inp[i].h);
                }
        }
    }
    int rs = -1;
    for(int i = 0; i < n; i++){
        rs = max(rs, msh[i]);
    }
    return rs;
}
