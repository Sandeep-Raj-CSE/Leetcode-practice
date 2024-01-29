class Solution {
public:
    string defangIPaddr(string add) {

        int i=0;
        string temp="";

        while(i < add.size()){

            if(add[i] == '.'){
                temp=temp+"[.]";
            }else{
                temp=temp+add[i];
            }

            i++;
        }

        return temp;
        
    }
};