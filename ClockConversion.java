import java.util.Scanner;
public class ClockConversion {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int tst=sc.nextInt();
        while(tst--!=0) {
            String ip=sc.next();
            String[] parts=ip.split(":");
            int hr=Integer.parseInt(parts[0]);
            int mins=Integer.parseInt(parts[1]);
            String p=(hr<12)? "AM" : "PM";
            hr%=12;
            if (hr==0) {
                hr=12;
            }
            System.out.printf("%02d:%02d %s\n", hr,mins,p);
           
        }
    }
}