import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Gejeyuai {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        int palsu=0;
        int jml=input.nextInt();
        int ctk=input.nextInt();
        
        for (int i = 0; i < jml; i++) {
            int intiket = input.nextInt();
            if(intiket<=ctk){
                if(arr.contains(intiket)){
                    palsu++;
                }else{
                    arr.add(intiket);
                }
            }else{
                palsu++;
            }
        }
        System.out.print(palsu);
    }
}