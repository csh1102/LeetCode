int** imageSmoother(int** img, int imgSize, int* imgColSize, int* returnSize, int** returnColumnSizes) {
    int **res = (int **)malloc(sizeof(int *) * imgSize);
    *returnColumnSizes = (int *)malloc(sizeof(int) * imgSize);
    *returnSize = imgSize;
    for(int i = 0; i < imgSize; i++){//row
        res[i] = (int *)malloc(sizeof(int) * imgColSize[i]);
        (*returnColumnSizes)[i] = imgColSize[i];
        for(int j = 0; j < imgColSize[i]; j++){//col
            if(i == 0 && j == 0){//left top
                if(imgSize == 1 && imgColSize[0] == 1){//matriz 1x1
                    res[i][j] = img[0][0];
                } else if(imgSize == 1){//matriz 1xN
                    res[i][j] = (img[0][0] + img[0][1]) / 2;
                } else if(imgColSize[0] == 1){//matriz Nx1
                    res[i][j] = (img[0][0] + img[1][0]) / 2;
                } else {//matriz NxN: N > 1
                    res[i][j] = (img[0][0] + img[0][1] + img[1][0] + img[1][1]) / 4;
                }
            }else if(i == 0 && j == imgColSize[i] - 1){ // right top
                if(imgSize == 1 && imgColSize[0] == 2){//matriz 1x2
                    res[i][j] = res[i][j - 1];
                }else {//matriz NxN: N > 1
                    res[i][j] = (img[0][imgColSize[i] - 1] + img[0][imgColSize[i] - 2] + img[1][imgColSize[i] - 1] + img[1][imgColSize[i] - 2]) / 4;
                }
            }else if(i == imgSize - 1 && j == 0){//left bottom
                if(imgSize == 2 && imgColSize[0] == 1){//matriz 2x1
                    res[i][j] = (img[0][j] + img[0][j - 1]) / 2;
                }else {//matriz NxN: N > 1
                    res[i][j] = (img[imgSize - 1][0] + img[imgSize - 1][1] + img[imgSize - 2][0] + img[imgSize - 2][1]) / 4;
                }
            }
            else if(i == imgSize - 1 && j == imgColSize[i] - 1){//right bottom
                res[i][j] = (img[imgSize - 1][imgColSize[i] - 1] + img[imgSize - 1][imgColSize[i] - 2] + img[imgSize - 2][imgColSize[i] - 1] + img[imgSize - 2][imgColSize[i] - 2]) / 4;
            }
            else if(i == 0){//top row
                if(imgSize == 1){//matriz 1xN
                    res[i][j] = (img[0][j - 1] + img[0][j] + img[0][j + 1]) / 3;
                }else {//matriz NxN: N > 1
                    res[i][j] = (img[i][j - 1] + img[i][j] + img[i][j + 1] + img[i + 1][j - 1] + img[i + 1][j] + img[i + 1][j + 1]) / 6;
                }
            } else if(i == imgSize - 1){//bottom row
                res[i][j] = (img[i][j - 1] + img[i][j] + img[i][j + 1] + img[i - 1][j - 1] + img[i - 1][j] + img[i - 1][j + 1]) / 6;
            }else if(j == 0){//left col
                if(imgColSize[i] == 1){//matriz Nx1
                    res[i][j] = (img[i - 1][0] + img[i][0] + img[i + 1][0]) / 3;
                }
                else {//matriz NxN: N > 1
                    res[i][j] = (img[i - 1][j] + img[i - 1][j + 1] + img[i][j] + img[i][j + 1] + img[i + 1][j] + img[i + 1][j + 1]) / 6;
                }
            }
            else if(j == imgColSize[i] - 1){//right col
                res[i][j] = (img[i - 1][j - 1] + img[i - 1][j] + img[i][j - 1] + img[i][j] + img[i + 1][j - 1] + img[i + 1][j]) / 6;
            }
            else{//middle
                res[i][j] = (img[i - 1][j - 1] + img[i - 1][j] + img[i - 1][j + 1] + img[i][j - 1] + img[i][j] + img[i][j + 1] + img[i + 1][j - 1] + img[i + 1][j] + img[i + 1][j + 1]) / 9;
            }
        }
    }
    return res;
}