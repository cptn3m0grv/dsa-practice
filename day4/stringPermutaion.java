class stringPermutation{

    public static String sort(String s){
        char arrayString[] = s.toCharArray();
        java.util.Arrays.sort(arrayString);
        return new String(arrayString);
    }

    public static boolean checkPermutaion(String s, String t){
        if(s.length() != t.length()) return false;
        return sort(s).equals(sort(t));
    }


    public static void main(String[] args) {
        String s = "god";;
        String t = "doG";
        boolean permutaion = checkPermutaion(s, t);
        System.out.println(permutaion);
    }
}