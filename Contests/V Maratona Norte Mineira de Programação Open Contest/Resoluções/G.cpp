#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;

int xi,yi,xf,yf,v;

struct point{
    int x,y;
    void read(){
        scanf("%d%d",&x,&y);
    }
    void put(int a,int b){
        x = a;
        y = b;
    }
};

double dist(point a,point b){
    return hypot(a.x-b.x,a.y-b.y);
}


int main(){
    while(~scanf("%d%d%d%d%d",&xi,&yi,&xf,&yf,&v)){
        double ans = oo;
        point cara,escola,a,b,c,d;
        cara.put(xi,yi);
        escola.put(xf,yf);
        scanf("%d%d%d%d",&xi,&yi,&xf,&yf);
        a.put(xi,yi);
        b.put(xi,yf);
        c.put(xf,yi);
        d.put(xf,yf);
        ans = dist(cara,b)+dist(b,d)+dist(d,escola);
        ans = min(ans,dist(cara,a)+dist(a,c)+dist(c,escola));
        printf("%.1lf\n",ans/v);
    }
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;

int xi,yi,xf,yf,v;

struct point{
    int x,y;
    void read(){
        scanf("%d%d",&x,&y);
    }
    void put(int a,int b){
        x = a;
        y = b;
    }
};

double dist(point a,point b){
    return hypot(a.x-b.x,a.y-b.y);
}


int main(){
    while(~scanf("%d%d%d%d%d",&xi,&yi,&xf,&yf,&v)){
        double ans = oo;
        point cara,escola,a,b,c,d;
        cara.put(xi,yi);
        escola.put(xf,yf);
        scanf("%d%d%d%d",&xi,&yi,&xf,&yf);
        a.put(xi,yi);
        b.put(xi,yf);
        c.put(xf,yi);
        d.put(xf,yf);
        ans = dist(cara,b)+dist(b,d)+dist(d,escola);
        ans = min(ans,dist(cara,a)+dist(a,c)+dist(c,escola));
        printf("%.1lf\n",ans/v);
    }
	return 0;
}
