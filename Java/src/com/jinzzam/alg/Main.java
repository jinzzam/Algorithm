package com.jinzzam.alg;

import java.io.*;

public class Main {

    public static int wordCount;
    public static StringBuilder stringBuilder = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
        String line;
        while ((line = in.readLine()) != null) toHTML(line);
        out.write(stringBuilder.toString());
        out.close();
        in.close();
    }

    private static void toHTML(String line) {
        //do something
    }
}
