/*
 * given a set of activities along with starting and finishing time of each activity 
 * find the maximum number of activites performed by a single person 
 * assuming that a person can only work on a single activity at a time.

 */

import java.util.*;
public class job {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    System.out.println("Enter the no of acitivities:");
    n=sc.nextInt();
    int[] st;
    st=new int[n];
    int[] dt;
    dt=new int[n];
    for(int i = 0 ; i < n;i++){
        while(true){
            st[i]=sc.nextInt();
            dt[i]=sc.nextInt();
            if (st[i] > dt[i]||st[i]==dt[i]) {
                System.out.println("please enter correct output");
            }
            else break;
        }
    }
    for(int i =1 ; i < n;i++){
        for(int j =i+1; j < n; j++){
            if (st[i]<=st[j] && dt[i]>dt[j]) {
                int temps=st[i];
                int tmpd=dt[i];
                st[i]=st[j];
                st[j]=temps;
                dt[i]=dt[j];
                dt[j]=tmpd;
            }
        }
    }
    System.out.println("OUTPUT:");
    int end=dt[0];
    for (int i =0;i<n;i++){
        if(st[i]>end){
          System.out.println(st[i]+","+dt[i]);
          end=st[i];
        }
    }
}
    
}