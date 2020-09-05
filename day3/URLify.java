class URLify{

    public static char[] replaceSpaces(char[] str, int trueLength){
        int spaceCount = 0;
        for(int i=0;i<trueLength;i++){
            if(str[i]==' ') spaceCount++;
        }
        int index = trueLength + spaceCount * 2;
        if(trueLength < str.length) str[trueLength] ='\0';

        for(int i=trueLength-1; i>=0; i--){
            if(str[i] == ' '){
                str[index-1] = '0';
                str[index-2] = '2';
                str[index-3] = '%';
                index = index - 3;
            }else{
                str[index-1] = str[i];
                index--;
            }
        }
        return str;
    }

    public static void main(String[] args) {

        char str[] = {'M','r',' ','J','o', 'h', 'n',' ','S','m','i','t','h',' ',' ',' ',' '};
        int trueLength  = 13;
        char finalStr[] = replaceSpaces(str, trueLength);
        for(int i=0; i<finalStr.length; i++){
            System.out.print(finalStr[i]);
        }
    }
}