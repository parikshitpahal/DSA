class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1==rec2)return true;
        int x1=rec1[0];
        int x2=rec1[2];
        int y1=rec1[1];
        int y2=rec1[3];
        int fy=0;
        int fx=0;
        int xx1=rec2[0];
        int xx2=rec2[2];
        int yy1=rec2[1];
        int yy2=rec2[3];
        if(x1<xx1 && x2>xx1){
            if(xx2>x2 || xx2<x1)fx=1;
            else if(xx2<=x2 && xx2>=x1)fx=1;
        }
        if(x1<xx2 && x2>xx2){
            if(xx1>x2 || xx1<x1)fx=1;
            else if(xx1<=x2 && xx1>=x1)fx=1;
        }
        if(y1<=yy1 && y2>=yy1){
            if(yy2>y2 || yy2<y1)fy=1;
            else if(yy2<=y2 && yy2>=y1)fy=1;

        }
        if(y1<=yy2 && y2>=yy2){
            if(yy1>y2 || yy1<y1)fy=1;
            else if(yy1<=y2 && yy1>=y1)fy=1;
        }



        if(xx1<x1 && xx2>x1){
            if(x2>xx2 || x2<xx1)fx=1;
            else if(x2<=xx2 && x2>=xx1)fx=1;
        }
        if(xx1<x2 && xx2>x2){
            if(x1>xx2 || x1<xx1)fx=1;
            else if(x1<=xx2 && x1>=xx1)fx=1;
        }
        if(yy1<=y1 && yy2>=y1){
            if(y2>yy2 || y2<yy1)fy=1;
            else if(y2<=yy2 && y2>=yy1)fy=1;

        }
        if(yy1<=y2 && yy2>=y2){
            if(y1>yy2 || y1<yy1)fy=1;
            else if(y1<=yy2 && y1>=yy1)fy=1;
        }

        cout<<fx<<fy;
        return fy==1 && fx==1 ? true : false;
    }
};