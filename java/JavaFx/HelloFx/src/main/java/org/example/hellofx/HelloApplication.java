package org.example.hellofx;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.input.KeyCombination;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class HelloApplication extends Application {

  public static void main(String[] args) {
    launch();
  }

  @Override
  public void start(Stage stage) throws Exception {

    Group root = new Group();
    Scene scene = new Scene(root, Color.BLACK);
    Image icon = new Image("lookDownSu.jpg");

    stage.getIcons().add(icon);
    stage.setTitle("Void Of H00d");
    stage.setWidth(420);
    stage.setHeight(420);
    stage.setResizable(false);
    stage.setFullScreen(true);
    stage.setFullScreenExitHint("YOU CAN'T EXIT UNLESS YOU... ");
    stage.setFullScreenExitKeyCombination(KeyCombination.valueOf("q"));

    stage.setScene(scene);
    stage.show();
  }
}