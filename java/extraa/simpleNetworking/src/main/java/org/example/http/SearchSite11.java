// Sends and Http Get Request to the oreilly.com site and stores the resoponse in a file
// yes the name of this file makes no sense (it was a mistake)
package org.example.http;
import org.example.FileManager;

import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.nio.charset.Charset;

import static java.net.http.HttpResponse.BodyHandlers.ofString;

public class SearchSite11 {

  public static void main(String[] args) throws IOException, InterruptedException, URISyntaxException {
    var client = HttpClient.newBuilder().build(); // create client object that would send the request
    var url = new URI("https://www.oreilly.com"); // create the url object
    var request = HttpRequest.newBuilder(url).build(); // create response object parsing it the url needed

    // send the request from client object with, and store it's response
    // ofString((Charset.defaultCharset(), specifies the format of the response that will be stored in the response
    // object
    var response = client.send(request, ofString(Charset.defaultCharset()));

    // extract the body of the respnse
    var body = response.body();
    // write it to index.html file at the root of the working space
    FileManager.writeTofile("index.html", body);
  }
}
