public class reverse {
    public static void main(String[] args) {
       /*  String str1 = " Pw Skill ";
        String str2 = "";
        String sarr[] = str1.split(" ");
        for(String elem : sarr ){
        for (int i = elem.length()-1 ; i>=0; i--) {
            str2 = str2 + elem.charAt(i);
        }
        str2 = str2 + " ";
    }
        System.out.println("before reversing :" + str1);
        System.out.println("after reversing: " + str2);
    }
    String str1 = " Pw Skill ";
        String str2 = "";
        String sarr[] = str1.split(" ");
        for (int i = sarr.length-1 ; i>=0; i--) {
            str2 = str2 + sarr[i] + " ";
        }
        System.out.println("before reversing :" + str1);
        System.out.println("after reversing: " + str2);
    }*/
    String str1 = " Pw Skill ";
        String str2 = "";
        for (int i = str1.length()-1 ; i>=0; i--) {
            str2 = str2 + str1.charAt(i);
        }
        System.out.println("before reversing :" + str1);
        System.out.println("after reversing: " + str2);
    }
}
