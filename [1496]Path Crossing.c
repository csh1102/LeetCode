bool isPathCrossing(char* path) {
    int **grid = (int **)malloc(sizeof(int *) * 100);
    for(int i=0;i<100;i++){
        grid[i] = (int *)malloc(sizeof(int) * 100);
        for(int j=0;j<100;j++){
            grid[i][j] = 0;
        }
    }
    int *current = (int *)malloc(sizeof(int) * 2);
    current[0] = 50;
    current[1] = 50;
    grid[50][50] = 1;
    for(int i=0;i<strlen(path);i++){
        if(path[i] == 'N'){
            if(grid[current[0]+1][current[1]] == 1){
                return true;
            }
            current[0]++;
            grid[current[0]][current[1]] = 1;
        }else
        if(path[i] == 'S'){
            if(grid[current[0]-1][current[1]] == 1){
                return true;
            }
            current[0]--;
            grid[current[0]][current[1]] = 1;
        } else
        if(path[i] == 'E'){
            if(grid[current[0]][current[1]+1] == 1){
                return true;
            }
            current[1]++;
            grid[current[0]][current[1]] = 1;
        }else
        if(path[i] == 'W'){
            if(grid[current[0]][current[1]-1] == 1){
                return true;
            }
            current[1]--;
            grid[current[0]][current[1]] = 1;
        }
    }
    return false;
}