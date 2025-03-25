class Solution {
    public boolean isAnagram(String s, String t) {
        // if(s.length() != t.length()){
        //     return false;
        // }
        //  char[] charArray1 = s.toCharArray();
        // char[] charArray2 = t.toCharArray();
        // Arrays.sort(charArray1);
        // Arrays.sort(charArray2);
        // return Arrays.equals(charArray1, charArray2);

        if (s.length()!= t.length()){
            return false;
        }
        char[] arr1= s.toCharArray();
        char[] arr2 = t.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        return Arrays.equals(arr1,arr2);
    }
}