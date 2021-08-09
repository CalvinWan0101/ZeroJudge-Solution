// 題目 : https://zerojudge.tw/ShowProblem?problemid=a001
// 作者 : Calvin Wan
// 時間 : 2021/08/10

import java.util.Scanner;
public class first {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        // 建立一個input的字串a
        String a;
        while(cin.hasNext()) {
            // 輸入字串a
            a = cin.nextLine();
            // 輸出"hello, "+ a
            System.out.println("hello, " + a);
        }
    }
}