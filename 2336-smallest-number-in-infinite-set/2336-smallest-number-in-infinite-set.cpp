class SmallestInfiniteSet {
public:
    int hash[10001]={1};
    int i=1;
    SmallestInfiniteSet() {
        i=1;
        for(int j=0;j<1000;j++){
            hash[j]=1;
        }
    }
    
    int popSmallest() {
        while(hash[i]==0 && i<1000)i++;
        hash[i]=0;
        return i++;
    }
    
    void addBack(int num) {
        if(hash[num]==0){
            if(i>num)i=num;
            hash[num]=1;
        }

    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */