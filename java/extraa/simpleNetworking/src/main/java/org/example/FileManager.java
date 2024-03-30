package org.example;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Paths;

public class FileManager {

  /**
   * writes data to a file
   * @param fileName: Name of file to write data to.
   * @param data: Data to be written
   * @throws IOException
   */
  public static void writeTofile(String fileName, String data) throws IOException {
    // Get the current directory (absolute path)
    // When the arg to get in Paths.get() is "", it returns the relative path of the running file
    String currentDir = Paths.get("").toAbsolutePath().toString();
    // Append the file name to the end of the currnt dir's Absolute path
    String filePath = Paths.get(currentDir, fileName).toString();
    System.out.println(filePath);

    try (BufferedWriter writer = new BufferedWriter(new FileWriter(filePath))) {
      writer.write(data);
      writer.flush();
      System.out.println("Data Written to file: " + fileName + " successfully.");
    } catch (IOException ex) {
      System.out.println("Could not wire data to file " + fileName);
      ex.printStackTrace();
    }
  }
}
