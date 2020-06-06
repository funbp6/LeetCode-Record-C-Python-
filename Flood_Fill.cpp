class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        vector<vector<int>> visited = image;
        paint(image, visited, sr, sc, image[sr][sc], newColor);
        return image;
        
    }
    void paint(vector<vector<int>>& image, vector<vector<int>>& visited, 
               int x, int y, int initcolor, int newcolor){
        if (x<0 || y<0 || x>=image.size() || y>=image[0].size() || 
            visited[x][y] == -1 || image[x][y] != initcolor)
            return;
        // cout << x << " " << y << endl;
        image[x][y] = newcolor;
        visited[x][y] = -1;
        
        paint(image, visited, x+1, y, initcolor, newcolor);
        paint(image, visited, x-1, y, initcolor, newcolor);
        paint(image, visited, x, y+1, initcolor, newcolor);
        paint(image, visited, x, y-1, initcolor, newcolor);
    }
};