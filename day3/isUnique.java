// This solution takes O(n**2)
// class isUnique{

//     public static boolean unique(String str){
//         for(int i =0; i<str.length(); i++){
//             for (int j=0; j!=i; j++){
//                 if(str.charAt(i) == str.charAt(j)) {return false;}
//             }
//         }
//         return true;
//     }

//     public static void main(String[] args) {
//         String str = "sourabh";
//         boolean isIt;
//         isIt = unique(str);
//         System.out.println(isIt);
//     }
// }   

// The following solution takes O(n)
class isUnique{

    public static boolean unique(String str){
        if(str.length() > 128) return false;
        boolean[] char_at = new boolean[128];

        for(int i = 0; i<str.length(); i++){
            int val = str.charAt(i);
            if(char_at[val]) return false;

            char_at[val] = true;
        }

        return true;
    }


    public static void main(String[] args) {
        String str = "abcdefghijklmnopqrstuvwxyz1234567890";
        boolean isIt;
        isIt = unique(str);
        System.out.println(isIt);
    }
}