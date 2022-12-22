class Solution {
public:
    int old = -1, newcolor = -1;
    void fill(vector<vector<int>>& images, int sr, int sc){

       if(sr>=images.size() || sc>=images[0].size() || images[sr][sc]!=old ){
           return;
       }
        images[sr][sc] = newcolor;
       
       
       fill(images,sr+1,sc);
      
       fill(images,sr-1,sc);
      
       fill(images,sr,sc+1);
      
       fill(images,sr,sc-1);
       
       
  
       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        old = image[sr][sc];
        if(old == color){
            return image;
        }
        newcolor = color;
        
        fill(image,sr,sc);
        return image;
    }

};
