package org.com.switchimage;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;

import java.util.EventListener;
import java.util.Objects;

public class HelloController {
    @FXML
    private ImageView imageView;
    private Button nextImage;
    private Button previousImage;

    Image nxtImage = new Image(Objects.requireNonNull(getClass().getResourceAsStream("Satoru.jpg")));

  public  void displayNextImage(ActionEvent e) {
    imageView.setImage(nxtImage);
  }

  public  void displayPreviousImage(ActionEvent e) {
    Image prevImage = new Image(Objects.requireNonNull(getClass().getResourceAsStream("Ryumen.jpg")));

    imageView.setImage(prevImage);
  }
}