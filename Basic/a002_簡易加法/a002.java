// 題目 : https://zerojudge.tw/ShowProblem?problemid=a002
// 作者 : Calvin Wan
// 時間 : 2021/08/10

import java.util.Scanner;
public class a002 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a, b;
        while(cin.hasNextInt()) {
            // 輸入a
            a = cin.nextInt();
            // 輸入b
            b = cin.nextInt();
            // 輸出a+b
            System.out.println(a + b);
        }
    }
}