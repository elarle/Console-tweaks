import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

import javax.print.DocFlavor.READER;

public class runner{
    public static void main(String[] args) {
        Terminal terminal = new Terminal();
    }
}
class Terminal{
    public Terminal(){
        try{
            Thread cmd = new Thread(){
                ProcessBuilder builder = new ProcessBuilder(".temp/run");
                Process a = builder.start();
            };
            cmd.start();
        } catch (IOException ex){
            ex.printStackTrace();
        }
    }
    public void print(String text){
        
    }
}
class Reader{
    public Reader(InputStreamReader in){
        Scanner s = new Scanner(in);
        while(s.hasNextLine()){System.out.print(s.nextLine());}
    }
}