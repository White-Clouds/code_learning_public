package hkxy.sy.test5.test3;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

public class ReadZipFile {
    public static void main(String args[]) {
        File f = new File(".\\src\\hkxy\\sy\\test5\\test3\\book.zip");
        File dir = new File(".\\src\\hkxy\\sy\\test5\\test3\\mybook");
        byte b[] = new byte[100];
        dir.mkdir();
        try {
            ZipInputStream in = new ZipInputStream(new FileInputStream(f));
            ZipEntry zipEntry = null;
            while ((zipEntry = in.getNextEntry()) != null) {
                File file = new File(dir, zipEntry.getName());
                FileOutputStream out = new FileOutputStream(file);
                int n = -1;
                System.out.println(file.getAbsolutePath() + "的内容：");
                while ((n = in.read(b, 0, 100)) != -1) {
                    String str = new String(b, 0, n);
                    System.out.println(str);
                    out.write(b, 0, n);
                }
                out.close();
            }
            in.close();
        } catch (IOException ee) {
            System.out.println(ee);
        }
    }
}
