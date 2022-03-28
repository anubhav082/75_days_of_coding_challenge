// Insert Delete GetRandom O(1)

class RandomizedSet {
public:
    
    unordered_map<string,int>m;
    
    vector<string>v;
    RandomizedSet() {
        
        srand(time(0));
    }
    
    bool insert(int val) {
        
        string str=to_string(val);
        if(m.find(str)==m.end()) 
        {
            v.push_back(str);
            m[str]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        
        string str=to_string(val);
        if(m.find(str)!=m.end()) 
        {
            v[m[str]]="#";
            m.erase(str);
            return true;
        }
       return false;
    }
    
    int getRandom() {
        
        int index=rand()%v.size();
        
        while(v[index]=="#") 
            index=rand()%v.size();
        
        return stoi(v[index]);
    }
};
