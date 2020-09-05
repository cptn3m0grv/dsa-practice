class printSpiral{

    public static void spiralPrint(int R, int C, int arr[][]){
        int minRow = 0, maxRow = R, minCol = 0, maxCol = C;
        int i;
        while(minRow < maxRow && minCol < maxCol){
            for(i=minCol; i<maxCol; i++){
                System.out.print(arr[minRow][i] + "\t");
            }
            minRow++;
            System.out.println();
            for(i=minRow; i<maxRow; i++){
                System.out.print(arr[i][maxCol-1] + "\t");
            }
            maxCol--;
            System.out.println();
            if(minRow < maxRow){
                for(i=maxCol; i>=minCol; i--){
                    System.out.print(arr[maxRow-1][i] + "\t");
                }
                maxRow--;
            }
            System.out.println();
            if(minCol < maxCol){
                for(i=maxRow -1; i>=minRow; i--){
                    System.out.print(arr[i][minCol]+"\t");
                }
                minCol++;
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int R=4, C=5;
        int arr[][] ={
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20}
        };
        spiralPrint(R, C, arr);
    }
}