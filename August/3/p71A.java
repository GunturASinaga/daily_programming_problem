import java.util.Scanner;

//SOLVED
public class p71A{
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String out = "";
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            out += coba() + "\n";
        }
        System.out.println(out);
    }

    public static String coba(){
        String a = sc.next();
        if(a.length() > 10){
            return a.charAt(0) + "" + (a.length()-2) + a.charAt(a.length()-1);
        } else{
            return a;
        }
        
    }
}